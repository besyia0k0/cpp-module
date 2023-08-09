#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP
# include <iostream>
# include <string>

class AMateria;

class ICharacter {
  public:
    virtual ~ICharacter() {}
    virtual const std::string& getName() const = 0;
    virtual void equip(AMateria* aMateria) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter& target) = 0;
};

#endif