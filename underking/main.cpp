#include <bits/stdc++.h>
#include <charcreate.cpp>

using namespace std;

int main()
{
    //Main Menu
    cout << "The Quest For The Underking's Crown" << '\n';
    cout << "msdos60, 2022" << '\n';
    cout << '\n';
    cout << "What would you like to do?" << endl;
    cout << "1. Start game" << endl;
    cout << "2. Exit game" << endl;
    int select;
    cin >> select;
    cout << endl;
    //Character Creator
    if(select == 1)
    {
        //Name
        cout << "What's Your name, adventurer?" << endl;
        string name, surname;
        cin >> name >> surname;
        cout << endl;
        //Race
        int race;
        cout << "Where do You hail from, " << name << " " << surname << "?" << endl;
        cout << "1. Jospar" << endl;
        cout << "2. Xugloetho" << endl;
        cout << "3. Crei Prary" << endl;
        cout << "4. Bloat Thor" << endl;
        cout << "5. Ucheau" << endl;
        cin >> race;
        cout << endl;
        //Class
        cout << "What are you, " << name << " " << surname;
        if(race == 1) cout << ", the Human?" << endl;
        if(race == 2) cout << ", the Elf?" << endl;
        if(race == 3) cout << ", the Dwarf?" << endl;
        if(race == 4) cout << ", the Orc?" << endl;
        if(race == 5) cout << ", the Goblin?" << endl;
        cout << "1. Champion" << endl;
        cout << "2. Sorcerer" << endl;
        cout << "3. Marksman" << endl;
        cout << "4. Rogue" << endl;
        int cclass;
        cin >> cclass;
        //Character proficiency
        int proficiency1;
        int proficiency2;
        int proficiency3;
        int proficiency4;
        cout << endl << "What's Your proficiency, " << name << " " << surname;
        if(race == 1) cout << ", the Human ";
        if(race == 2) cout << ", the Elf ";
        if(race == 3) cout << ", the Dwarf ";
        if(race == 4) cout << ", the Orc ";
        if(race == 5) cout << ", the Goblin ";
        //seperating code line
        if(cclass == 1) cout << "Champion?" << '\n';
        if(cclass == 2) cout << "Sorcerer?" << '\n';
        if(cclass == 3) cout << "Marksman?" << endl;
        if(cclass == 4) cout << "Rogue?" << endl;
        //separating code line ep2. electric boogaloo
        if(cclass == 1)
        {
            cout << "1. Swords" << endl;
            cout << "2. Axes" << endl;
            cout << "3. Maces" << endl;
            cout << "4. Heavy Armor" << endl;
            cout << "5. Blocking" << endl;
            cin >> proficiency1;
            cout << '\n';
        }

        if(cclass == 2)
        {
            cout << "1. Destruction" << endl;
            cout << "2. Restoration" << endl;
            cout << "3. Alteration" << endl;
            cout << "4. Illusion" << endl;
            cout << "5. Conjuration" << endl;
            cin >> proficiency2;
            cout << '\n';
        }

        if(cclass == 3)
        {
            cout << "1. Bows" << endl;
            cout << "2. Crossbows" << endl;
            cout << "3. Throwing" << endl;
            cout << "4. Medium Armor" << endl;
            cout << "5. Spears" << endl;
            cin >> proficiency3;
            cout << '\n';
        }

        if(cclass == 4)
        {
            cout << "1. Stealth" << endl;
            cout << "2. Lockpicking" << endl;
            cout << "3. Pickpocketing" << endl;
            cout << "4. Light Armor" << endl;
            cout << "5. Speechcraft" << endl;
            cin >> proficiency4;
            cout << '\n';
        }
        //Character Stats
        int STR;
        int DEX;
        int END;
        int CHR;
        cout << "Please align Your stats and review Your character before starting.";
        cout << '\n';
        cout << "STR:" << '\n';
        cout << "DEX:" << '\n';
        cout << "END:" << '\n';
        cout << "CHR:" << '\n';
    }
    return 0;
}
