#include <iostream>
using namespace std;

int main() {
    cout << "Shruti" << endl;

    for(int i = 1; i <= 10; i++) {
        if(i == 5)
            continue;
        if(i == 8)
            break;
        cout << i << " ";
    }

    return 0;
}
