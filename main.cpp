#include <vector>
#include <iostream>

using namespace std;

int getSum(vector<int> arr) {
    int sum = 0;
    for (auto& element : arr) {
        sum += element;
    }
    return sum;
}

float getAverage(vector<int> arr) {
    float sum = 0;
    for (auto& element : arr) {
        sum += element;
    }
    return sum / arr.size();
}

int getMin(vector<int> arr) {
    int min = arr[0];
    for (auto& element : arr) {
        if (element < min) {
            min = element;
        }
    }
    return min;
}

int main() {    
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "The sum of the vector {1, 2, 3, 4, 5, 6, 7, 8, 9, 10} is "
         << getSum(arr) << ".\n";

    cout << "The average of the vector {1, 2, 3, 4, 5, 6, 7, 8, 9, 10} is "
         << getAverage(arr) << ".\n";
         

    cout << "The min of the vector {1, 2, 3, 4, 5, 6, 7, 8, 9, 10} is "
         << getMin(arr) << ".\n";
    
    return 0;
}