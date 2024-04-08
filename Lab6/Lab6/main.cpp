#include<iostream>
#include "Animal.h"
int main() {
	Animal a("dog", "Dog");
	a.displayInfo();
	

	Mammal m("dog", "Dog", false, 14);
	m.displayInfo();

	Bird b("pigeon", "Pigeon", 25);
	b.displayInfo();

	Reptile r("snake", "Snake", true);
	r.displayInfo();
}