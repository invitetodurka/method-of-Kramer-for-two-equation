#include <iostream>

using namespace std;

int main() {
    int n, sum;
    cin >> n;
    n = n % 1000;
    sum = (n / 100) + (n % 100 / 10) + (n % 10);
    cout << sum;
    return 0;
}