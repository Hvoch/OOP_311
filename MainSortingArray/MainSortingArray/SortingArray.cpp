#include <iostream>
#include <Time.h>

using namespace std;

void get_array(int size, int arr[]) {

	for (int i = 0; i < size; ++i) {

		arr[i] = rand() % 100;
	}
}

void show_arr(int size, int arr[]) {

	for (int i = 0; i < size; ++i) {

		cout << arr[i] << "  ";
	}
	cout << endl << endl;
}

void sorting(int size, int arr[]) {

	int buf = 0;

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

	const int size = 10;
	int arr[size]{};

	get_array(size, arr);
	show_arr(size, arr);
	sorting(size, arr);
	show_arr(size, arr);

	system("pause");

	return 0;
}