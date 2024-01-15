#include <iostream>
using namespace std;

int main()
{
    int nbr;

    while (true)
    {
        cout << "Enter a number : ";

        if (cin >> nbr) // Checks if the input is an integer

        {
            if (nbr % 2 == 0)
                cout << "Even!\n";
            else
                cout << "Uneven!\n";
        }
        else
        {
            cout << "invalid. enter a whole number .\n";
            cin.clear();           // Resets input error flag
            cin.ignore(10000, '\n'); // Ignores the rest of the incorrect line
        }
    }

    return 0;
}

