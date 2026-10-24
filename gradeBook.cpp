
//*ATTENTION, ALL COINCIDENCE WITH REAL PEOPLE IS AN ACCIDENT!!!

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <cctype>

using namespace std;

void ClearConsole() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

int main()
{
    int number;
    char command;

    vector<string> list = { "John Johnson", "Stasy Scumbag", "Bob Pancakes", "Jack Smit" };
    vector<char> valuation = { 'A', 'F', 'C', 'D' };

    while (true) {
        for (int i = 0; i < list.size(); i++) {
            cout << i + 1 << ". " << list[i] << " " << valuation[i] << "\n";
        }

        cout << "Enter the student number and grade (e.g. 1 F): ";
        cin >> number >> command;

        command = toupper(command);

        switch (command) {
            case 'A': 
                valuation[number - 1] = command;
                break;

            case 'B': 
                valuation[number - 1] = command;
                break;

			case 'C': 
                valuation[number - 1] = command;
                break;

            case 'D': 
                valuation[number - 1] = command;
                break;

            case 'F': 
                valuation[number - 1] = command;
                break;
        }

        ClearConsole();
    }

    return 0;
}