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
        //Class
        cout << "What are you, " << name << " " << surname << "?" << endl;
        cout << "1. Fighter" << endl;
        cout << "2. Wizard" << endl;
        cout << "3. Ranger" << endl;
        cout << "4. Rogue" << endl;
        cout << "5. Healer" << endl;
        int cclass;
        cin >> cclass;
        cout << endl;
        cout << "What's Your proficiency, " << name << " " << surname << ", The " << cclass;
    }
    return 0;
}
