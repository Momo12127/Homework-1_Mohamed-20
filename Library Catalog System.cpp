#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    string catalog[100]; 
    for (int i = 0; i < n; ++i) {
        string title;
        cin >> title;

        bool found = false;
        int count = 1;
        string newTitle = title;

       
        while (true) {
            found = false;
            for (int j = 0; j < i; ++j) {
                if (catalog[j] == newTitle) {
                    found = true;
                    break;
                }
            }

            if (!found) {
                break;
            }

            newTitle = title + to_string(count);
            count++;
        }

        catalog[i] = newTitle; 
        if (newTitle == title) {
            cout << "OK" << endl;
        } else {
            cout << newTitle << endl;
        }
    }

    return 0;
}

