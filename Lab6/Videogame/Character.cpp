#include "Character.h"

Character::Character()
{
    name = "";
    health = 0;
    level = 0;
}

Character::Character(string pname, unsigned char phealth, unsigned int plevel)
{
    name = pname;
    health = phealth;
    level = plevel;
}

string Character::name_getter() const
{
    return this->name;
}

unsigned char Character::health_getter() const
{
    return this->health;
}

unsigned int Character::level_getter() const
{
    return this->level;
}

void Character::name_setter(string name)
{
    this->name = name;
}

void Character::health_setter(unsigned char health)
{
    this->health = health;
}

void Character::level_setter(unsigned int level)
{
    this->level = level;
}

Wizard::Wizard()
{
    mana = 0;
    spellPower = 0;
}

Wizard::Wizard(int pmana, vector<string> pspells, int pspellPower)
{
    mana = pmana;
    spellPower = pspellPower;
    spells = pspells;
}

bool Wizard::castSpell(string spell)
{
    for(string s: spells)
        if (s == spell)
        {
            if (mana >= spellPower)
                this->mana_setter(mana - 10);
            else
                return false;
            return true;

        }
    
    return false;
}

void Wizard::mana_setter(int mana)
{
    this->mana = mana;
}

Knight::Knight(float parmor, int pswordDamage)
{
    armor = parmor;
    swordDamage = pswordDamage;
}

Knight::Knight()
{
    armor = 0;
    swordDamage = 0;
}

void Knight::armor_setter(float armor)
{
    this->armor = armor;
}

void Knight::takeDamage(int damage)
{
    this->armor_setter(armor - damage);
    if (armor < 0)
        this->health_setter(0);
}
