#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 100;
	int num1[SIZE], num2[SIZE];

	int N, M, i, j;

	cout << "Enter the number of elements for the array Num1: ";
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cout << "Enter an integer value for the array Num1: ";
		cin >> num1[i];
	}

	cout << "Enter the number of elements for the array Num2: ";
	cin >> M;
	for (int i = 0; i < M; i++)
	{
		cout << "Enter an integer value for the array Num2: ";
		cin >> num2[i];
	}
	
	/****************************************
	Make Your Code Here
	****************************************/
	cout << "False" << endl; // Or
	cout << "True" << endl;
}
