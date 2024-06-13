#include <iostream>
#include "Functions.h"

using namespace std;

int main() {

  int  i = 0;
  int choice;
  cout << " Enter quantity: ";
  cin >> choice;
  rec_function(choice,i);


    int start =1;
    int end=10;
	int summ = 0;
    cout << "\n Enter start number: ";
    cin >> start;
    cout << "\n Enter end number: ";
    cin >> end;
	rec_function_sum(start, end, summ,i);
	cout << "\n The sum of all the numbers in the range: " << summ << endl;

	   const int size = 100;
	   int arr[size]{};
	   int k = 0;
	   int sum_arr = 0;
	   int new_arr[size-9]{};
	   get_arr(size,arr);
	   show_arr(size, arr);
	   find_sum(size, arr,&i, sum_arr,new_arr,&k);

	return 0;
}