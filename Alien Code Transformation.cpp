#include <iostream>
using namespace std;

int main() {
    int x; 
    cin >> x;

    int result = 0; 
    int place = 1; 

    while (x > 0) {
        int d = x % 10; 
        int transformed = 9 - d; 

      
        if (d < transformed) {
            result += d * place; 
        }
        else {
            result += transformed * place; 
        }

        x /= 10; 
        place *= 10; 
    }

    cout << result << endl; 
    return 0;
}
