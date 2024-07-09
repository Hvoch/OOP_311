#include <iostream>
#include <ctime>
using namespace std;

void fillArray(int start,int end,int arr[4][5]) {

	for (int i{ 0 }; i < 4; ++i) {
		for (int k{ 0 }; k < 5; ++k) {

			arr[i][k] = rand() % (end - start + 1) + start;
		}
	}
}

void showArray(int arr[4][5]) {
	
	int summRows{ 0 };
	int summColumns{ 0 };

	for (int i{ 0 }; i < 4; ++i) {
				
		summRows = 0;

		for (int k{ 0 }; k < 5; ++k) {

			summRows += arr[i][k];	

			cout << arr[i][k] << "  ";	
		}
		cout << " | " << summRows << endl;
	}
	cout << "--------------------------" << endl;

	for (int i{ 0 }; i < 5; ++i) {

		summColumns = 0;

		for (int j{ 0 }; j < 4; ++ j) {

			summColumns += arr[j][i];
		}
		
		cout << summColumns << " ";
	}
}

void  totalSumm(int arr[4][5]) {

	int totalSummArray{ 0 };

	for (int i{ 0 }; i < 4; ++i) {

		for (int k{ 0 }; k < 5; ++k) {

			totalSummArray += arr[i][k];
		}
	}
	cout << "  Total summ: "<<  totalSummArray << endl;
}

void minimumNumberArray(int arr[4][5]) {

	int minNumber = arr[0][0];

	for (int i{ 0 }; i < 4; ++i) {

		for (int k{ 0 }; k < 5; ++k) {

			if (minNumber > arr[i][k]) {

				minNumber = arr[i][k];
			}
		}
	}
	cout << "\nMin number array: " << minNumber;

	for (int i{ 0 }; i < 4; ++i) {

		for (int k{ 0 }; k < 5; ++k) {

			if (minNumber == arr[i][k]) {

				cout << "\tRows: " << i << " Columns: " << k << endl;
			}
		}
	}
	
}

void maximumNumberArray(int arr[4][5]) {

	int maxNumber = arr[0][0];

	for (int i{ 0 }; i < 4; ++i) {

		for (int k{ 0 }; k < 5; ++k) {

			if (maxNumber < arr[i][k]) {

				maxNumber = arr[i][k];
			}
		}
	}
	cout << "\nMax number array: " << maxNumber;

	for (int i{ 0 }; i < 4; ++i) {

		for (int k{ 0 }; k < 5; ++k) {

			if (maxNumber == arr[i][k]) {

				cout << "\tRows: " << i << " Columns: " << k << endl;
			}
		}
	}

}

int main() {

	srand(time(NULL));

	const int rows{ 4 };
	const int columns{ 5 };
	int arr[rows][columns]{};

	const int start{ 10 };
	const int end{ 99 };
	
	fillArray(start, end,arr);
	showArray(arr);
	totalSumm(arr);
	minimumNumberArray(arr);
	maximumNumberArray(arr);

}