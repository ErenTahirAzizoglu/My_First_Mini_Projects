#include <iostream>
#include <cmath>
using namespace std;

class Solutions {
public:
    void armstrong_Numbers(int x, int y) {
        for (int i = x; i <= y; i++) {
            string numStr = to_string(i);
            int numDigits = numStr.length();

            int result = 0;

            for (char c : numStr) {
                int digit = c - '0'; // Convert character to integer

                // Multiply digit by numDigits raised to the power of numDigits
                result += pow(digit, numDigits);
            }

            if (result == i) {
                cout << i << " is an Armstrong number with result: " << result << endl;
            }
        }
    }
};

int main() {
    int x, y;

    cin >> x;
    cin >> y;

    Solutions sol;

    sol.armstrong_Numbers(x, y);
    return 0;
}
