#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>




int main() {
	setlocale(LC_ALL, "Russian");
	int n,m;

	
	// Задача 1. Сортировка первых N элементов

	/*
	std::cout << "Задача 1.\nИзначальный массив:\n";

	const int size1 = 10;
	int arr1[size1]{};


	srand(time(NULL));
	for (int i = 0; i < size1; i++) {
			arr1[i] = rand() % 10 + 1;   // [1..10]
			std::cout << arr1[i] << ", ";
	}
	std::cout << "\b\b.\n";

	std::cout << "Введите число элементов для сортировки -> ";
	std::cin >> n;

	while (n < 2 || n > size1) {
		std::cout << "Ошибка ввода! Повторите ввод -> ";
		std::cin >> n;
	}


	// пузырькова сортировка
	for (int i = n - 1; i > 0; i--)
		for (int j = 0; j < i; j++)
			if (arr1[j] > arr1[j + 1])
				std::swap(arr1[j], arr1[j + 1]);

	//std::sort(arr1, arr1 + n);
	std::cout << "Итоговый массив:\n";
	for (int i = 0; i < size1; i++) {
		std::cout << arr1[i] << ", ";
	}
	std::cout << "\b\b.\n\n";
	*/


	// Задача 2. Случайная температура в январе от -30 до -5
	/*
	std::cout << "Задача 2.\nТемпература в январе от -30 до -5.\n";

	const int january_days = 31;
	int january_temperature[january_days]{};

	srand(time(NULL));
	for (int day_number = 0; day_number < january_days; day_number++) {
		january_temperature[day_number] = rand() % 26 - 30;
		std::cout << january_temperature[day_number] << " ";
	}

	int sum = 0; // для суммы температур января
	int count = 0; // для подсчета температур < n

	std::cout << "\nВведите температуру -> ";
	std::cin >> n;
	for (int day_number = 0; day_number < january_days; day_number++) {
		sum += january_temperature[day_number];
		if (january_temperature[day_number] < n)
			count++;
		
	}

	std::cout << "Средняя температура в январе: " << (double)sum / january_days << '\n';
	std::cout << "Количество дней когда температура была меньше " << n << ": " << count << "\n\n";
	*/

	// Задача 3. Вхождение в диапазон
	
	
	const int size3 = 20;
	int arr3[size3]{};

	std::cout << "Задача 3.\nВведите начало и конец диапазона -> ";
	std::cin >> n >> m;

	std::cout << "Итог: \n";
	srand(time(NULL));
	for (int i = 0; i < size3; i++) {
		arr3[i] = rand() % 100; // [0..100)
		/*if (n <= arr3[i] && arr3[i] <= m)
			std::cout << i + 1 << ": " << arr3[i] << "!\n";
		else
			std::cout << i + 1 << ": " << arr3[i] << '\n';*/
		std::cout << i + 1 << ": " << arr3[i] << (n <= arr3[i] && arr3[i] <= m ? "!" : " ") << "\n";
	}
	
	return 0;
}