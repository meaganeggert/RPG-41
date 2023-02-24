#include <iostream>
#include <string>
#include <random>
#include <time.h>
#include <vector>
#include <CImg.h>
#include "fruits.h"
using namespace cimg_library;
using namespace std;


int main() {
        srand(time(NULL));
        Actor BoringDude;
        Hero AwesomeSavior;
        Monster ScaryGuy;
        Banana bob;
        Ninja jackie;
        Trainer ash;

        cout << endl;
        cout << "Boring < Awesome? " << (BoringDude < AwesomeSavior) << endl;
        cout << "Awesome < Scary? " << (AwesomeSavior < ScaryGuy) << endl;
        cout << "Boring < Scary? " << (BoringDude < ScaryGuy) << endl;

        cout << "BoringDude: " << endl
            << "Health: " << BoringDude.get_health() << endl
            << "Speed: " << BoringDude.get_speed() << endl
            << "Power: " << BoringDude.get_power() << endl
            << BoringDude.get_attack() << endl;
        cout << endl;

        cout << "AwesomeSavior: " << endl
            << "Health: " << AwesomeSavior.get_health() << endl
            << "Speed: " << AwesomeSavior.get_speed() << endl
            << "Power: " << AwesomeSavior.get_power() << endl
            << AwesomeSavior.get_attack() << endl;
        cout << endl;

        cout << "ScaryGuy: " << endl
            << "Health: " << ScaryGuy.get_health() << endl
            << "Speed: " << ScaryGuy.get_speed() << endl
            << "Power: " << ScaryGuy.get_power() << endl
            << ScaryGuy.get_attack() << endl;
        cout << endl;

        cout << "Bob the Banana: " << endl
            << "Health: " << bob.get_health() << endl
            << "Speed: " << bob.get_speed() << endl
            << "Power: " << bob.get_power() << endl
            << bob.get_attack() << endl;
        cout << endl;

        cout << "Ninja: " << endl
            << "Health: " << jackie.get_health() << endl
            << "Speed: " << jackie.get_speed() << endl
            << "Power: " << jackie.get_power() << endl
            << jackie.get_attack() << endl;
        cout << endl;

        cout << "Ash: " << endl
            << "Health: " << ash.get_health() << endl
            << "Speed: " << ash.get_speed() << endl
            << "Power: " << ash.get_power() << endl
            << ash.get_attack() << endl;
        cout << endl;


        cout << "Apply DMG Test: " << endl;
        cout << "Ash's OG Health: " <<  ash.get_health() << endl;
        ash.apply_damage(5);
        cout << "Ash's Ending Health: " << ash.get_health() << endl;
        cout << endl;

        Watermelon sandy;
        cout << "Sandy's OG Health: " << sandy.get_health() << endl;
        cout << "Defense: " << sandy.get_defense() << endl;
        sandy.apply_damage(5);
        cout << "Sandy's Ending Health: " << sandy.get_health() << endl;
        cout << endl;

        cout << "Bob's OG Health: " << bob.get_health() << endl;
        cout << "Slippage: " << bob.get_slippage() << endl;
        bob.apply_damage(5);
        cout << "Bob's Ending Health: " << bob.get_health() << endl;
        cout << endl;

        Chef boyardee;
        cout << "Chef's OG Health: " << boyardee.get_health() << endl;
        cout << "Server Shield: " << boyardee.get_server() << endl;
        boyardee.apply_damage(5);
        cout << "Chef's New Shield: " << boyardee.get_server() << endl;
        cout << "Chef's Ending Health: " << boyardee.get_health() << endl;
        boyardee.apply_damage(5);
        cout << "Chef's New Shield: " << boyardee.get_server() << endl;
        cout << "Chef's Ending Health: " << boyardee.get_health() << endl;


}
