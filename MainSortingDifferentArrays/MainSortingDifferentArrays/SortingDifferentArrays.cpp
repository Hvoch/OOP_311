#include <iostream>

using namespace std;

template <class T>
void sort_array(const int size, T arr[]) {

	T buf = 0;

	for (int i = 0; i < size; ++i) {

		for (int j = 0; j < size; ++j) {

			if ( arr[i]<arr[j]){
			
				buf = arr[i];
				arr[i] = arr[j];
				arr[j] = buf;
			}
		}
	}
}

template <class T>
void show_arr(const int size, T arr[]) {

	for (int i = 0; i < size; ++i) {

		cout << arr[i] << " ";
	}
	cout << endl << endl;
}

int main() {
	//Массив типа int
	const int size = 5;
	int arr[size]{3,14,6,87,10};
	show_arr(size, arr);
	sort_array(size,arr);
	show_arr(size, arr);
	cout << endl;

	//Массив типа double
	double arr1[size]{ 3.2,14.9,6.45,87.1,10.7 };
	show_arr(size, arr1);
	sort_array(size, arr1);
	show_arr(size, arr1);
	cout << endl;

	//Массив типа char
	char arr2[size]{ 'B','C','D','E','A'};
	show_arr(size, arr2);
	sort_array(size, arr2);
	show_arr(size, arr2);


	return 0;
}