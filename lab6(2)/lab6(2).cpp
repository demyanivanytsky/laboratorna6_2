#include <iostream>
#include <algorithm>
#include <windows.h>
using namespace std;
template <typename T>
class DescendingSort {
public:
	DescendingSort(T* array, size_t size) : array_(array), size_(size) {}
	void sort() {
		std::sort(array_, array_ + size_, std::greater<T>());
	}
	void printOriginal() const {
		std::cout << "Початковий масив: ";
		for (size_t i = 0; i < size_; ++i) {
			std::cout << array_[i] << " ";
		}
		std::cout << std::endl;
	}
	void printSorted() const {
		std::cout << "Відсортований масив по спаданню: ";
		for (size_t i = 0; i < size_; ++i) {
			std::cout << array_[i] << " ";
		}
		std::cout << std::endl;
	}
private:
	T* array_;
	size_t size_;
};
int main() {
	SetConsoleOutputCP(1251);
	// Приклад використання
	int intArray[] = { 5, 2, 8, 1, 6 };
	size_t intSize = sizeof(intArray) / sizeof(int);
	DescendingSort<int> intDescendingSort(intArray, intSize);
	intDescendingSort.printOriginal();
	cout << endl;
	intDescendingSort.sort();

	intDescendingSort.printSorted();
	cout << endl;
	// Також можна використовувати для інших типів даних, наприклад, для double
	double doubleArray[] = { 3.14, 2.71, 1.618, 0.707 };
	size_t doubleSize = sizeof(doubleArray) / sizeof(double);
	DescendingSort<double> doubleDescendingSort(doubleArray, doubleSize);
	doubleDescendingSort.printOriginal();
	cout << endl;
	doubleDescendingSort.sort();

	doubleDescendingSort.printSorted();
	return 0;
}