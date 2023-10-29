#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <iostream>
#include "./Brain.hpp"

class Animal
{
	protected:
		std::string	_type;
	public:
		Animal();
		Animal(const Animal &src);
		virtual ~Animal();
		Animal&	operator=(const Animal &src);
		const std::string	getType()const;
		virtual void	makeSound()const;
		virtual Brain*	getBrain() const = 0;
};



#endif