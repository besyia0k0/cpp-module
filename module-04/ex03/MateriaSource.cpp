#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
  for (int i = 0; i < 4; i++) {
    sources_[i] = NULL;
  }
}

MateriaSource::MateriaSource(const MateriaSource& materiaSource) {
  *this = materiaSource;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& materiaSource) {
  for (int i = 0; i < 4; i++) {
    if (sources_[i] != NULL) {
      delete sources_[i];
      sources_[i] = NULL;
    }
    if (materiaSource.sources_[i] != NULL) {
      sources_[i] = materiaSource.sources_[i]->clone();
    }
  }
  return *this;
}

MateriaSource::~MateriaSource() {
  for (int i = 0; i < 4; i++) {
    if (sources_[i] != NULL) {
      delete sources_[i];
      sources_[i] = NULL;
    }
  }
}

void MateriaSource::learnMateria(AMateria* aMateria) {
  for (int i = 0; i < 4; i++) {
    if (sources_[i] == NULL) {
      sources_[i] = aMateria->clone();
      return ;
    }
  }
}

AMateria* MateriaSource::createMateria(const std::string& type) {
  for (int i = 0; i < 4; i++) {
    if (sources_[i] != NULL && sources_[i]->getType() == type) {
      return sources_[i]->clone();
    }
  }
  return NULL;
}

