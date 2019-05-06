#include "pch.h"
#include <iostream>
#include "Functions.h"

using namespace std;

// Functions for Task1
double Plus(double a, double b)
{
	return a + b;
}
double Minus(double a, double b)
{
	return a - b;
}
double Multiply(double a, double b)
{
	return a * b;
}
double Divide(double a, double b)
{
	return a / b;
}
double func(double a, double b, double(*pf)(double, double))
{
	return pf(a, b);
}

// Functions for Task2
int SumElem(int *a, int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += a[i];
	return sum;
}
void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void Inverse(int *a, int size)
{
	for (int i = 0; i < size / 2; i++)
		swap(&a[i], &a[size - i - 1]);
}
void Sort(int *a, int size)
{
	for (int i = 0; i < size - 1; i++) 
		for (int j = 0; j < size - i - 1; j++)
			if (a[j] > a[j + 1])
				swap(&a[j], &a[j + 1]);
}
void SortInverse(int *a, int size)
{
	Sort(a, size);
	Inverse(a, size);
}

void PrintArray(int *a, int size)
{
	for (int i = 0; i < size; i++)
		cout << a[i] << " ";
	cout << "sum = " << SumElem(a, size);
	cout << endl;
}

void(*Choice(int *a, int size))(int *a, int size)
{
	int sum = SumElem(a, size);
	if (sum == a[0])
		return Inverse;
	else if (sum > a[0])
		return Sort;
	else
		return SortInverse;
}