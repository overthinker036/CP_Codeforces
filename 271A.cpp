#include <iostream>
using namespace std;

bool distDigitYear(int n) {
    int a, b, c, d;
    d = n % 10;
    n /= 10;
    c = n % 10;
    n /= 10;
    b = n % 10;
    n /= 10;
    a = n % 10;
    
    if (a == b || a == c || a == d || b == c || b == d || c == d) {
        return false;
    } else {
        return true;
    }
}

int main () {
    int n;
    cin >> n;
    n += 1;

    while (!distDigitYear(n)) {
        n++;
    }

    cout << n << endl;
}
