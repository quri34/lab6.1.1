#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		a[i] = -10 + rand() % 46;
}

void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << endl;
}

int Sum(int* a, const int size)
{
	int S = 0;
	for (int i = 0; i < size; i++)
		if (a[i] > 0 || !(a[i] % 3 == 0))
			S += a[i];
	return S;
}

int Count(int* a, const int size)
{
	int C = 0;
	for (int i = 0; i < size; i++)
		if (a[i] > 0 || !(a[i] % 3 == 0))
			C++;
	return C;
}

void Replace(int a[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		if (a[i] > 0 || !(a[i] % 3 == 0))
			a[i] = 0;
	}
}

int main()
{
	srand((unsigned)time(NULL));

	const int size = 22;
	int a[size];


	Create(a, size);
	Print(a, size);

	cout << "The sum of the elements that satisfy the condition = " << Sum(a, size) << endl;
	cout << "The number of elements that satisfy the condition = " << Count(a, size) << endl;

	Replace(a, size);
	Print(a, size);

	return 0;
}
