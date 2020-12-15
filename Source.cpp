#include<iostream>
using namespace std;

void FillArray(int (*arr)[3],size_t n)
{
	for (int j = 0; j < 3; j++)
	{
		for (int i = 0; i < 3; i++)
		{
			cin >> arr[j][i];
		}
	}
}

void PrintArray(int(*arr)[3], size_t n)
{
	for (int j = 0; j < 3; j++)
	{
		for (int i = 0; i < 3; i++)
		{
			cout << arr[j][i];
		}
		cout << endl;
	}
}

void PrintArrayTotal(int(*arrtotal)[3], size_t n)
{
	for (int j = 0; j < 3; j++)
	{
		for (int i = 0; i < 3; i++)
		{
			cout << arrtotal[j][i];
		}
		cout << endl;
	}
}

int main()
{
	setlocale(LC_ALL, "rus");
	system("color F0");


	int arr[3][3]{};
	int arr1[18]{};
	int arrtotal[3][3]{};
	int line1, line2, line3;


	cout << "Введите элементы двумерного массива" << endl;
	FillArray(arr, 3);
	cout << "Двумерный массив до преобразований" << endl;
	PrintArray(arr, 3);


	line1 = arr[0][0];
	line2 = arr[1][0];
	line3 = arr[2][0];


	for (int j = 2; j < 3; j++)
	{
		for (int i = 0; i < 3; i++)
		{
			arr1[i] = arr[j][i];
		}
	}
	for (int j = 0; j < 1; j++)
	{
		for (int i = 0; i < 3; i++)
		{
			arr1[i+3] = arr[j][i];
		}
	}
	for (int j =1 ; j < 2; j++)
	{
		for (int i = 0; i < 3; i++)
		{
			arr1[i+6] = arr[j][i];
		}
	}


	for (int i = 2; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			arr1[j+9] = arr[j][i];
		}
	}
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			arr1[j+12] = arr[j][i];
		}
	}for (int i = 1; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			arr1[j+15] = arr[j][i];
		}
	}

	cout << "Вывод одномерного массива" << endl;
	for (int i = 0; i < 18; i++)
	{
		cout << arr1[i];
	}
	cout << endl;


	for (int k = 0; k < 18; k++)
	{
		if (arr1[k] == line1)
		{
			for (int j = 0; j < 1; j++)
			{
				for (int i = 0; i < 3; i++)
				{
					arrtotal[j][i] = arr1[k+i];
				}
			}
		}
		if (arr1[k] == line1)
		{
			break;
		}
		
	}
	for (int k = 0; k < 18; k++)
	{
		if (arr1[k] == line2)
		{
			for (int j = 1; j < 2; j++)
			{
				for (int i = 0; i < 3; i++)
				{
					arrtotal[j][i] = arr1[k + i];
				}
			}
		}
		if (arr1[k] == line2)
		{
			break;
		}

	}
	for (int k = 0; k < 18; k++)
	{
		if (arr1[k] == line3)
		{
			for (int j = 2; j < 3; j++)
			{
				for (int i = 0; i < 3; i++)
				{
					arrtotal[j][i] = arr1[k + i];
				}
			}
		}
		if (arr1[k] == line3)
		{
			break;
		}

	}

	cout << "Вывод массива после всех преобразований" << endl;
	PrintArrayTotal(arrtotal, 3);
}