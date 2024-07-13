#pragma once

class Fraction{
private:
	int numerator{};
	int denominator{};
	int numerator2{};
	int denominator2{};
	int intenger{};
	char oper{};
	int resNum{};
	int resDen{};
public:
	Fraction(int numerator,int denominator) {
		this->numerator = numerator;
		this->denominator = denominator;
	}
	Fraction(int numerator, int denominator,int intenger,char oper) :Fraction(numerator,denominator) {

		this->intenger = intenger;
		this->oper = oper;
		if (numerator == 0 || denominator == 0 || intenger == 0)
			cout << "!!!!";
		if ((numerator % denominator) == 0) {
			this->numerator /= denominator;
			this->denominator = 1;
		}
		else if ((denominator % numerator) == 0) {
			this->denominator /= numerator;
			this->numerator = 1;
		}
		else if ((numerator % 2) == 0 && (denominator % 2) == 0) {
			this->denominator /= 2;
			this->numerator /= 2;
		}
	}
	Fraction(int numerator, int denominator, int numerator2, int denominator2, char oper) :Fraction(numerator, denominator, intenger, oper) {

		this->numerator2 = numerator2;
		this->denominator2 = denominator2;
		if (numerator == 0 || denominator == 0 || numerator2 == 0 || denominator2 == 0 || intenger == 0) {
			cout << "!!!!";
		}
		if ((numerator % denominator) == 0) {
			this->numerator /= denominator;
			this->denominator = 1;
		}
		else if ((denominator % numerator) == 0) {
			this->denominator /= numerator;
			this->numerator = 1;
		}
		else if ((numerator % 2) == 0 && (denominator % 2) == 0) {
			this->denominator /= 2;
			this->numerator /=2 ;
		}
	}
	
	void showDecision() {
				
			switch (oper)
			{
			case '+': 
				if (numerator > 0 && denominator > 0 && numerator2 > 0 && denominator2 > 0) {
					resNum = numerator + numerator2;
					resDen = denominator;
					if (denominator != denominator2) {
						resNum = (numerator * denominator2) + (numerator2 * denominator);
						resDen = denominator * denominator2;
					}
					shovResult();
					if (resNum > resDen || resNum < 0) {
						showFraction();
						exit(0);
					}
					else {
						cout << resNum << "/" << resDen << endl;
					}
				}
				else if(numerator > 0 && denominator > 0 && intenger > 0) {
					resNum = numerator + (intenger * denominator);
					resDen = denominator * 1;
					shovResult();
					if (resNum > resDen || resNum < 0) {
						showFraction();
						exit(0);
					}
					cout  << resNum << "/" << resDen << endl;					
				}
				break;
			case '-':
				if (numerator > 0 && denominator > 0 && numerator2 > 0 && denominator2 > 0) {
				      resNum = numerator - numerator2;
					  resDen = denominator;
					  if (denominator != denominator2) {
						  resNum = (numerator * denominator2) - (numerator2 * denominator);
						  resDen = denominator * denominator2;
					  }
					  shovResult();
					  if (resNum > resDen || resNum < 0) {
						  showFraction();
						  exit(0);
					  }
					  else {
						  cout << resNum << "/" << resDen << endl;
					  }
				}
				else if (numerator > 0 && denominator > 0 && intenger > 0) {
					resNum = numerator - (intenger * denominator);
					resDen = denominator * 1;
					shovResult();
					if (resNum > resDen || resNum < 0) {
						showFraction();
						exit(0);
					}
					cout << resNum << "/" << resDen << endl;
				}
				break;
			case '*':
				if (numerator > 0 && denominator > 0 && numerator2 > 0 && denominator2 > 0) {
				resNum = numerator * numerator2;
				resDen = denominator * denominator2;
				shovResult();
				if (resNum > resDen || resNum < 0) {
					showFraction();
					exit(0);
				}
				else {
					cout << resNum << "/" << resDen << endl;
				}
				}
				else if (numerator > 0 && denominator > 0 && intenger > 0) {
					resNum = numerator * intenger;
					resDen = denominator * 1;
					shovResult();
					if (resNum > resDen || resNum < 0) {
						showFraction();
						exit(0);
					}
					cout << resNum << "/" << resDen << endl;
				}

				break;
			case '/':
				if (numerator > 0 && denominator > 0 && numerator2 > 0 && denominator2 > 0) {
				resNum = numerator * denominator2;
				resDen = denominator * numerator2;
				shovResult();
				if (resNum > resDen || resNum < 0) {
					showFraction();
					exit(0);
				}
				else {
					cout << resNum << "/" << resDen << endl;
				}
				}
				else if (numerator > 0 && denominator > 0 && intenger > 0) {
					resNum = numerator * 1;
					resDen = denominator * 5;
					shovResult();
					if (resNum > resDen || resNum < 0) {
						showFraction();
						exit(0);
					}
					cout << resNum << "/" << resDen << endl;
				}
				break;
			}
	}

	void showFraction() {
		int intenger2 = resNum / resDen;
		resNum %= resDen;
		if (resNum < 0) {
			resNum *= -1;
		}
		else if (resNum == 0) {
			cout << intenger2 << endl;
		}
		else {
			cout << intenger2 << "(" << resNum << "/" << resDen << ")" << endl;
		}
	}
	void shovResult() {
		
		if (intenger > 0) {
			cout << numerator << "/" << denominator << " " << oper << " " << intenger << " = ";
		}
		else {
			cout << numerator << "/" << denominator << " " << oper << " " << numerator2 << "/" << denominator2 << " = ";
		}
	}
};

