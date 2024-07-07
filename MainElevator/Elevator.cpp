#include <iostream>

using namespace std;

class Elevator {
private:
	
	int floorElevator;
	int callUpFloor;
	bool statusElevator;
	bool callUp;
	int firstFloor;
	int lastFloor;
	
public:
	
	Elevator(int firstFloor, int lastFloor, int floorElevator, 
		           bool statusElevator, int callUpFloor, bool callUp) {

		this->floorElevator = floorElevator;
		this->callUp = callUp;
		this->firstFloor = firstFloor;
		this->lastFloor = lastFloor;
		this->statusElevator = statusElevator;
		this->callUpFloor = callUpFloor;
	}
	void setStatusElevator(bool statusElevator) {
		this->statusElevator = statusElevator;
	}
	
	bool getStatusElevator() {	
		return statusElevator;
	}

	void showStatusElevator() {
		if (statusElevator) {
			cout << " The elevator is working!" << endl;
		}
		else {
			cout << " The elevator is not working!" << endl;
			exit(0);
		}
	}

	void showFloorElevator() {
		cout << " The elevator is located on the floor # " << floorElevator << endl;
	}
	
	void setCallUp(bool callUp) {
		this->callUp = callUp;
		cout << " You called the elevator on the floor # " << callUpFloor << endl;
	}
	bool getCallUp() {
		return callUp;
	}

	void showElevatorMovement() {
		showFloorElevator();
		if (callUp == true && callUpFloor >= firstFloor && callUpFloor <= lastFloor) {
			while (callUpFloor > floorElevator) {
				cout << floorElevator++ << endl;
			}

			while (callUpFloor <= floorElevator) {
				cout << floorElevator-- << endl;;
			}
			cout << " The doors are opening!" << endl;
		}
		else {
			if (callUp != true) {
				exit(0);
			}
			else {
				cout << " There is no such floor!" << endl;
			}
		}
	}
};

void testElevator() {
	Elevator elevator(1,15,1,false,11,false);
	elevator.setStatusElevator(true);
	elevator.showStatusElevator();
	elevator.setCallUp(true);
	elevator.showElevatorMovement();
}

int main() {

	testElevator();
}