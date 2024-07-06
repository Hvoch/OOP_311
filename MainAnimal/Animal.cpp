#include <iostream>

using namespace std;

class Animal {
private:

	string name = " ";
	string sound = " ";
	string action = " ";
	int walkSpeed = 0;
	int placeX = 0, placeY = 0;
public:

	Animal(string name) {
		this->name = name;
	}

	  void setSound(string sound) {
		this->sound = sound;
	  }
	  void getSound() {
		   cout << " Animal " << name << " makes a sound: " << this->sound  << endl;
	  }

	      void setWalkSpeed(int walkSpeed) {
		       this->walkSpeed = walkSpeed;
	      }
          void getWalkSpeed() {
	           cout << " Walk speed = " << this->walkSpeed << endl;
	      }

	           void setAction(string action) {
		            this->action = action;
	           }
	           void getAction() {
		            cout << name << this->action;
		            getPlace();
	           }

	   void setPlace(int placeX, int placeY) {
	    	this->placeX = placeX;
	    	this->placeY = placeY;	
   	   }
	   void getPlace() {	  
		    cout << " " <<  "(x = " << placeX << "; y = " << placeY << ")" << endl;
	   }

	void showName() {
		cout << name << endl;
    }

	void walk() {
		cout << " The " << name << " is moving at a speed " << walkSpeed << " per place "; 
		getPlace();
	}
};


int main() {

	Animal animalCat(" Cat");
	animalCat.setPlace(12, 10);
	animalCat.setWalkSpeed(20);
	animalCat.setSound(" Mau mau");
	animalCat.setAction(" Sit");

	animalCat.showName();
	animalCat.getWalkSpeed();
	animalCat.walk();
	animalCat.getSound();
	animalCat.getAction();

}