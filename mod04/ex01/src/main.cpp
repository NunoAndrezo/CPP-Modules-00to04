#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Brain.hpp"

int main(void)
{
	std::cout << "\n🐾 --- Creating Animal Array --- 🐾\n";
	const int numAnimals = 6;
	Animal* animals[numAnimals];

	for (int i = 0; i < numAnimals; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	std::cout << "\n🔊 --- Making Sounds --- 🔊\n";
	for (int i = 0; i < numAnimals; ++i)
		animals[i]->makeSound();

	std::cout << "\n🧠 --- Setting Ideas --- 🧠\n";
// animals[0] ius an Animal* but actually points to a Dog object.
// static_cast<Dog*>(...) tells the compiiler to treat it as a Dog* so we can access Dog-specific members.
// must be sure the object really is a Dog, otherwise this would be undefined behavior.
	Dog* dog1 = static_cast<Dog*>(animals[0]);
	dog1->setIdea("Chase the mailman");
	dog1->setIdea("Dig a hole");
	dog1->setIdea("Eat homework");

	Cat* cat1 = static_cast<Cat*>(animals[1]);
	cat1->setIdea("Nap in the sun");
	cat1->setIdea("Push glass off the table");
	cat1->setIdea("Scratch the couch");

	std::cout << "\n🐶 Dog's Ideas:\n";
	dog1->printIdeas();
	std::cout << "\n🐱 Cat's Ideas:\n";
	cat1->printIdeas();

	std::cout << "\n📋 --- Deep Copy Test (Dog) --- 📋\n";
	Dog* copyDog = new Dog(*dog1);
	std::cout << "\nCopied Dog's ideas:\n";
	copyDog->printIdeas();

	std::cout << "\nModifying original Dog's ideas...\n";
	dog1->setIdea("Bark at nothing");

	std::cout << "\nOriginal Dog's ideas:\n";
	dog1->printIdeas();

	std::cout << "\nCopied Dog's ideas (should remain unchanged):\n";
	copyDog->printIdeas();

	std::cout << "\n📋 --- Assignment Operator Test (Dog) --- 📋\n";
	Dog assignDog; // default Dog
	assignDog = *dog1; // use operator= to copy the original Dog

	std::cout << "\nAssigned Dog's ideas:\n";
	assignDog.printIdeas();

	std::cout << "\nModifying original Dog's ideas...\n";
	dog1->setIdea("Chew shoes");

	std::cout << "\nOriginal Dog's ideas:\n";
	dog1->printIdeas();

	std::cout << "\nAssigned Dog's ideas (should remain unchanged):\n";
	assignDog.printIdeas();


	std::cout << "\n🧹 --- Deleting Copied Dog --- 🧹\n";
	delete copyDog;

	std::cout << "\n🔥 --- Deleting Animal Array --- 🔥\n";
	for (int i = 0; i < numAnimals; i++)
		delete animals[i];

	std::cout << "\n✅ --- End of Tests --- ✅\n";
	return 0;
}
