#include<iostream>
#include"question2.h"
using namespace std;

int main()
{
    int user_input;
    int choice;

    do
    {
        cout << "Please enter number in range of 1 to 10: ";
        cin >> user_input;
        
        if (user_input < 1 || user_input > 10) {
            cout << "\nInput out of range\n";
        }
        else {
            std::string result = get_factorial_sequence(user_input);

            cout << "Factorial Sequence: " << result << endl;
            cout << "1 - Stay\n";
            cout << "2 - Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;
        }
        
    } while (choice != 2);
    
	return 0;
}