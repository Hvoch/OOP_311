#include <iostream>

using namespace std;

class Fraction{
private:
	int Num;
	int Den;

public:
	
	Fraction(int Num, int Den) : Num{ Num }, Den{ Den } {};
	
	void show() const {
		cout << Num << "/" << Den;
	}

	Fraction add(const Fraction b) const {
		int n = Num * b.Den + b.Num * Den;
		int d = Den * b.Den;

		return Fraction(n, d);
	}
};

int main() {

	Fraction fraction1 (1, 3);
	Fraction fraction2 (1, 2);
	Fraction fraction3 = fraction1.add(fraction2);

	fraction1.show();
	cout << " * ";
	fraction2.show();
	cout << " = ";
	fraction3.show();
	cout << endl;

	return 0;
}
