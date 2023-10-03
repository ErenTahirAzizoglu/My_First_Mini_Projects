#include <iostream>
using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

void find_perimeter(struct Rectangle rectangle) {

    int perimeter = rectangle.length * 2 + rectangle.breadth * 2;
    cout << perimeter;
}

int main() {

    struct Rectangle rectangle;

    cin >> rectangle.length;
    cin >> rectangle.breadth;

    find_perimeter(rectangle);

    return 0;
}
