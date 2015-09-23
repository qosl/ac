#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::setw;
using std::left;

int main() {
    for (int i = 1; i <= 100; i++) {
        cout << "square of " << setw(3) << left << i
             << " equals " << setw(7) << i * i << endl;
    }
}
