#include "pch.h"
#include <iostream>
#include "Functions.h"
#include <ctime>
using namespace std;

void Task1()
{
	double a, b;

	cout << "Input a: ";
	cin >> a;
	cout << "Input b: ";
	cin >> b;

	cout << "Plus: " << func(a, b, Plus) << endl;
	cout << "Minus: " << func(a, b, Minus) << endl;
	cout << "Multiply: " << func(a, b, Multiply) << endl;
	cout << "Divide: " << func(a, b, Divide) << endl;

	cout << endl;
}
void Task2()
{
	srand(time(NULL));

	const int size = 10;
	int arr[size];
	for (int i = 0; i < size; i++)
		arr[i] = rand() % 101 - 50;

	PrintArray(arr, size);
	void(*pfunc)(int *a, int size) = Choice(arr, size);
	pfunc(arr, size);
	PrintArray(arr, size);

	cout << endl;
}

int Menu()
{
	int c;
	cout << "1. Task1" << endl;
	cout << "2. Task2" << endl;
	cout << "0. Exit" << endl;
	cin >> c;
	return c;
}

int main()
{
	int c = 1;
	while (c)
	{
		c = Menu();
		switch (c)
		{
		case 1:
			Task1();
			break;
		case 2:
			Task2();
			break;
		define:
			cout << "Wrong input! Try again!" << endl << endl;
		}
	}
}

