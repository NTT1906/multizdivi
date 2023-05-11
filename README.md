# multizdivi
when division is MULTIPLICATION!

```cpp
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
```

The `477218589` was generate using this formula `2**n / 9 + 1` where n is the amount of shifting for the accuracy (32)

Watch this! :D [video](https://youtu.be/ssDBqQ5f5_0)
