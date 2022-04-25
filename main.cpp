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
        int tmp = 0;
        for (int i = 0; i < size; i++)
        {
            bool inBoth = false;
            for (int j = 0; j < size; j++)
            {
                if (arr1[i] == arr2[j]) {
                    inBoth = true;
                    break;
                }
            }
            if (!inBoth)
                tmp++;
        }
        for (int i = 0; i < size; i++)
        {
            bool inBoth = false;
            for (int j = 0; j < size; j++)
            {
                if (arr2[i] == arr1[j]) {
                    inBoth = true;
                    break;
                }
            }
            if (!inBoth)
                tmp++;
        }

        int size3 = tmp;
        int* arr3 = new int[size3];
        tmp = 0;
        for (int i = 0; i < size; i++)
        {
            bool inBoth = false;
            for (int j = 0; j < size; j++)
            {
                if (arr1[i] == arr2[j]) {
                    inBoth = true;
                    break;
                }
            }
            if (!inBoth)
                arr3[tmp++] = arr1[i];
        }
        for (int i = 0; i < size; i++)
        {
            bool inBoth = false;
            for (int j = 0; j < size; j++)
            {
                if (arr2[i] == arr1[j]) {
                    inBoth = true;
                    break;
                }
            }
            if (!inBoth)
                arr3[tmp++] = arr2[i];
        }
        for (int i = 0; i < size3; i++)
            cout << arr3[i] << " ";

        cout << endl;

		cout << "------------------------------------" << endl;
	}