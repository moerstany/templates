﻿#include<iostream>
using namespace std;

//VCS - Version Conreol System
//СКВ - Система контроля версий
//Commit
//Branches
//Scram, Agile....
//GitHub
//VCS: SVN, Subversion, Jira, .... !!!Git!!!
//GitHub
//Repository - это хранилище исходных кодов.


void function()
{
	cout << "Без параметров" << endl;
}
int function(int a)
{
	cout << "Один параметр типа int" << endl;
	return 0;
}

const int ROWS = 8;
const int COLS = 5

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(char arr[], const int n);

void FillRand(int arr[ROWS][COLS], const int m, const int n);
void FillRand(int arr[ROWS][COLS], const int m, const int n);
void FillRand(int arr[ROWS][COLS], const int m, const int n);

template <typename T>void Print(T arr[], const int n);
template <typename T> void Print(T arr[ROWS][COLS], const int m, const int n);

template <typename T> T Sum(T arr[], const n);
template <typename T> T Sum(T arr[ROWS][COLS], const n, const m);

void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 10;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);

	const int D_SIZE = 8;
	double d_arr[D_SIZE];
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);

	//setlocale(LC_ALL, "C");
	const int C_SIZE = 25;
	char c_arr[C_SIZE];
	FillRand(c_arr, C_SIZE);
	Print(c_arr, C_SIZE);

	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
		arr[i] /= 10;
	}
}
void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
	}
}

void FillRand(int arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand() % 10000;
			arr[i][j] /= 100;

		}
	}
}
template <typename T> void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
template <typename T> void Print(T arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

template <typename T> T Sum(T arr[], const n)
{

}

template <typename T> T Sum(T arr[ROWS][COLS], const n, const m)
{
for (int i = 0; i < n; i++)
}
