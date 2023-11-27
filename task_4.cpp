#include <iostream>
#include <cmath>

using namespace std;

class Hexagon {
private:
    double side_length;

public:
    Hexagon(double length) : side_length(length) {}

    double calcArea() {
        return 1.5 * 1.732 * side_length;
    }

    double calcPeri() {
        return 6 * side_length;
    }

    double calcAngleSum() {
        return 6 * 120;
    }

    void display() {
        cout << "Hexagon:\n";
        cout << "Area: " << calcArea() << "\n";
        cout << "Perimeter: " << calcPeri() << "\n";
        cout << "Sum of Angles: " << calcAngleSum() << "\n";
    }
};

class Square {
private:
    double side_length;

public:
    Square(double length) : side_length(length) {}

    double calcAreaSquare() {
        return pow(side_length, 2);
    }

    double calcPeriSquare() {
        return 4 * side_length;
    }

    void display() {
        cout << "\nSquare:\n";
        cout << "Area: " << calcAreaSquare() << "\n";
        cout << "Perimeter: " << calcPeriSquare() << "\n";
    }
};

int main() {
    // Use the last digit of your CNIC as the length of one side of hexagon
    int cnic_last_digit;
    cout << "Enter the last digit of your CNIC: ";
    cin >> cnic_last_digit;

    while (true) {
        // Display menu options
        cout << "\nMenu:\n";
        cout << "1. Hexagon\n";
        cout << "2. Square\n";
        cout << "Any other input to exit\n";

        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            // Calculate and display hexagon properties
            Hexagon hexagon(cnic_last_digit);
            hexagon.display();
        } else if (choice == 2) {
            // Calculate and display square properties using the last digit + 1
            Square square(cnic_last_digit + 1);
            square.display();
        } else {
            // Exit the program for any other input
            cout << "Invalid choice!.Exiting program.\n";
            break;
        }
    }

    return 0;
}
