#pragma once
#include<iostream>
using namespace std;

//VCS - Version Conreol System
//��� - ������� �������� ������
//Commit
//Branches
//Scram, Agile....
//GitHub
//VCS: SVN, Subversion, Jira, .... !!!Git!!!
//GitHub
//Repository - ��� ��������� �������� �����.


void function()
{
	cout << "��� ����������" << endl;
}
int function(int a)
{
	cout << "���� �������� ���� int" << endl;
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
#include "Function.h"