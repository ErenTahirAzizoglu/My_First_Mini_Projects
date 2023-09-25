#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class Solutions {
    public:
    int count_digit(int number) {
        int count = 0;
        while(number != 0) {
            number = number / 10;
            count++;
        }
        return count;
    }
};


int main() {
    
    Solutions sol;
    
    int number;
    cin >> number;
    
    int digits = sol.count_digit(number);
    
    int answer = 0;
    
    int a = 0, b = 0, c = 0, d = 0, e = 0;
    
    while (digits >= 1) {
        
        if (digits == 5) {
            a = number % 10;
            b = number / 10 % 10;
            c = number / 100 % 10;
            d = number / 1000 % 10;
            e = number / 10000 % 10;
            
            answer = pow(a, digits) + pow (b, digits) + pow(c, digits) + pow (d, digits) + pow (e, digits);
            break;
        }
        else if (digits == 4) {
            a = number % 10;
            b = number / 10 % 10;
            c = number / 100 % 10;
            d = number / 1000 % 10;
            
            answer = pow(a, digits) + pow (b, digits) + pow(c, digits) + pow (d, digits);
            break;
        }
        else if (digits == 3) {
            a = number % 10;
            b = number / 10 % 10;
            c = number / 100 % 10;
            
            answer = pow(a, digits) + pow (b, digits) + pow(c, digits);
            break;
        }
        else if (digits == 2) {
            a = number % 10;
            b = number / 10 % 10;
            
            answer = pow(a, digits) + pow (b, digits);
            break;
        }
        else {
            cout << "Not Armstrong";
            break;
        }

    }
    if (number == answer) {
        string n = "Armstrong";
        cout << n;
    }
    else {
        cout << "Not Armstrong";
    }

  return 0;
}
