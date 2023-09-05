#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>

template <typename T>
void fill_arr(T arr[], const int lenght, T left, T right) {
	std::cout << std::endl;
	srand(time(NULL));
	for (int i = 0; i < lenght; i++) {
		arr[i] = rand() % (right - left) + left;
	}
}

template <typename T>
void print_arr(T arr[], const int lenght) {
	for (int i = 0; i < lenght; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}
template <typename T>
int arr_min(T arr[], const int lenght) {
	int min = 0;
	for (int i = 0; i < lenght; i++) 
	{
		if (min > arr[i])
			min = arr[i];
	}
	return min;
}
	template <typename T>
	int arr_max(T arr[], const int lenght) {
		int max = 0;
		for (int i = 0; i < lenght; i++)
		{
			if (max < arr[i])
				max = arr[i];
		}
		return max;
	}

	template <typename T>
	int mean_value(T arr[], const int lenght) {
		int sum = 0;
		for (int i = 0; i < lenght; i++)
		{
			sum += arr[i];
		}
		return sum / lenght;
	}
	template <typename T>
	void sort_arr(T arr[], const int lenght) {
		for (int i = 0; i < lenght - 1; i++)
			for (int j = 0; j < lenght - i - 1; j++)
				if (arr[j] > arr[j + 1])
					std::swap(arr[j], arr[j + 1]);
	}
	template <typename T>
	int search_index(T arr[], const int lenght, int begin = 0)
	{
		int index = 0;
		for (int i = 0; i < lenght; i++) {
			if (arr[i] == begin)
				index = i;
		}
		return index;
	}
	template <typename T>
	int search_last_index(T arr[], const int lenght, int begin = 0) {
		int index = 0;
		for (int i = lenght - 1; i >= begin; i--) {
			if (arr[i] == begin)
				index = i;
		}
		return index;
	}
	template <typename T>
	void range(T arr[], const int lenght, int start, int end) {
		for (int i = 0; i < lenght; i++)
			if (arr[i] > start && arr[i] < end)
				std::cout << arr[i] << ' ';
	}
	template <typename T>
	int count(T arr[], const int lenght, int begin) {
		int chek = 0;
		for (int i = 0; i < lenght; i++) {
			if (arr[i] == begin)
				chek++;
		}
		return chek;
	}

int main() {
	setlocale(LC_ALL, "Russian");

	const int size = 20;
	int arr[size]{};
	fill_arr(arr, size, -50, 51);
	print_arr(arr, size);
	std::cout << std::endl;
	std::cout << "Минимальное значение = " << arr_min(arr, size) << ".";
	std::cout << std::endl << std::endl;
	std::cout << "Максимальное значение = " << arr_max(arr, size) << ". ";
	std::cout << std::endl << std::endl;
	std::cout << "Среднее арефмитическое значений массива = " << mean_value(arr, size) << ". ";
	std::cout << std::endl;
	sort_arr(arr, size);
	std::cout << std::endl;
	std::cout << "Отсортированный массив:" << std::endl;
	print_arr(arr, size);
	std::cout << std::endl;
	std::cout << "Индекс первого вхождения = " << search_index(arr, size) << ".";
	std::cout << std::endl << std::endl;
	std::cout << "Индекс последнего вхождения = " << search_last_index(arr, size) << '.';
	std::cout << std::endl << std::endl;
	int start = -15;
	int end = 20;
	std::cout << std::endl;
	std::cout << "Числа в диапазоне от " << start << " до " << end << ": ";
	range(arr, size, start, end);
	std::cout << std::endl << std::endl;
	int number = 0;
	std::cout << "Количество вхождений элемента " << number << " = " << count(arr, size, number) << std::endl;

	return 0;
}