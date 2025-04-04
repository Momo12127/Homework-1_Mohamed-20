#include <iostream>
using namespace std;

int main() {
    int n; 
    cin >> n;

    int count = 0; 

 
    for (int i = 0; i < n; ++i) {
        int alice, bob, charlie;
        cin >> alice >> bob >> charlie; 

       
        if (alice + bob + charlie >= 2) {
            count++; 
        }
    }

    
    cout << count << endl;

    return 0;
}