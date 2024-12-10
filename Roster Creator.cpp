#include <iostream>
#include <string>

using namespace std;

int i, j, n;
string people[10], roster;
string again = "Yes";

int main()
{
	cout << "\t*** Roster Creator Application ***\n\n";
	cout << "Hello and welcome to the Roster Creator Application.\n";
	cout << "With this application you can create a roster of any\nnumber of people and have it all organized in\nalphabetical order.\n";
	cout << "\nLets start off by establishing the size of the roster.";
	while (again == "yes" || again == "Yes")
	{
		cout << "\nHow many people are going to be in your roster?\n";
		cin >> n;
		cout << "\nNow enter " << n << " names to make up your roster\n";
		cin.ignore();
		for (i = 0; i < n; ++i)
		{
			getline(cin, people[i]);
		}
		for (i = 0; i < n - 1; ++i)
		{
			for (j = i + 1; j < n; ++j)
			{
				if (people[i].compare(people[j]) > 0)
				{
					roster = people[i];
					people[i] = people[j];
					people[j] = roster;
				}
			}
		}
		cout << "\n\t*** Your Roster In Alphabetical Order ***\n\n";
		for (i = 0; i < n; ++i)
		{
			cout << people[i] << " \n";
		}
		cout << "\n\nDo you want to create another roster?\n";
		cout << "\n(Please enter Yes or No)\n";
		getline(cin, again);
	}
}
