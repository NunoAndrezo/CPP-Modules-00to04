#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"

int	main(void)
{
	Animal* meta = new Animal();
	Animal* j = new Dog();
	Animal* i = new Cat();

	WrongAnimal* w = new WrongAnimal();
	WrongAnimal* wc = new WrongCat();

	std::cout << meta->getType() << std::endl;
	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;
	std::cout << w->getType() << std::endl;
	std::cout << wc->getType() << std::endl;
	meta->makeSound();
	i->makeSound(); //will output the cat sound!
	j->makeSound();

	w->makeSound();
	wc->makeSound();

	delete meta;
	delete j;
	delete i;
	delete w;
	delete wc;

	return (0);
}