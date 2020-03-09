#include <iostream>
#include <string>
#include "poke.h"


using namespace std;

int main()
{
    poke robert=poke ("robert",30,4,7);
    poke gerard=poke ("gerard",20,5,9);



    robert.affiche_data();
    gerard.affiche_data();

    cout << "robert attaque gerard" << endl;
    robert.attack(gerard);

    robert.affiche_data();
    gerard.affiche_data();

    cout << "gerard attaque robert" << endl;
    gerard.attack(robert);

    robert.affiche_data();
    gerard.affiche_data();

    return 0;
}
