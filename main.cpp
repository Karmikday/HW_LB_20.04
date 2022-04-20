#include <iostream>
#include <time.h>
using namespace std;
bool Check(int* buf, int size, int elem)
{
	for (size_t i = 0; i < size; i++)
	{
		if (buf[i] == elem)
		{
			return true;
		}
	}
	return false;
}
int* foo(int* arr1, int* arr2, int size, int& new_size)
{
	int k = 0;
	int* buf = new int[size];
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			if (arr1[i] == arr2[j])
			{
				if (Check(buf, k, arr1[i]) == false)
				{
					buf[k] = arr1[i];
					k++;
				}
			}
		}
	}
	new_size = k;
	int* new_arr = new int[k];
	for (size_t i = 0; i < k; i++)
	{
		new_arr[i] = buf[i];
	}
	delete[] buf;
	return new_arr;
}
int main()
{
	srand(time(0));
	int size;
	cout << "Size->";
	cin >> size;
	int* arr1 = new int[size];
	int* arr2 = new int[size];
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
	int new_size;
	cout << "Res = ";
	int* res = foo(arr1, arr2, size, new_size);
	for (size_t i = 0; i < new_size; i++)
	{
		cout << res[i] << "\t";
	}
	cout << endl;
	cout << "------------------------------------" << endl;

}