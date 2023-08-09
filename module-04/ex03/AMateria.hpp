#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
# include <string>

class ICharacter;

class AMateria {
  public:
    AMateria();
    AMateria(const std::string& type);
    AMateria(const AMateria& aMateria);
    AMateria& operator=(const AMateria& aMateria);
    virtual ~AMateria();

    /* getter */
    const std::string& getType() const; //Returns the materia type
   
    /* methods */
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);

  protected:
    std::string type_;
};

#endif