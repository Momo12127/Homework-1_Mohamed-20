#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    int result = 0;
    int place = 1;

    while (x > 0) {
        int digit = x % 10;
        int minDigit = min(digit, 9 - digit);
        
        result += minDigit * place;

        x /= 10;
        place *= 10;
    }

    cout << result << endl;
    return 0;
}
