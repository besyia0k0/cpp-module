#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure(): AMateria("cure") {}

Cure::Cure(const Cure& cure) {
  *this = cure;
}

Cure& Cure::operator=(const Cure& cure) {
  type_ = cure.type_;
  return *this;
}

Cure::~Cure() {}

AMateria* Cure::clone() const {
  return new Cure();
}

void Cure::use(ICharacter& target) {
  std::cout << "* heals " << target.getName() << "\'s wounds *" << std::endl;
}
