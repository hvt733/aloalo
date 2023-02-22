//con cau khac k//
//eee sửa lại chút, cái này hoàn chỉnh//
#include <iostream>
using namespace std;
double calculatePiRecursively(int n, double sum) {
    if (n == 0) {
        return sum;
    }
    
    double numerator = 4 * (n % 2 == 0 ? -1 : 1);
    double denominator1 = 4 * n + 1;
    double denominator2 = 4 * n + 3;
    double term = numerator / denominator1 + numerator / denominator2;
    
    return calculatePiRecursively(n - 1, sum + term);
}

int main() {
    int n;
    cout << "Enter the number of terms to use: ";
    cin >> n;
    
    double pi = calculatePiRecursively(n, 0);
    cout << "The value of pi using " << n << " terms is: " << pi << endl;
    
    return 0;
}