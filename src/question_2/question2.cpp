#include "question2.h"

bool test_config()
{
    return true;
}

std::string get_factorial_sequence(int num) 
{
    std::string sequence = "1";
    int factorial = 1;

    for (int i = 2; i <= num; ++i) 
    {
        sequence += "x" + std::to_string(i);
        factorial *= i;
    }

    sequence += "=" + std::to_string(factorial);
    return sequence;
}