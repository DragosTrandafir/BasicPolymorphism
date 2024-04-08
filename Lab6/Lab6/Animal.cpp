#include "Animal.h"
#include<iostream>

//Animal
Animal::Animal(std::string pcommonName, std::string pscientificName) :commonName{ pcommonName }, scientificName{ pscientificName } {

}
void Animal::displayInfo() {
	std::cout << "Animal: " << this->commonName << " " << this->scientificName << std::endl;

}

//Mammal
Mammal::Mammal(std::string pcommonName, std::string pscientificName, bool pisAquatic, unsigned char pgestationPeriod) : Animal{ pcommonName ,pscientificName }, isAquatic{ pisAquatic }, gestationPeriod{ pgestationPeriod } {

}
void Mammal::displayInfo() {
	std::cout << "Mammal:" << std::endl << "\t";
	Animal::displayInfo();
	std::cout << "isAquatic " << this->isAquatic << " , " << "gestationPeriod " << int(this->gestationPeriod) << std::endl;
	cout << std::endl;

}

//Bird
Bird::Bird(std::string pcommonName, std::string pscientificName, unsigned int pwingSpan) :Animal{ pcommonName ,pscientificName }, wingSpan{ pwingSpan } {

}
void Bird::displayInfo() {
	std::cout << "Bird:" << std::endl << "\t";
	Animal::displayInfo();
	std::cout << "wingSpan " << wingSpan << std::endl;
	cout << std::endl;
}

//Reptile
Reptile::Reptile(std::string pcommonName, std::string pscientificName, bool pisVenomous) :Animal{ pcommonName ,pscientificName }, isVenomous{ pisVenomous } {
}
void Reptile::displayInfo() {
	std::cout << "Reptile:" << std::endl << "\t";
	Animal::displayInfo();
	std::cout << "isVenomous " << isVenomous << std::endl;
	cout << std::endl;
}