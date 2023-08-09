#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(): name_("default") {
  for (int i = 0; i < 4; i++)
    inventory_[i] = NULL;
}

Character::Character(std::string name): name_(name) {
  for (int i = 0; i < 4; i++)
    inventory_[i] = NULL;
}

Character::Character(const Character& character) {
  *this = character;
}

Character& Character::operator=(const Character& character) {
  name_ = character.name_;
  for (int i = 0; i < 4; i++) {
    if (inventory_[i] != NULL) {
      delete inventory_[i];
      inventory_[i] = NULL;
    }
    if (character.inventory_[i] != NULL) {
      inventory_[i] = character.inventory_[i]->clone();
    }
  }
  return *this;
}

Character::~Character() {
  for (int i = 0; i < 4; i++){
    if (inventory_[i] != NULL){
      delete inventory_[i];
      inventory_[i] = NULL;
    }
  }
}

const std::string& Character::getName() const {
  return name_;
}

void Character::equip(AMateria* aMateria) {
  for (int i = 0; i < 4; i++) {
    if (inventory_[i] == NULL) {
      inventory_[i] = aMateria;
      return ;
    }
  }
}

void Character::unequip(int idx) {
  if (isMateriaExist(idx))
    inventory_[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
  if (isMateriaExist(idx))
   inventory_[idx]->use(target); 
}

bool  Character::isMateriaExist(int idx) {
  return (idx >= 0 && idx <= 3) && inventory_[idx] != NULL;
}
