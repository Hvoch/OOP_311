#include <iostream>

using namespace std;

void show_figure1() {

	for (int i{ 0 }; i < 5; ++i) {

		for (int k{ 0 }; k < 5; ++k) {

			if (k  < 5 ) {
				cout << " @";
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}
	for (int i{ 0 }; i < 5; ++i) {

		for (int k{ 0 }; k < 10; ++k) {

			if (k < 5) {
				cout << "  ";
			}
			else {
				cout << " @";
			}
		}
		cout << endl;
	}
}

void show_figure2() {

	for (int i{ 0 }; i < 4; ++i) {

		for (int k{ 0 }; k < 10; ++k) {

			if (k < i || k >= 10 - i) {
				cout << "  ";
			}
			else {
				cout << " @";
			}
		}
		cout << endl;
	}
	for (int i{ 4 }; i >= 0; i--) {

		for (int k{ 0 }; k < 10; k++) {

			if (k < i || k >= 10 - i) {
				cout << "  ";
			}
			else {
				cout << " @";
			}
		}
		cout << endl;
	}
}

int main() {

	show_figure1();
	cout << endl;
	show_figure2();
	
	return 0;
}