#include<iostream>
#include<iomanip>
using namespace std;
int main() {

    int n, r, count = 0;
    cout << endl << "This code makes an approximate estimation for square roots." << endl;
    cout << "Enter a number: ";
    cin >> n;
    double guess = static_cast<double>(n) / 2;
//while loop to iterate 5 times
    while (count < 5) {
        r = n / guess;
        guess = (guess + r) / 2;
        count++;
    }
//print result with a precision 2 decimal
    cout << "The estimated square root of " << n << " is: " << setprecision(2) << fixed << guess;
    return 0;
}