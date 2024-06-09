#include <iostream>

using namespace std;

int geometricSeries(int n) {
    if (n == 1) {
        return 1;
    }
    return 3 * geometricSeries(n - 1);
}

int main() {
    int n;
    cout << "Enter the row member number: ";
    cin >> n;

    int result = geometricSeries(n);
    cout << n << "-th member of the series " << result << endl;

    return 0;
}
