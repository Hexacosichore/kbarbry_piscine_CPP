#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main( void )
{
	const Animal		*meta = new Animal();
	const Animal		*j = new Dog();
	const Animal		*i = new Cat();
	const WrongAnimal	*wrA = new WrongAnimal();
	const WrongAnimal	*wrC = new WrongCat();

	std::cout << std::endl;
	std::cout << meta->getType() << std::endl;
	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;
	std::cout << std::endl;
	meta->makeSound();
	i->makeSound();
	j->makeSound();
	std::cout << std::endl;

	std::cout << wrA->getType() << std::endl;
	std::cout << wrC->getType() << std::endl;
	std::cout << std::endl;
	wrA->makeSound();
	wrC->makeSound();

	std::cout << std::endl;
	delete meta;
	delete j;
	delete i;
	delete wrA;
	delete wrC;
	return 0;
}
