#include <iostream>
#include <Time.h>
using namespace std;

bool is_prime(int value) {

    if (value <= 1) {
        return false;
    }
    for (int i = 2; i <= value / 2; ++i) {
        if (value % i == 0) {

            return false;
        }
    }
    return true;
}

int* removePrimes(int* arr, int size, int& new_size) {

    new_size = 0;
    for (int i = 0; i < size; ++i) {
        if (!is_prime(arr[i])) {
            new_size++;
        }
    }

    int* new_arr = new int[new_size];
    int id = 0;

    for (int i = 0; i < size; ++i) {
        if (!is_prime(arr[i])) {

            new_arr[id] = arr[i];

            id++;
        }
    }

    return new_arr;
}






void split_array(int* static_arr, int size, int*& positive_arr, int& positive_size,
    int*& negativeArray, int& negative_size, int*& zero_array, int& zero_size) {
   
    positive_size = 0;
    negative_size = 0;
    zero_size = 0;

    for (int i = 0; i < size; ++i) {
        if (static_arr[i] > 0) {
            positive_size++;
        }
        else if (static_arr[i] < 0) {
            negative_size++;
        }
        else {
            zero_size++;
        }
    }

    positive_arr = new int[positive_size];
    negativeArray = new int[negative_size];
    zero_array = new int[zero_size];

    int pos_id = 0, neg_id = 0, zero_id = 0;
    for (int i = 0; i < size; ++i) {
        if (static_arr[i] > 0) {
            positive_arr[pos_id++] = static_arr[i];
        }
        else if (static_arr[i] < 0) {
            negativeArray[neg_id++] = static_arr[i];
        }
        else {
            zero_array[zero_id++] = static_arr[i];
        }
    }
}



int main() {
    const int size = 7;
    int arr[size]{ 2, 3, 5, 6, 8, 11, 13 };
   
    int new_size;
    int* new_arr = removePrimes(arr, size, new_size);

    cout << "New array: ";
    for (int i = 0; i < new_size; ++i) {
        cout << new_arr[i] << " ";
    }
    cout << endl << endl;

    delete[] new_arr;

   /////////////////////////////////////////////////////////////////////////////////

    srand(time(NULL));

    int static_arr[size];
    int start = -10;
    int end = 10;

    for (int i = 0; i < size; ++i) {
        static_arr[i] = rand() % (end - start + 1)+ start;
    }

    int* positive_arr;
    int positive_size;
    int* negative_array;
    int negative_size;
    int* zero_array;
    int zero_size;

    split_array(static_arr, size, positive_arr, positive_size, negative_array, 
        negative_size, zero_array, zero_size);

    cout << "Positive elements: ";
    for (int i = 0; i < positive_size; ++i) {
        cout << positive_arr[i] << " ";
    }
    cout << endl;

    cout << "Negative elements: ";
    for (int i = 0; i < negative_size; ++i) {
        cout << negative_array[i] << " ";
    }
    cout << endl;

    cout << "Zero elements: ";
    for (int i = 0; i < zero_size; ++i) {
        cout << zero_array[i] << " ";
    }
    cout << endl;
   
    delete[] positive_arr;
    delete[] negative_array;
    delete[] zero_array;

    return 0;
}