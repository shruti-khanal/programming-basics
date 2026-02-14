#include <iostream>
using namespace std;

int main() {
    cout << "Shruti" << endl;

    int num, temp, rem, sum = 0, rev = 0;
    cout << "Enter number: ";
    cin >> num;

    temp = num;

    while(temp != 0) {
        rem = temp % 10;
        sum += rem * rem * rem;
        rev = rev * 10 + rem;
        temp /= 10;
    }

    if(sum == num)
        cout << "Armstrong Number" << endl;
    else
        cout << "Not Armstrong" << endl;

    if(rev == num)
        cout << "Palindrome Number";
    else
        cout << "Not Palindrome";

    return 0;
}
