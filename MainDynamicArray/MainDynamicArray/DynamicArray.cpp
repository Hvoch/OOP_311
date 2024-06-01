#include <iostream>

using namespace std;

bool prime(int num) {

	if (num <= 1) {
		return false;
	}
	for (int i = 2; i <= num / 2; ++i) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}

int *remove_primes(int size, int* arr, int &new_size) {

	new_size = 0;
	for (int i = 0; i < size; ++i) {
		if (!prime(arr[i])) {
			++new_size;
		}
	}

	int* new_arr = new int[new_size];
	int k = 0;

	for (int i = 0; i < size; ++i) {
		if (!prime(arr[i])) {
			new_arr[k] = arr[i];
			++k;

		}
	}
	return new_arr;
}







int main() {

	const int size = 10;
	int arr[size]{};
	
	for (int i = 0; i < size; ++i) {

		arr[i] = rand() % 100+1;
		cout << arr[i] << " ";
	}
	cout << endl;

	int new_size;
	int* new_arr = remove_primes(size, arr, new_size);

	for (int i = 0; i < new_size; i++)
	{
		cout << new_arr[i] << " ";
	}
	cout << endl;

	delete[]new_arr;














	return 0;
}