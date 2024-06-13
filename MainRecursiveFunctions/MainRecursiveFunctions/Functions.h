#pragma once

using namespace std;

void rec_function(int N, int i) {

	if (i < N) {
		cout << " *";
		i++;
		rec_function(N, i);
	}
}




void rec_function_sum(int start, int end, int &summ,int i) {

	if ( start <= end){
		summ+=start;
		start++;
		rec_function_sum(start, end, summ,i);
	}
}





void get_arr(int size,int arr[]) {

	for (int i = 0; i < size; ++i) {
		arr[i] = rand() % 100 + 1;
	}
}

void show_arr(int size, int arr[]) {

	cout << endl;
	for (int i = 0; i < size; ++i) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void  find_sum(int size, int arr[], int* i, int sum_arr, int new_arr[], int* k) {

	if (*k < size) {
		cout << "\n I: " << *i;
		for (int j = 0; j < size / 10; ++j) {
			sum_arr += arr[(*i)];
			(*i)++;
		}
		new_arr[(*k)] = sum_arr;
	}
	cout << "\n Summ: " << new_arr[(*k)];
	++(*k);
	(*i) = (*k);
	sum_arr = 0;

	if (*k < (size - 9)) {
		find_sum(size, arr, i, sum_arr, new_arr, k);
	}

	int min = new_arr[0];

	for (int s = 0; s < size - 9; ++s) {

		if (new_arr[s] < min) {

			min = new_arr[s];
		}
	}
	
	for (int i = 0; i < size - 9; ++i) {

		if (new_arr[i] == min) {
			
			cout << "\n\n Min sum: " << min << "    " << " Ind: " << i;
			exit(0);
		}
		
	}
}

