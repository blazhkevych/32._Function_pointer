/*
						Указатель на функцию
	Написать программу, которая содержит функцию Action, принимающую
в качестве параметров указатель на массив типа double, размер массива, а
также указатель на функцию. Программа должна отобразить пользователю
меню, в котором он может выбрать один из трех пунктов: maximum, minimum,
average. Если выбран пункт maximum, то в функцию Action передается адрес
функции, которая ищет максимум в массиве. Если выбран пункт minimum, то
в функцию Action передается адрес функции, которая ищет минимум в
массиве. Если выбран пункт average, то в функцию Action передается адрес
функции, которая ищет среднее арифметическое элементов массива.
Возвращаемое значение функции Action – результат, который вернет одна из
этих трех функций (maximum, minimum, average). Все три функции должны
принимать в качестве параметров указатель на массив типа double, а также
размер массива. Функции должны возвращать результат типа double
*/
//2.51.19
#include <iostream>
#include "lib.h"
using std::cout;
using std::endl;
using std::cin;

int main()
{
	srand(time(0));
	char answer{ 0 };

	do
	{
		int size{ 5 };
		double* ptrArr = Allocate(size);
		Init(ptrArr, size, 1.00, 99.00);
		Print(ptrArr, size);
		cout << endl;
		double(*ptrAction)(double*, int) { nullptr };

		int choice{ 0 };
		cout << "Enter number: "
			<< "\n1. Minimum"
			<< "\n2. Maximum"
			<< "\n3. Average"
			<< endl;
		cin >> choice;

		switch (choice)
		{
		case 1: // Minimum
			ptrAction = Min;
			cout << Action(ptrArr, size, ptrAction);
			break;

		case 2: // Maximum
			ptrAction = Max;
			cout << Action(ptrArr, size, ptrAction);
			break;

		case 3: // Average
			ptrAction = Avg;
			cout << Action(ptrArr, size, ptrAction);
			break;
		}

		Free(ptrArr);
		cout << endl;
		cout << "Do you want to continue? ( y (yes) / n (no) )\n";
		cin >> answer;
		cout << endl;

	} while (answer == 'y');

	return 0;
}