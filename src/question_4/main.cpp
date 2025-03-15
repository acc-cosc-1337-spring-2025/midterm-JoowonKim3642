#include <iostream>
#include "question4.h"

using std::cout;
using std::cin;

int main()
{
    int seconds;
    cout << "\nEnter seconds since 1970\n";
    cin >> seconds;
    cout << "\nTime " << get_hours(seconds) << ":" << get_minutes(seconds) << ":" << get_seconds(seconds) << "\n";
    return 0;
}