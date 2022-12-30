#include <iostream>
#include <cmath>
#include "functions.h"
using namespace std;

int addition(int a, int b)
{
    int result = a + b;
    return result;
}

int substraction(int a, int b)
{
    int result = a - b;
    return result;
}

int multiplication(int a, int b)
{
    int result = a * b;
    return result;
}

int division(int a, int b)
{
    if (b != 0)
    {
        int result = a / b;
        return result;
    }
    else
        cout << "Error! Division by zero.";
}

int remainder(int a, int b)
{
    if (b != 0)
    {
        int result = a % b;
        return result;
    }
    else
        cout << "Error! Division by zero.";
}

int unaryPlus(int a) 
{
    return a;
}

int unaryMinus(int a) 
{
    int result = a * (-1);
    return result;
}

int absoluteValue(int a)
{
    return a;
}

double square(double a)
{
    double result = a * a;
    return result;
}

double squareRoot(double a)
{
    double result = sqrt(a);
    return result;
}

double reciprocalFunction(double a)
{
    if (a != 0)
    {
        double result = 1 / a;
        return result;
    }
    else
        cout << "Error! Division by zero.";
}



