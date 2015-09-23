#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int get_width(int n) {
    return log10(n) + 1;
}
int main() {
    int maximum = 1000;

    for (int i = 0; i <= maximum; ++i) {
        cout << setw(get_width(maximum))
             << i
             << " square equals to "
             << setw(get_width(maximum * maximum))
             << i * i
             << endl;
    }
}
