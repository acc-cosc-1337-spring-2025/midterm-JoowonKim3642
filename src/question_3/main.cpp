#include <iostream>
#include "question3.h"
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int result;
    char choice;

    do
    {
        cout << "roll the dice?(Y/N)";
        cin >> choice;
        if (choice == 'y' || choice == 'Y')
        {
            result = roll_dice();
            cout << "Result: " << result << endl;
            
        }
        else
        {
            break;
        }
    } while (choice == 'y' || choice == 'Y');
    
    cout << "STOP";
    return 0;
}