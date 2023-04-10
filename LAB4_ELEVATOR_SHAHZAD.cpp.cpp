#include <iostream>
using namespace std;

class Elevator {
private:
    int currentFloor;
public:
    Elevator() {
        currentFloor = 1;
    }
    int getCurrentFloor() {
        return currentFloor;
    }
    void goToFloor(int destinationFloor) {
        if (destinationFloor >= 1 && destinationFloor <= 10) {
            if (destinationFloor > currentFloor) {
                cout << "Going up..." << endl;
                while (currentFloor < destinationFloor) {
                    currentFloor++;
                    cout << "Floor " << currentFloor << "." << endl;
                }
            } else if (destinationFloor < currentFloor) {
                cout << "Going down..." << endl;
                while (currentFloor > destinationFloor) {
                    currentFloor--;
                    cout << "Floor " << currentFloor << "." << endl;
                }
            }
            cout << "You have arrived at floor " << currentFloor << "." << endl;
        } else {
            cout << "Invalid floor entered." << endl;
        }
    }
};

int main() {
    Elevator elevator;

    cout << "Welcome to the elevator! You are currently on floor " << elevator.getCurrentFloor() << "." << endl;
    int destinationFloor;
    cout << "Please enter your destination floor (1-10): ";
    cin >> destinationFloor;
    elevator.goToFloor(destinationFloor);

    return 0;
}

