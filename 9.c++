#include <iostream>
using namespace std;

int main() {
    int n, original, reversed = 0;
    cin >> n;
    
    original = n;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    
    if (original == reversed) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not Palindrome" << endl;
    }
    return 0;
}
