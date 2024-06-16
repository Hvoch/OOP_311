#include <iostream>
#include <vector>

using namespace std;

//Euclid's algorithm through a loop
void algorithm_cycle(int &number1,int &number2) {

	if (number1 > number2) {
		for (; number1 != 0 || number2 != 0;) {
			if (number1 == 0 || number2 == 0) {
				break;
			}
          number1 %= number2;
			if (number1 == 0 || number2 == 0) {
				break;
			}
		  number2 %= number1;
		}
	}
	else {
		for (; number1 != 0 || number2 != 0;) {
			if (number1 == 0 || number2 == 0) {
				break;
			}
			number2 %= number1;
			if (number1 == 0 || number2 == 0) {
				break;
			}
			number1 %= number2;
		}
	}
	if (number1 == 0) { 
		cout << "\n Maximum divisor: " <<number2;
	}
	else if (number2 == 0) {
		cout << "\n Maximum divisor: " << number1;

	}
}

//Euclid's algorithm via recursion
int algorithm_recursion(int number1, int number2) {
	
	if (number1 > number2) {
		
		if (number1 > 0 && number2>0) {
			number1 %= number2;
		}
		if (number1 > 0 && number2 > 0) {
			number2 %= number1;
		}
	}
	else {
		
		if (number1 > 0 && number2 > 0) {
			number2 %= number1;
		}
		if (number1 > 0 && number2 > 0) {
			number1 %= number2;
		}
	}
	if (number1 == 0) {
		cout << "\n Maximum divisor: " << number2;
		return number2;
	}
	else if (number2 == 0) {
		cout << "\n Maximum divisor: " << number1;
		return number1;
	}
	
	algorithm_recursion(number1, number2);


}

//Quick array sorting
  template <class T>
void quick_sorting(vector <T> & arr, int left, int right) {
	if (left < right) {
		int i = left, j = right;
		T pivot = arr[(left + right) / 2];

    	while (i <= j) {
			while (arr[i] < pivot) {
				i++;
			}
			while (arr[j] > pivot) {
				j--;
			}
			if (i <= j) {

				swap(arr[i], arr[j]);
				i++;
				j--;
			}
		}

		if (left < j) {
			quick_sorting(arr, left, j);
		}
		if (i < right) {
			quick_sorting(arr, i, right);
		}
	}
  }


int main() {

	int number_1{ 34 }, number_2{ 358 };

	cout << "\n Enter number #1 and number #2: ";
	cin >> number_1 >> number_2;
	algorithm_cycle(number_1, number_2);
	algorithm_recursion(number_1, number_2);




   vector<int> arr = { 10, 2, 5, 3, 8, 6, 7, 4, 9, 1 };

   cout << "\n\n Original array: ";
   for (const auto& val : arr) {

	    cout << val << " ";
   }
  
   quick_sorting(arr, 0, arr.size() - 1);

   cout << "\n Sorted array: ";
   for (const auto& val : arr) {

	     cout << val << " ";
   }
    cout << endl;

	return 0;
}