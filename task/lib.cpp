#include <iostream>
#include <iomanip>

using std::cout;
using std::setprecision;

// Функция получает указатель на массив и его размер, и 
// заполняет массив случайными числами
void Init(int* ptr, int size, int min, int max)
{
	for (int i = 0; i < size; i++)
	{
		*ptr = rand() % (max - min + 1) + min;
		ptr++;
	}
}

// Функция получает указатель на массив и его размер, и 
// заполняет массив случайными числами
void Init(double* ptr, int size, int min, int max)
{
	for (int i = 0; i < size; i++)
	{
		*ptr = (rand() % (max - min + 1) + min) * 0.99;
		ptr++;
	}
}

// Функция получает указатель на массив и его размер, и 
// выводит массив на экран
void Print(int* ptr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << ptr[i] << '\t';
	}
}

// Функция получает указатель на массив и его размер, и 
// выводит массив на экран
void Print(double* ptr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << setprecision(4) << ptr[i] << '\t';
	}
}

// функция создания динамического массива
double* Allocate(int size)
{
	return new double[size];
}

// функция удаления динамического массива
void Free(double* ptr)
{
	delete[] ptr;
}

// Функция находит максимальное число в массиве.
double Max(double* ptrArr, int size)
{
	double max = ptrArr[0];
	for (int i = 0; i < size; i++)
	{
		if (ptrArr[i] > max)
			max = ptrArr[i];
	}
	return max;
}

// Функция находит минимальное число в массиве.
double Min(double* ptrArr, int size)
{
	double min = ptrArr[0];
	for (int i = 0; i < size; i++)
	{
		if (ptrArr[i] < min)
			min = ptrArr[i];
	}
	return min;
}

// Функция ищет среднее арифметическое элементов массива.
double Avg(double* ptrArr, int size)
{
	double sum{ 0.0 };
	for (int i = 0; i < size; i++)
	{
		sum = sum + ptrArr[i];
	}
	return sum / size;
}

// Функция принимает в качестве параметров указатель на массив типа double, размер массива, а
// также указатель на функцию.
double Action(double* ptrArr, int size, double(*ptrAction)(double*, int))
{
	return ptrAction(ptrArr, size);
}