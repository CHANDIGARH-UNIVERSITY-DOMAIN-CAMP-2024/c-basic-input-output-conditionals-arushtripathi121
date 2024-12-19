#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    if (n == 2) {
        cout << "Prime" << endl;
        return 0;
    }
    
    if (n % 2 == 0 || n < 2) {
        cout << "Not Prime" << endl;
        return 0;
    }
    
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            cout << "Not Prime" << endl;
            return 0;
        }
    }
    
    cout << "Prime" << endl;
    return 0;
}
