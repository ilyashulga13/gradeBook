#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

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

	while (true){
	    for (int i = 0; i < list.size(); i++)
		    cout << i + 1 << ". " << list[i] << " " << valuation[i] << "\n";

	    cin >> number >> command;

	    switch (command) {
	    case 'f':
	    case 'F': valuation[number - 1] = command;

	    }



	    ClearConsole();
	}

}
