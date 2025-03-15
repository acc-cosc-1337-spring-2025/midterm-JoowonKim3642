#include "question1.h"
#include <iostream>
#include <vector>

using std::cin; using std::cout;

int main() 
{
    int user_input;
    int choice;
    std::vector<int> prime_list;

    do
    {
        cout << "Please enter number in range of 1 to 60: ";
        cin >> user_input;
        
        if (user_input < 1 || user_input > 60) {
            cout << "\nInput out of range\n";
        }
        else {
            prime_list = get_primes(user_input);

            cout << "The list of primes preceding " << user_input << " are ";
    
            for (int number: prime_list)
                cout << number << " ";
        
            cout << "\n";
            cout << "1 - Stay\n";
            cout << "2 - Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;
        }
        
    } while (choice != 2);
    
	return 0;
}