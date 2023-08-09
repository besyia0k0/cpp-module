#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(): type_("default") {}

AMateria::AMateria(const std::string& type): type_(type) {}

AMateria::AMateria(const AMateria& aMateria) {
  *this = aMateria;
}

AMateria& AMateria::operator=(const AMateria& aMateria) {
  type_ = aMateria.type_;
  //todo: ice = cure 해서 type 옮겨지는지 보기
  //While assigning a Materia to another, copying the type doesn’t make sense.
  return *this;
}

AMateria::~AMateria() {}

const std::string& AMateria::getType() const {
  return type_;
}

void AMateria::use(ICharacter& target) {
  std::cout << "* use default materia to " << target.getName() << " *" << std::endl;
}
