#include <iostream>
#include<time.h>
using namespace std;


void Foo(int arr[],const int size = 10)
{
	for (int i = 0; i < size; i++)
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