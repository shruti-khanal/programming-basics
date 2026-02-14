#include <iostream>
using namespace std;

int main() {
    cout << "Shruti" << endl;

    int num;
    cout << "Enter a number: ";
    cin >> num;

    if(num % 2 == 0)
        cout << "Even";
    else
        cout << "Odd";

    return 0;
}
