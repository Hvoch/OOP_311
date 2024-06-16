#include <iostream>
#include <string>

using namespace std;

//#1
void string_characters_1(string str){

	cout << str << endl;
	for (int i{ 0 }; i < str.length(); ++i) {
		if (str[i] == ' ') {
			str[i] = '\t';
		}
	}
	cout << str << endl;
}

//#2
void string_characters_2(string str) {

	cout << "\n Line Size: " << str.length() << endl;
}

//#3
void number_of_words(string str_2, int size_2) {

	int counter{ 0 };
	
	for (int i{ 0 }; i < size_2; ++i) {

		if (!(str_2[i] >= 65 && str_2[i] <= 90 || str_2[i] >= 97 && str_2[i] <= 122)) {
			continue;
		}
		for (; str_2[i] >= 65 && str_2[i] <= 90 || str_2[i] >= 97 && str_2[i] <= 122;) {

			 ++i;
		}
		counter++;
	}
	cout << "\n There are " << counter << " words in the sentence." << endl;
}

//#4
bool palindrome(string str, int size) {

	for (int i{ 0 }, j{ size-1 }; i < size; ++i,--j) {
		if (str[i] == str[j]) {
		}
		else {
			return false;
		}
	}
	return true;
}



int main() {

	string str = { " # # # # " };
	string str_2 = { " Good morning World! " };
	int size = (int)str.length();
	int size_2 = (int)str_2.length();
	int new_size = size;
	string_characters_1( str);
	string_characters_2( str);
	number_of_words( str_2, size_2);
	
	if (palindrome(str, size) == true) {
		cout << "\n This string is a palindrome." << endl;
	}
	else {
		cout << "\n This string is not a palindrome." << endl;
	}

	return 0;
}


