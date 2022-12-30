#include <iostream>
#include <vector>
#include "functions.h"
using namespace std;


int main()
{
	cout << "Enter the calculator type number:" << endl;
	cout << "1. aritmetic" << endl;
	cout << "2. logic" << endl;
	cout << "3. bitwise" << endl;
	cout << "4. sorting" << endl;
	int type = 0;
	cin >> type;
	int arithmeticOperationNumber = 0;
	int arithmeticValue1 = 0;
	int arithmeticValue2 = 0;
	int logicOperationNumber = 0;
	bool logicValue1;
	bool logicValue2;
	int bitwiseOperationNumber = 0;
	int bitwiseValue1 = 0;
	int bitwiseValue2 = 0;
	int sortingoperationNumber = 0;
	vector <int> vec;
	int sortingValue1 = 0;
	int sortingValue2 = 0;

	switch (type)
	{
	case 1: 
		cout << "Choose the operation number" << endl;
		cout << "1. addition" << endl;
		cout << "2. substraction " << endl;
		cout << "3. multiplycation" << endl;
		cout << "4. division" << endl;
		cout << "5. remainder" << endl;
		cout << "6. unary plus" << endl;
		cout << "7. unary minus" << endl;
		cout << "8. absolute value" << endl;
		cout << "9. square" << endl;
		cout << "10. square root" << endl;
		cout << "11. reciprocal function" << endl;
		cin >> arithmeticOperationNumber;
		cout << "Enter the first number" << endl;
		cin >> arithmeticValue1;
		if (arithmeticOperationNumber < 6)
		{
			cout << "Enter the second number" << endl;
			cin >> arithmeticValue2;
		}
		switch (arithmeticOperationNumber)
		{
		case 1:
			cout << addition(arithmeticValue1, arithmeticValue2);
			break;
		case 2:
			cout << substraction(arithmeticValue1, arithmeticValue2);
			break;
		case 3:
			cout << multiplication(arithmeticValue1, arithmeticValue2);
			break;
		case 4:
			cout << division(arithmeticValue1, arithmeticValue2);
			break;
		case 5:
			cout << remainder(arithmeticValue1, arithmeticValue2);
			break;
		case 6:
			cout << unaryPlus(arithmeticValue1);
			break;
		case 7:
			cout << unaryMinus(arithmeticValue1);
			break;
		case 8:
			cout << absoluteValue(arithmeticValue1);
			break;
		case 9:
			cout << square(arithmeticValue1);
			break;
		case 10:
			cout << squareRoot(arithmeticValue1);
			break;
		case 11:
			cout << reciprocalFunction(arithmeticValue1);
			break;
		}
		break;
	case 2:
		cout << "Choose the operation number" << endl;
		cout << "1. logic not" << endl;
		cout << "2. logic and " << endl;
		cout << "3. logic or" << endl;
		cout << "4. logic exclusive or" << endl;
		cout << "5. logic conjunction negation" << endl;
		cout << "6. logic disjunction negation" << endl;
		cin >> logicOperationNumber;
		cout << "Enter the first value" << endl;
		cin >> logicValue1;
		if (logicOperationNumber > 1)
		{
			cout << "Enter the second value" << endl;
			cin >> logicValue2;
		}
		switch (logicOperationNumber)
		{
		/*case 1:
			cout << negation(logicValue1);
			break;
		case 2:
			cout << conjunction(logicValue1, logicValue2);
			break;
		case 3:
			cout << disjunction(logicValue1, logicValue2);
			break;*/
		case 4:
			cout << exclusiveOr(arithmeticValue1, arithmeticValue2);
			break;
		case 5:
			cout << conjunctionNegation(arithmeticValue1, arithmeticValue2);
			break;
		case 6:
			cout << disjunctionNegation(arithmeticValue1, arithmeticValue2);
			break;
		}
		break;
	case 3:
		cout << "Choose the operation number" << endl;
		cout << "1. bitwise not" << endl;
		cout << "2. bitwise and " << endl;
		cout << "3. bitwise or" << endl;
		cout << "4. bitwise exclusive or" << endl;
		cout << "5. bitwise conjunction negation" << endl;
		cout << "6. bitwise disjunction negation" << endl;
		cin >> bitwiseOperationNumber;
		cout << "Enter the first value" << endl;
		cin >> bitwiseValue1;
		if (bitwiseOperationNumber > 1)
		{
			cout << "Enter the second value" << endl;
			cin >> bitwiseValue2;
		}
		/*switch (bitwiseOperationNumber)
		{
		case 1:
			cout << bitwiseNot(bitwiseValue1);
			break;
		case 2:
			cout << bitwiseAnd(bitwiseValue1, bitwiseValue2);
			break;
		case 3:
			cout << bitwiseOR(bitwiseValue1, bitwiseValue2);
			break;
		case 4:
			cout << bitwiseExlusiveOr(bitwiseValue1, bitwiseValue2);
			break;
		case 5:
			cout << bitwiseConjunctionNegation(bitwiseValue1, bitwiseValue2);
			break;
		case 6:
			cout << bitwiseDisjunctionNegation(bitwiseValue1, bitwiseValue2);
			break;
		}
		break;*/
	case 4:
		cout << "Choose the operation number" << endl;
		cout << "1. ascending comparision" << endl;
		cout << "2. descending comparison " << endl;
		cout << "3. shell sorting" << endl;
		cout << "4. selection sorting" << endl;
		cout << "5. insertion sorting" << endl;
		cout << "6. bubble sorting" << endl;
		cout << "7. odd even sorting" << endl;
		cout << "8. shaker sorting" << endl;
		cin >> sortingoperationNumber;
		if (sortingoperationNumber < 3)
		{
			cout << "Enter the first value" << endl;
			cin >> sortingValue1;
			cout << "Enter the second value" << endl;
			cin >> sortingValue2;
		}
		else
			vec = {3, 4, 8, 1, 7, 5, 2};
		switch (sortingoperationNumber)
		{
		case 1:
			cout << ascending(sortingValue1, sortingValue2);
			break;
		case 2:
			cout << descending(sortingValue1, sortingValue2);
			break;
		/*case 3:
			shellSort(vec);
			break;
		case 4:
			selectionSort(vec);
			break;
		case 5:
			insertionSort(vec);
			break;
		case 6:
			bubbleSort(vec);
			break;
		case 7:
			oddEvenSort(vec);
			break;
		case 8:
			shakerSort(vec);
			break;*/
		}
	
	}
}
 