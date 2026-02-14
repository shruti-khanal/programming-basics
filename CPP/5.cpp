#include <iostream>
using namespace std;

int main() {
    cout << "Shruti" << endl;

    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if(a > b) {
        if(a > c)
            cout << "Largest: " << a;
        else
            cout << "Largest: " << c;
    } else {
        if(b > c)
            cout << "Largest: " << b;
        else
            cout << "Largest: " << c;
    }

    return 0;
}

