#include <iostream>
using namespace std;

int main() {
    int a, h, b;

    cout << "Enter your age: ";
    cin >> a;

    if (a <= 25) {
        cout << "Enter your height: ";
        cin >> h;

        if (h < 100) {
            cout << "Your character = Chopper";
        }
        else if (h < 180) {
            cout << "Your character = Usopp";
        }
        else {
            cout << "Enter your bounty: ";
            cin >> b;

            if (b <= 1100000000) {
                cout << "Your character = Sanji";
            }
            else {
                cout << "Your character = Zoro";
            }
        }
    }
    else if (a <= 60) {
        cout << "Enter your bounty: ";
        cin >> b;

        if (b <= 500000000) {
            cout << "Your character = Franky";
        }
        else {
            cout << "Your character = Jinbe";
        }
    }
    else {
        cout << "Your character = Brook";
    }

    return 0;
}
