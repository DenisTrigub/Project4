#include <iostream>
#include<time.h>
using namespace std;

template <typename T>
void Foo(T arr[], const T size = 10)
{
	for (T i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
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