#include "recursionFunctions.hpp"
#include "helperFunctions.hpp"

int main()
{
	int choice = 0;
	bool cont = true;
	std::string reverse;
	int* intArr = nullptr;
	int numElements = 0;
	int sum;


	while (cont)
	{

		cout << "Please choose which function you would like to run\n";
		cout << "1: Print a string in reverse\n";
		cout << "2: Calculate the sum of an array of integers\n";
		cout << "3: Calculate the triangle number of a number N \n";
		cout << "4: Exit the program\n";

		choice = iRangeValid("", 1, 4);

		switch (choice)
		{
		case 1:
			cout << "Please enter a string \n";
			std::getline(cin, reverse);
			//recursivePrint(reverse);
			break;

		case 2:
			sum = 0;
			numElements = 0;
			cout << "Please enter the number of elements you want\n";
			numElements = iValid("");
			intArr = new int[numElements];
			
			for (int i = 0; i < numElements; i++)
			{
				cout << "Please enter the " << i << "th value in the array\n";
				intArr[i] = iValid("");
			}

			sum = recursiveAddition(intArr, numElements);

			std::cout << "The sum of your array is " << sum << std::endl;
			break;

		case 3:
			break;
		case 4:
			cont = false;
			break;
		}
	}

	std::cin.get();
	return 0;
}