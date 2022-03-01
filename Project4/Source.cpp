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

void Foo(T arr[], const T size = 30)
{
	int sum = 0;
	for (T i = 0; i < size; i++)
	{
		arr[i] = Rand(arr[i]);
		cout << endl;
		cout << arr[i];
		sum += arr[i];
	}
	cout << endl;
	cout << endl;
	cout << "сума за мес€ц";
	cout << endl;
	cout << endl;
	cout << sum;
}

template <typename T>
void Foo2(T arr[], const T size = 1800)
{
	int sum = 0;
	for (T i = 0; i < size; i++)
	{
		arr[i] = Rand(arr[i]);
		cout << endl;
		cout << arr[i];
		sum += arr[i];
	}
	cout << endl;
	cout << endl;
	cout << "сума за год";
	cout << endl;
	cout << endl;
	cout << sum;
}



int main()
{
	setlocale(0, "");
	const int size = 30;
	const int size2 = 1800;
	int arr[size];
	int arr2[size2];
	int year = 6;
	cout << " введите год от 1 до 5 \n или введите 6 дл€ того чтоб узнатьб прибыль за 5 лет:";
	cout << endl;
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
		cout << "введите мес€ц:";
		switch (month)
		{

		case 1:
		{
			Foo(arr, size);
		}break;
		case 2:
		{
			Foo(arr, size);
		}break;
		case 3:
		{
			Foo(arr, size);
		}break;
		case 4:
		{
			Foo(arr, size);
		}break;
		case 5:
		{
			Foo(arr, size);
		}break;
		case 6:
		{
			Foo(arr, size);
		}break;
		case 7:
		{
			Foo(arr, size);
		}break;
		case 8:
		{
			Foo(arr, size);
		}break;
		case 9:
		{
			Foo(arr, size);
		}break;
		case 10:
		{
			Foo(arr, size);
		}break;
		case 11:
		{
			Foo(arr, size);
		}break;
		case 12:
		{
			Foo(arr, size);
		}break;
		}
	}break;
	//2 year
	case 2:
	{
		int month = 12;
		cout << "введите мес€ц:";
		cin >> month;
		switch (month)
		{
		case 1:
		{


			Foo(arr, size);


		}break;
		case 2:
		{
			Foo(arr, size);
		}break;
		case 3:
		{
			Foo(arr, size);
		}break;
		case 4:
		{
			Foo(arr, size);
		}break;
		case 5:
		{
			Foo(arr, size);
		}break;
		case 6:
		{
			Foo(arr, size);
		}break;
		case 7:
		{
			Foo(arr, size);
		}break;
		case 8:
		{
			Foo(arr, size);
		}break;
		case 9:
		{
			Foo(arr, size);
		}break;
		case 10:
		{
			Foo(arr, size);
		}break;
		case 11:
		{
			Foo(arr, size);
		}break;
		case 12:
		{
			Foo(arr, size);
		}break;
		}
	}break;
	//3 year
	case 3:
	{
		int month = 12;
		
		cout << "введите мес€ц:";
		cin >> month;
		switch (month)
		{
		case 1:
		{


			Foo(arr, size);


		}break;
		case 2:
		{
			Foo(arr, size);
		}break;
		case 3:
		{
			Foo(arr, size);
		}break;
		case 4:
		{
			Foo(arr, size);
		}break;
		case 5:
		{
			Foo(arr, size);
		}break;
		case 6:
		{
			Foo(arr, size);
		}break;
		case 7:
		{
			Foo(arr, size);
		}break;
		case 8:
		{
			Foo(arr, size);
		}break;
		case 9:
		{
			Foo(arr, size);
		}break;
		case 10:
		{
			Foo(arr, size);
		}break;
		case 11:
		{
			Foo(arr, size);
		}break;
		case 12:
		{
			Foo(arr, size);
		}break;
		}
	}break;
	//4 year
	case 4:
	{
		int month = 12;
		cout << "введите мес€ц:";
		cin >> month ;
		switch (month)
		{
		case 1:
		{


			Foo(arr, size);


		}break;
		case 2:
		{
			Foo(arr, size);
		}break;
		case 3:
		{
			Foo(arr, size);
		}break;
		case 4:
		{
			Foo(arr, size);
		}break;
		case 5:
		{
			Foo(arr, size);
		}break;
		case 6:
		{
			Foo(arr, size);
		}break;
		case 7:
		{
			Foo(arr, size);
		}break;
		case 8:
		{
			Foo(arr, size);
		}break;
		case 9:
		{
			Foo(arr, size);
		}break;
		case 10:
		{
			Foo(arr, size);
		}break;
		case 11:
		{
			Foo(arr, size);
		}break;
		case 12:
		{
			Foo(arr, size);
		}break;
		}
	}break;
	//5 year
	case 5:
	{
		int month = 12;
		cout << "введите мес€ц:";
		cin >> month;
		switch (month)
		{
		case 1:
		{


			Foo(arr, size);


		}break;
		case 2:
		{
			Foo(arr, size);
		}break;
		case 3:
		{
			Foo(arr, size);
		}break;
		case 4:
		{
			Foo(arr, size);
		}break;
		case 5:
		{
			Foo(arr, size);
		}break;
		case 6:
		{
			Foo(arr, size);
		}break;
		case 7:
		{
			Foo(arr, size);
		}break;
		case 8:
		{
			Foo(arr, size);
		}break;
		case 9:
		{
			Foo(arr, size);
		}break;
		case 10:
		{
			Foo(arr, size);
		}break;
		case 11:
		{
			Foo(arr, size);
		}break;
		case 12:
		{
			Foo(arr, size);
		}break;
		}
	}break;
	case 6:
	{
		Foo2(arr2,size2);
	}break;
	}
}