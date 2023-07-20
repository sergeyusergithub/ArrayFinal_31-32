#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>




int main() {
	setlocale(LC_ALL, "Russian");
	int n,m;

	
	// ������ 1. ���������� ������ N ���������

	/*
	std::cout << "������ 1.\n����������� ������:\n";

	const int size1 = 10;
	int arr1[size1]{};


	srand(time(NULL));
	for (int i = 0; i < size1; i++) {
			arr1[i] = rand() % 10 + 1;   // [1..10]
			std::cout << arr1[i] << ", ";
	}
	std::cout << "\b\b.\n";

	std::cout << "������� ����� ��������� ��� ���������� -> ";
	std::cin >> n;

	while (n < 2 || n > size1) {
		std::cout << "������ �����! ��������� ���� -> ";
		std::cin >> n;
	}


	// ���������� ����������
	for (int i = n - 1; i > 0; i--)
		for (int j = 0; j < i; j++)
			if (arr1[j] > arr1[j + 1])
				std::swap(arr1[j], arr1[j + 1]);

	//std::sort(arr1, arr1 + n);
	std::cout << "�������� ������:\n";
	for (int i = 0; i < size1; i++) {
		std::cout << arr1[i] << ", ";
	}
	std::cout << "\b\b.\n\n";
	*/


	// ������ 2. ��������� ����������� � ������ �� -30 �� -5
	/*
	std::cout << "������ 2.\n����������� � ������ �� -30 �� -5.\n";

	const int january_days = 31;
	int january_temperature[january_days]{};

	srand(time(NULL));
	for (int day_number = 0; day_number < january_days; day_number++) {
		january_temperature[day_number] = rand() % 26 - 30;
		std::cout << january_temperature[day_number] << " ";
	}

	int sum = 0; // ��� ����� ���������� ������
	int count = 0; // ��� �������� ���������� < n

	std::cout << "\n������� ����������� -> ";
	std::cin >> n;
	for (int day_number = 0; day_number < january_days; day_number++) {
		sum += january_temperature[day_number];
		if (january_temperature[day_number] < n)
			count++;
		
	}

	std::cout << "������� ����������� � ������: " << (double)sum / january_days << '\n';
	std::cout << "���������� ���� ����� ����������� ���� ������ " << n << ": " << count << "\n\n";
	*/

	// ������ 3. ��������� � ��������
	
	
	const int size3 = 20;
	int arr3[size3]{};

	std::cout << "������ 3.\n������� ������ � ����� ��������� -> ";
	std::cin >> n >> m;

	std::cout << "����: \n";
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