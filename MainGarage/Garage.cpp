#include <iostream>
#include <ctime>

using namespace std;

class Car {
private:

	string modelCar [5]{ "Mercedes","Hynday","Reno","Matiz","Subaru" };
	string colourCar [5]{ "White","Green","Black","Yello","Blue" };
		
public:

	void showCar() const {
			
			cout << " Model: " << modelCar[rand() % 5] << "\\Colour: "

			     	<< colourCar[rand() % 5] << endl;
	}
};

class Garage {
private:

	int numberGarage{};
	int sizeGarage{};
	int quantityCars;
	Car car;

public:
	
	Garage(int numberGarage, int sizeGarage, int quantityCars) {
		this->numberGarage = numberGarage;
		this->sizeGarage = sizeGarage;
		this->quantityCars = quantityCars;
	}

	int getNumber() const {
		return this->numberGarage;
	}

	int getSizeGarage() const {
		return this->sizeGarage;
	}

	void showGarage() const {

		cout << " Number garage: " << numberGarage 
			    << "\n There are still places left: " << sizeGarage << endl << endl;

		if ( quantityCars<= sizeGarage) {

			for (int i{ 0 }; i < sizeGarage; ++i) {

				car.showCar();
			}
		}
		else if (quantityCars > sizeGarage) {

			int unnecessary = (quantityCars - sizeGarage);

			for (int i{ 0 }; i < sizeGarage; ++i) {

				car.showCar();
			}
			cout << "\n " << unnecessary << " cars couldn't fit in the garage" << endl;
		}
	}
};

int main() {

	srand(time(NULL));
	
	Garage garage(10,5,8);
	
	garage.showGarage();

}