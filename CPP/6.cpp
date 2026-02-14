#include <iostream>
using namespace std;

int main() {
    cout << "Shruti" << endl;

    char grade;
    cout << "Enter grade (A/B/C/D/F): ";
    cin >> grade;

    switch(grade) {
        case 'A': cout << "Excellent"; break;
        case 'B': cout << "Good"; break;
        case 'C': cout << "Average"; break;
        case 'D': cout << "Poor"; break;
        case 'F': cout << "Fail"; break;
        default: cout << "Invalid Grade";
    }

    return 0;
}


