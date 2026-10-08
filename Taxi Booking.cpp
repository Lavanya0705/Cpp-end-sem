#include<iostream>
#include<queue>
using namespace std;

int main() {
    queue<string> customers;

    customers.push("Lala");
    customers.push("Sharon");
    customers.push("Sam");
    customers.push("Sankari");
    customers.push("Ragul");
    customers.push("Nivedha");

    cout << "Taxi assigned to: " << customers.front() << endl;
    customers.pop();

    if (customers.empty())
        cout << "Queue is empty";
    else {
        cout << "Remaining customers: ";
        while (!customers.empty()) {
            cout << customers.front() << " ";
            customers.pop();
        }
    }

    return 0;
}
