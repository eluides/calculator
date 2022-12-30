#include <iostream>
#include "functions.h"
using namespace std; 

int bitwiseNot(int a)
{
	return ~a;
}

int bitwiseAnd(int a, int b) 
{
	int result = a & b;
	return result;
}

int bitwiseOR(int a, int b) 
{
	int result = a | b;
	return result;
}

int bitwiseExlusiveOr(int a, int b) 
{
	int result = a ^ b;
	return result;
}

int bitwiseConjunctionNegation(int a, int b) 
{
	int result = ~(a & b);
	return result;
}

int bitwiseDisjunctionNegation(int a, int b)
{
	int result = ~(a | b);
	return result;
}

