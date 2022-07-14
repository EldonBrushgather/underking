#include <iostream>

using namespace std;

int main()
{
    //Main Menu
    cout << "The Quest For The Underking's Crown" << endl;
    cout << "msdos60, 2022" << endl;
    cout << endl;
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
        cout << "1. Fighter" << endl;
        cout << "2. Wizard" << endl;
        cout << "3. Ranger" << endl;
        cout << "4. Rogue" << endl;
        cout << "5. Healer" << endl;
        int cclass;
        cin >> cclass;
        //Character proficiency
        int proficiency;
        cout << endl << "What's Your proficiency, " << name << " " << surname;
        if(race == 1) cout << ", the Human ";
        if(race == 2) cout << ", the Elf ";
        if(race == 3) cout << ", the Dwarf ";
        if(race == 4) cout << ", the Orc ";
        if(race == 5) cout << ", the Goblin ";
        //seperating code line
        if(cclass == 1) cout << "Fighter?" << endl;
        if(cclass == 2) cout << "Wizard?" << endl;
        if(cclass == 3) cout << "Ranger?" << endl;
        if(cclass == 4) cout << "Rogue?" << endl;
        if(cclass == 5) cout << "Healer?" << endl;
        //separating code line ep2. electric boogaloo
        if(cclass == 1)
    }
    return 0;
}
