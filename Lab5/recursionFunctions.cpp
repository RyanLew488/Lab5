#include "recursionFunctions.hpp"

void recursivePrint(std::string* reverse)
{

	
}

int recursiveAddition(int* intArr, int numElements)
{
	if (numElements == 0)
	{
		std::cout << "Running the base case \n";
		return 0;
	}
	else
	{
		std::cout << "Running the recursive case \n";
		return (intArr[numElements - 1] + recursiveAddition(intArr, numElements - 1));
	}
	return 0;
}

