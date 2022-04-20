#include <iostream>
#include <time.h>
using namespace std;
int main()
{
	srand(time(0));
	int size;
	cout << "Size->";
	cin >> size;
	int* arr1 = new int[size];
	int* arr2 = new int[size];
	int* arr3 = new int[size];
	cout << "------------------------------------" << endl;
	cout << "FIRST ARRAY" << endl;
	cout << "------------------------------------" << endl;
	for (size_t i = 0; i < size; i++)
	{
		arr1[i] = rand() % 20 + 1;
		cout << arr1[i] << endl;
	}
	cout << "------------------------------------" << endl;
	cout << "SECOND ARRAY" << endl;
	cout << "------------------------------------" << endl;
	for (size_t i = 0; i < size; i++)
	{
		arr2[i] = rand() % 20 + 1;
		cout << arr2[i] << endl;
	}
	cout << "------------------------------------" << endl;
	cout << "FINAL ARRAY" << endl;
	cout << "------------------------------------" << endl;
	for (size_t i = 0; i < size; i++)
	{
		arr3 = arr1;
		cout << arr3[i] << endl;
	}
	for (size_t i = 0; i < size; i++)
	{
		arr3 = arr2;
		cout << arr3[i] << endl;
	}
	cout << "------------------------------------" << endl;

}