#include <iostream>
#include <vector>
using namespace std;

int main() {
    int d, sumTime;
    cin >> d >> sumTime;

    vector<int> a(d), b(d), result(d);
    int minTotal = 0, maxTotal = 0;

    for (int i = 0; i < d; ++i) {
        cin >> a[i] >> b[i];
        result[i] = a[i];
        minTotal += a[i];
        maxTotal += b[i];
    }

    if (sumTime < minTotal || sumTime > maxTotal) {
        cout << "NO\n";
        return 0;
    }

    int remaining = sumTime - minTotal;

    for (int i = 0; i < d && remaining > 0; ++i) {
        int extra = min(remaining, b[i] - a[i]);
        result[i] += extra;
        remaining -= extra;
    }

    cout << "YES\n";
    for (int i = 0; i < d; ++i) {
        cout << result[i] << " ";
    }
    cout << "\n";

    return 0;
}
