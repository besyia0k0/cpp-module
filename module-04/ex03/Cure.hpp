#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"

class Cure: public AMateria {
  public:
    Cure();
    Cure(const std::string& type);
    Cure(const Cure& cure);
    Cure& operator=(const Cure& cure);
    virtual ~Cure();

    AMateria* clone() const;
    void use(ICharacter& target);

  private:

};

#endif