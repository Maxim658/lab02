#pragma once
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

// Functions for Task1
double Plus(double, double);
double Minus(double, double);
double Multiply(double, double);
double Divide(double, double);
double func(double, double, double(*pf)(double, double));

// Functions for Task2
int SumElem(int *a, int size);
void(*Choice(int *a, int size))(int *a, int size);
void Inverse(int *a, int size);
void Sort(int *a, int size);
void SortInverse(int *a, int size);
void swap(int *a, int *b);
void PrintArray(int *a, int size);



#endif
