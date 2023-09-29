// A perfect number is a number that can be perfectly divided by any one of its digits

#include <iostream>
#include <cmath>
using namespace std;

string find_reverse(int number) {
    string reversed = "";
    string digit = "";

    string strNum = to_string(number);
    int intNumLength = strNum.length();

    for (int i = intNumLength - 1; i >= 0; i--) {
        int lastDigit = strNum[i] - '0';

        digit = to_string(lastDigit);
        reversed += digit;
    }

    return reversed;
}

int main() {
    
    int number;

    // get input value for number
    cin >> number; 

    // call find_reverse() with argument number
    string answer = find_reverse(number);
    int intAnswer = stoi(answer);

    // check if number is equal to the returned value
    if (intAnswer == number) {
        cout << "Palindrome Number";
    }
    else {
        cout << "Not a Palindrome Number";
    }

    return 0;
}
