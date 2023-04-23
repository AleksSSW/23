// 23.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
void  task23_three_max(int& ra, int& rb, int& rc);
int& task23_task2(int arr[], int size);
void task23_3(int* arr1, int* arr2, int size1, int size2);

int main()
{
	int b = 15, c = 20, d = 50;
	task23_three_max(c, b, d);
	std::cout << b << ' ' << c << ' ' << d << ' ' << std::endl;
	task23_three_max(b, c, d);
	std::cout << b << ' ' << c << ' ' << d << ' ' << std::endl;
	task23_three_max(d, c, b);
	std::cout << b << ' ' << c << ' ' << d << ' ' << std::endl;

	const int size = 5;
	int arr[size]{ 2, 10, -5, 6, 4 };
	std::cout << task23_task2(arr, size) << std::endl;
	int& ra = task23_task2(arr, size);
	ra = 5;
	std::cout << task23_task2(arr, size) << std::endl;

	int arr1[]{ 3, 6, 4, 1, 4, 8, 2 };
	int arr2[]{ 5, 3, 1, 5, 10, 8 };
	task23_3(arr1, arr2, 7, 6);
	for (int* pi = arr2; pi < arr2 + 6; pi++) {
		std::cout << *pi << ' ';
	}
	std::cout << std::endl;

    return 0;
}

void task23_three_max(int& ra, int& rb, int& rc) {
	if (ra > rb && ra > rc) {
		rb = ra;
		rc = ra;
	}
	else if (rb > ra && rb > rc) {
		ra = rb;
		rc = rb;
	}
	else {
		ra = rc;
		rb = rc;
	}

}

int& task23_task2(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		if (arr[i] < 0)
			return arr[i];
	}
	return arr[0];
}

void task23_3(int* arr1, int* arr2, int size1, int size2) {
	for (int* p2 = arr2; p2 < arr2 + size2; p2++) {
		for (int* p1 = arr1; p1 < arr1 + size1; p1++) {
			if (*p1 == *p2)
				*p2 = 0;
		}

	}

}