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

int main() {    
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "The sum of the vector {1, 2, 3, 4, 5, 6, 7, 8, 9, 10} is "
         << getSum(arr) << ".\n";
    return 0;
}