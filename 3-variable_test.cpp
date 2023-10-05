#include <iostream>
#include <typeinfo>

using namespace std;

int main(){
    cout << 100 << hex <<100 << ' ';
    cout << 100 << ' ';
    cout << dec << 010<<endl;

    /*
    char c1, c2, c3, c4;
    cout << "Enter your first, middle, and last initials: " << endl;
    cin >> c1 >> c2 >> c3;
    cout << "You entered: " << c1 << c2 << c3 << endl;
    cout << "Enter one more character: " << endl;
    cin >> c4;
    cout << "You entered: " << c4 << endl;
    */

    cout<< 'C'-'A' << ' ' << typeid('C'-'A').name();
    cout << 0x33;

    return 0;
}