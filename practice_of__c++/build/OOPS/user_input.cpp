#include<iostream>
using namespace std;

class parent {
public:
    parent(int a) {
        cout << "Parent class variable is: " << a << endl;
    }
};

class child : public parent {
public:
    child(int parentValue, int childValue) : parent(parentValue) {
        cout << "Child class variable is: " << childValue << endl;
     }
};

int main() {
    int parentInput, childInput;

    cout << "Enter value for parent class: ";
    cin >> parentInput;

    cout << "Enter value for child class: ";
    cin >> childInput;

    child object(parentInput, childInput);

    return 0;
}
