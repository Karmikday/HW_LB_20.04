#include <iostream>
using namespace std;
int main()
{
	int size;
	cout << "Enter the size->";
	cin >> size;
	int* arr = new int[size];
	cout << "Enter the values->" << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	while (true)
	{
		int choice;
		cout << "\nMenu:" << endl;	
		cout << "1 - Remove even values ​​from an array";
		cout << "2 - Remove odd values ​​from an array";
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			int ns = 0;
			for (int i = 0; i < size; i++)
			{
				if (arr[i] % 2 != 0)
				{
					arr[ns++] = arr[i];
				}
			}
			for (int i = 0; i < ns; i++) 
			{
				cout << arr[i] << " ";
			}
		}break;
		case 2:
		{




		}break;
		}
	}
}