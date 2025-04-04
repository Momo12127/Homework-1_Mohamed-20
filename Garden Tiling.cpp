#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, m, a; 
    cin >> n >> m >> a;

  int length = (n + a - 1) / a;
    int width = (m + a - 1) / a; 


    int flowerBeds = length * width;

    cout << flowerBeds << endl;
    return 0;
}