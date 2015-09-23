#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

double read(istream& is, vector<double>& vec) {
    double x;

    while (is >> x)
        vec.push_back(x);

    if (vec.size() == 0)
        throw domain_error ("You entered no numbers");

    double sum;

    for (auto& i : vec)
        sum += i;

    double avg = sum / vec.size();

    return avg;
}
int main() {
    vector<double> vec;
    try {
        cout << "Average is " << read(cin, vec) << endl;
    } catch(domain_error e) {
        cout << e.what();
        return 1;
    }
    return 0;
}
