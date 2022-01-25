#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

# define MATERIASOURCE_SIZE 4

class MateriaSource : public IMateriaSource {
	protected:
		AMateria	*_type[MATERIASOURCE_SIZE];
		int			_count;
	public:
		MateriaSource();
		MateriaSource(const MateriaSource& src);
		MateriaSource& operator=(const MateriaSource &src);

		void		learnMateria(AMateria* materia);
		AMateria*	createMateria(std::string const & materia);

		~MateriaSource();
};

#endif
