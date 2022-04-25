#include<iostream>
using namespace std;
void mas1() {
	const int size1 = 5;
	int A[size1] = { 1,2,3,4,5 };
	int* pa = A;

	for (int i = 0; i < size1; i++)
		cout << *pa++ << ' ';
	cout << '\n';

}
void mas2() {
	const int size2 = 6;
	int B[size2] = { 6,4,2,8,9,7 };
	int* pb = B;

	for (int i = 0; i < size2; i++)
		cout << *pb++ << ' ';
	cout << '\n';
}

void mas() {
	const int size = 11;
	int C[size] = { 1,2,3,4,5,6,4,2,8,9,7 };
	int* pc = C;

	for (int i = 0; i < size; i++)
		cout << *pc++ << ' ';
	cout << '\n';
}

int main() 
{
	mas();
	mas2();
	mas1();

}