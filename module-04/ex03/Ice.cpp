#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice(): AMateria("ice") {}

Ice::Ice(const Ice& ice) {
  *this = ice;
}

Ice& Ice::operator=(const Ice& ice) {
  type_ = ice.type_;
  return *this;
}

Ice::~Ice() {}

AMateria* Ice::clone() const {
  return new Ice();
}

void Ice::use(ICharacter& target) {
  std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
