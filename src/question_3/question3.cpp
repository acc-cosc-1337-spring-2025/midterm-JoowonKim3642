#include "question3.h"
#include <ctime>
#include <cstdlib>

using namespace std;

bool test_config()
{
    return true;
}

int roll_dice()
{  
    srand(time(NULL));
    int number = (rand( ) %6) + 1 ;
    return number;
}

bool testing()
{
    int test;
    for (int i = 0; i <= 10; ++i) 
    {
        test = roll_dice();
        if (test < 1 || test > 6){
            return false;
        }
        else {
            return true;
        }
    }
}