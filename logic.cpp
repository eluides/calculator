#include <iostream>
#include "functions.h"
using namespace std;

bool negation(bool a) 
{
    if (a = true)
        return false;
    else
        return true;
}

bool conjunction(bool a, bool b) 
{
    if (a = true)
    {
        if (b = true)
            return true;
        else 
            return false;
    }   
    else
        return false;
}

bool disjunction(bool a, bool b) 
{
    bool result = a || b;
    return result;
}

bool exclusiveOr(bool a, bool b) 
{
    bool result = a ^ b;
    return result;
}

bool conjunctionNegation(bool a, bool b) 
{
    bool result = !(a && b);
    return result;

}

bool disjunctionNegation(bool a, bool b) 
{
    bool result = !(a || b);
    return result;
}
