#include <iostream>
#include <cmath>

double calculate_SD(double data[], int size) {
    double sum = 0.0;

    for (int i = 0; i < size; i++) {
        sum += data[i];
    }

    double mean = sum / size;
    
    double sum_of_squared_differences = 0.0;
    for (int i = 0; i < size; i++) {
        double difference = data[i] - mean;
        sum_of_squared_differences += difference * difference;
    }

    double variance = sum_of_squared_differences / size;

    double standard_deviation = sqrt(variance);

    return standard_deviation;      
}

int main() {
    double numbers[5];

    for (int i = 0; i < 5; i++) {
        std::cin >> numbers[i];
    }

    double calSD = calculate_SD(numbers, 5);

    std::cout << calSD;

    return 0;
}
