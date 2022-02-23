#include <iostream>
#include<time.h>
using namespace std;

template <typename T>
int Rand(T x)
{
	x = rand() % 10;
	return x;
}

template <typename T>
void Foo(T arr[],const T size = 10)
{
	for (T i = 0; i < size; i++)
	{
		arr[i] = Rand(arr[i]);
		cout << endl;
		cout << arr[i];
	}

}


int main()
{
	const int size = 10;
	int arr[size];
	Foo(arr, size);
	
	return 0;
}