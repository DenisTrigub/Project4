#include <iostream>
#include<time.h>
using namespace std;

template <typename T>

int Rand(T x)
{

	x =  rand() % 1000 ;
	return x;
}

template <typename T>

void Foo(T arr[], const T size = 60)
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
	const int size = 60;
	int arr[size];
	int year = 5;
	cin >> year;
	cout << endl;
    //ввод года
	switch (year)
	{
		
		//1 year
	case 1:
	{
		// ввод месеца
		int month = 12;
		cin >> month;
		switch (month)
		{

		case 1:
		{
			i
			
			Foo(arr,size);
		
		    
		}break;
		case 2:
		{

		}break;
		case 3:
		{

		}break;
		case 4:
		{

		}break;
		case 5:
		{

		}break;
		case 6:
		{

		}break;
		case 7:
		{

		}break;
		case 8:
		{

		}break;
		case 9:
		{

		}break;
		case 10:
		{

		}break;
		case 11:
		{

		}break;
		case 12:
		{
		}break;
		}
	}break;
	//2 year
	case 2:
	{
		int month = 12;
		switch (month)
		{
		case 1:
		{

		}break;
		case 2:
		{

		}break;
		case 3:
		{

		}break;
		case 4:
		{

		}break;
		case 5:
		{

		}break;
		case 6:
		{

		}break;
		case 7:
		{

		}break;
		case 8:
		{

		}break;
		case 9:
		{

		}break;
		case 10:
		{

		}break;
		case 11:
		{

		}break;
		case 12:
		{
		}break;
		}
	}break;
	//3 year
	case 3:
	{
		int month = 12;
		switch (month)
		{
		case 1:
		{

		}break;
		case 2:
		{

		}break;
		case 3:
		{

		}break;
		case 4:
		{

		}break;
		case 5:
		{

		}break;
		case 6:
		{

		}break;
		case 7:
		{

		}break;
		case 8:
		{

		}break;
		case 9:
		{

		}break;
		case 10:
		{

		}break;
		case 11:
		{

		}break;
		case 12:
		{
		}break;
		}
	}break;
	//4 year
	case 4:
	{
		int month = 12;
		switch (month)
		{
		case 1:
		{

		}break;
		case 2:
		{

		}break;
		case 3:
		{

		}break;
		case 4:
		{

		}break;
		case 5:
		{

		}break;
		case 6:
		{

		}break;
		case 7:
		{

		}break;
		case 8:
		{

		}break;
		case 9:
		{

		}break;
		case 10:
		{

		}break;
		case 11:
		{

		}break;
		case 12:
		{
		}break;
		}
	}break;
	//5 year
	case 5:
	{
		int month = 12;
		switch (month)
		{
		case 1:
		{

		}break;
		case 2:
		{

		}break;
		case 3:
		{

		}break;
		case 4:
		{

		}break;
		case 5:
		{

		}break;
		case 6:
		{

		}break;
		case 7:
		{

		}break;
		case 8:
		{

		}break;
		case 9:
		{

		}break;
		case 10:
		{

		}break;
		case 11:
		{

		}break;
		case 12:
		{
		}break;
		}
	}break;
	}

}