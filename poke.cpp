#include "poke.h"

using namespace std;


poke::poke(string nom, int vie, int defense, int attack): m_nom(nom), m_vie(vie), m_defense(defense), m_attack(attack)
{


}



int poke::get_attack()
{

	return m_attack;
}


int poke::get_defense()
{

	return m_defense;
}

void poke::set_vie(int vie)
{

	m_vie=vie;
}


int poke::get_vie()
{
	return m_vie;
}

void poke::attack(poke &cible)
{

    int degats = m_attack - cible.get_defense();
    cible.set_vie(cible.get_vie()-degats);
}

void poke::affiche_data()
{
    cout <<  m_nom << " a " << m_vie << " points de vie" << endl;
}
