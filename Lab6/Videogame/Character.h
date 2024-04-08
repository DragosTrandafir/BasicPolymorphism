#include<string>
#include<vector>
#include<iostream>
#include<cassert>
using std::string;
using std::vector;


#pragma once
class Character
{
public:
	Character();
	Character(string pname, unsigned char phealth, unsigned int plevel);

	string name_getter() const;
	unsigned char health_getter() const;
	unsigned int level_getter() const;

	void name_setter(string name);
	void health_setter(unsigned char health);
	void level_setter(unsigned int level);
private:
	string name;
	unsigned char health;
	unsigned int level;
	friend class CharacterTest;
};

class Wizard : public Character {
public:
	Wizard();
	Wizard(int pmana, vector<string> pspells, int pspellPower);
	bool castSpell(string spell);
	void mana_setter(int mana);
private:
	int mana;
	vector<string> spells;
	int spellPower;
};

class Knight : public Character {
public:
	Knight(float parmor,int pswordDamage);
	Knight();
	void armor_setter(float armor);
	void takeDamage(int damage);
private:
	float armor;
	int swordDamage;
};


class CharacterTest {
	static void testSetName() {
		// TODO your code here
		Character c;
		c.name_setter("Dragos");
		assert(c.name_getter() == "Dragos");
	}
	// TODO other test methods
public:
	static void runAll() {
		// TODO call all the other methods
		testSetName();
		std::cout << "Tests complete!" << std::endl;
	}
};