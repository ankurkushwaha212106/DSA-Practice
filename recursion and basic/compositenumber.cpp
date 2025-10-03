#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    bool isComposite = false;

    for (int i = 2; i <= n/2; i++) {   
        if (n % i == 0) {
            isComposite = true;
            break;
        }
    }

    if (isComposite) {
        cout << "The number is composite" << endl;
    } else {
        cout << "The number is not composite" << endl;
    }

    return 0;
}
