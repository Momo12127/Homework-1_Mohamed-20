#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string catalog[100];
    for (int i = 0; i < n; ++i) {
        string title;
        cin >> title;

        bool found = false;
        for (int j = 0; j < i; ++j) {
            if (catalog[j] == title) {
                found = true;
                int count = 1;
                string newTitle = title;

             
                while (true) {
                    newTitle = title + (char)('0' + count);  
                    bool exists = false;
                    for (int k = 0; k < i; ++k) {
                        if (catalog[k] == newTitle) {
                            exists = true;
                            break;
                        }
                    }

                    if (!exists) {
                        catalog[i] = newTitle;
                        cout << newTitle << endl;
                        break;
                    }

                    count++;
                }
                break;
            }
        }

        if (!found) {
            catalog[i] = title;
            cout << "OK" << endl;
        }
    }

    return 0;
}
