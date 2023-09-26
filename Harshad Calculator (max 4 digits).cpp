#include <iostream>
using namespace std;
/*
class Solutions {
    public:
    int digit_count (int number) {
        int digit_count;
        while (number != 0) {
            number /= 10;
            digit_count++;
        }
        return digit_count;
    }
};
*/
int main() {
    
    int num;
    cin >> num;

    int digit_1 = num % 10;
    int digit_2 = num / 10 % 10;
    int digit_3 = num / 100 % 10;
    int digit_4 = num / 1000 % 10;
    int total = digit_1 + digit_2 + digit_3 + digit_4;

    if (num % total == 0) {
        cout << "Harshad Number";
    }
    else {
        cout << "Not a Harshad Number";
    }
    return 0;
}
