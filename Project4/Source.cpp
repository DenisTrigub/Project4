#include <iostream>
#include<time.h>
using namespace std;

template <typename T>
void Foo(T arr[],const T size = 10)
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
	
	
	return 0;
}