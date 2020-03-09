#include <string>
#include <iostream>


class poke
{

public :

    poke(std::string nom, int vie, int defense, int attack);

    int get_attack() ;
    int get_defense() ;
	void set_vie(int vie);
	int get_vie();
	void attack(poke &cible);
	void affiche_data();


private :

    int m_vie;
    int m_defense;
	int m_attack;
    std::string m_nom;

};
