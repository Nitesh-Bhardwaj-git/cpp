#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
    if (x < 0 || (x % 10 == 0 && x != 0)) {
        return false;
    }
    int reversed = 0;
    int original = x;
    while (x > 0) {
        int digit = x % 10;
        reversed = reversed * 10 + digit;
        x /= 10;
    }
    return original == reversed;
}
int main() {
    cout << isPalindrome(121) << endl;  
    cout << isPalindrome(-121) << endl; 
    cout << isPalindrome(10) << endl;  
    return 0;
}    
    
};
