#include <iostream>
#include <string>
using namespace std;

int main() {
    int n; 
    cin >> n;

    int T = 0; 

    
    for (int i = 0; i < n; ++i) {
        string command;
        cin >> command;

      
        if (command == "++T" || command == "T++") {
            T++; 
        }
        else if (command == "--T" || command == "T--") {
            T--;  
        }
    }

  
    cout << T << endl;

    return 0;
}