#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	// const AAnimal		*meta = new AAnimal();
	const AAnimal		*j = new Dog();
	const AAnimal		*i = new Cat();

	std::cout << std::endl;
	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;
	std::cout << std::endl;
	i->makeSound();
	j->makeSound();
	std::cout << std::endl;

	// delete meta;
	delete j;
	delete i;
	return 0;
}