#include <iostream>

using namespace std;

int main() {
    int c,f;
    float i;
    cin >> f;
    // Turn °F to °C
    // c = (f - 32) * 5 / 9;
    c =  (f - 32) * 5 * 477218589;
    cout << c;
    return 0;
}
