#include <iostream>
#include <cmath>
#include <vector>
using namespace std;


double calculate_SD(vector<double> data) {
    double sum = 0.0;
    

    for (double d : data) {
        sum += d;
    }
    double mean = sum / data.size();


    double sumOfSquares = 0.0;
    for(double d : data) {
        sumOfSquares += (d - mean) * (d - mean);
    }
    double variance = sumOfSquares / data.size();


    double sd = sqrt(variance);


    return sd;
}

int main() {
  
    vector<double> numbers(5);
    
    for (int i = 0; i < 5; i++) {
    cin >> numbers[i];
    }

    cout << calculate_SD(numbers);
  
    return 0;
}
