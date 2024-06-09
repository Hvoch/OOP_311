#include <iostream>
#include <Time.h>

using namespace std;

template < class T >
void get_array( int size, T arr[]) {

	for (int i = 0; i < size; ++i) {


		arr[i] = rand() % 100 ;
	}
}

template < class T >
void show_arr(int size, T arr[]) {

	for (int i = 0; i < size; ++i) {

		cout << arr[i] << "  ";
	}
	cout << endl << endl;
}

template < class T >
void sorting(int size,  T arr[]) {

	T buf = 0;

	for (int i = 0; i < size; ++i) {

		for (int j = 0; j < size - 1; ++j) {

			if (arr[j] > arr[i]) {

				buf = arr[i];
				arr[i] = arr[j];
				arr[j] = buf;
			}
		}
	}
}


int main() {

	srand(time(NULL));

	const int size = 3;
	double arr[size]{2.3,9.6,2.2};

	//get_array(size,arr);
	show_arr(size, arr);
	sorting(size, arr);
	show_arr(size, arr);

	system("pause");

	return 0;
}