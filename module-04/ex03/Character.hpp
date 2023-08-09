#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"

class Character: public ICharacter {
  public:
    Character();
    Character(std::string name);
    Character(const Character& character);
    Character& operator=(const Character& character);
    virtual ~Character();

    /* getter */
    const std::string& getName() const;

    /* methods */
    void equip(AMateria* aMateria);
    void unequip(int idx);
    void use(int idx, ICharacter& target);

  private:
    AMateria*   inventory_[4];
    std::string name_;

    bool  isMateriaExist(int idx);
};

#endif