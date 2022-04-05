// Функция получает указатель на массив и его размер, и 
// заполняет массив случайными числами
void Init(int* ptr, int size, int min, int max);

// Функция получает указатель на массив и его размер, и 
// заполняет массив случайными числами
void Init(double* ptr, int size, int min, int max);

// Функция получает указатель на массив и его размер, и 
// выводит массив на экран
void Print(int* ptr, int size);

// Функция получает указатель на массив и его размер, и 
// выводит массив на экран
void Print(double* ptr, int size);

// Функция создания динамического массива
double* Allocate(int size);

// Функция удаления динамического массива
void Free(double* ptr);

// Функция находит максимальное число в массиве.
double Max(double* ptrArr, int  size);

// Функция находит минимальное число в массиве.
double Min(double* ptrArr, int size);

// Функция ищет среднее арифметическое элементов массива.
double Avg(double* ptrArr, int size);

// Функция принимает в качестве параметров указатель на массив типа double, размер массива, а
// также указатель на функцию.
double Action(double * ptrArr, int size, double(*ptrAction)(double*, int));