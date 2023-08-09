#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource {
  public:
    MateriaSource();
    MateriaSource(const MateriaSource& materiaSource);
    MateriaSource& operator=(const MateriaSource& materiaSource);
    virtual ~MateriaSource();

    void learnMateria(AMateria* aMateria);
  	AMateria* createMateria(const std::string& type);

  private:
    AMateria* sources_[4];
};


#endif