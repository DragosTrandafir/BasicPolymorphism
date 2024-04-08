#include<iostream>
using namespace std;

#pragma once
class Animal
{
public:
	Animal(std::string pcommonName, std::string pscientificName);
	void displayInfo();
protected:
	std::string commonName;
	std::string scientificName;
};

class Mammal : public Animal {

public:
	Mammal(std::string pcommonName, std::string pscientificName, bool pisAquatic, unsigned char pgestationPeriod);
	void displayInfo();
private:
	bool isAquatic;
	unsigned char gestationPeriod;
};

class Bird : public Animal {
public:
	Bird(std::string pcommonName, std::string pscientificName, unsigned int pwingSpan);
	void displayInfo();
private:
	unsigned int wingSpan;
};

class Reptile : public Animal {
public:
	Reptile(std::string pcommonName, std::string pscientificName, bool pisVenomous);
	void displayInfo();
private:
	bool isVenomous;
};
