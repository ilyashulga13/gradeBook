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

    vector<string> list = { "John Johnson", "Stasy Scumbag", "Bob Pancakes" };
    vector<char> valuation = { 'A', 'F', 'C' };

    while (true) {
        for (int i = 0; i < list.size(); i++) {
            cout << i + 1 << ". " << list[i] << " " << valuation[i] << "\n";
        }

        cout << "Введите номер студента и оценку (например, 1 F): ";
        cin >> number >> command;

        command = toupper(command);

        switch (command) {
            case 'F': 
                valuation[number - 1] = command;
                break;

            case 'B': 
                valuation[number - 1] = command;
                break;

			case 'C': 
                valuation[number - 1] = command;
                break;
        }

        ClearConsole();
    }

    return 0;
}