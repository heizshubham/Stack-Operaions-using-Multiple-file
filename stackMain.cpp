#include <iostream>
#include "stackImp.cpp"

using namespace std;

void menu() {
    cout << "\nStack Operations Menu" << endl;
    cout << "1. Push" << endl;
    cout << "2. Pop" << endl;
    cout << "3. Peek" << endl;
    cout << "4. Display" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice: ";
}

int main() {
    Stack s;
    int choice, value;

    while (true) {
        menu();
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                s.push(value);
                break;
            case 2:
                cout << "Popped value: " << s.pop() << endl;
                break;
            case 3:
                cout << "Top value: " << s.peek() << endl;
                break;
            case 4:
                s.display();
                break;
            case 5:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
