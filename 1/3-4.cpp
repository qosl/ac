#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string s;
    vector<string> vec;

    typedef string::size_type str_size;

    string longest;
    str_size longestLength = 0;

    string shortest;
    str_size shortestLength = 0;

    while (getline(cin, s)) {
        if (s.empty()) {
            break;
        }
        if (longestLength == 0 || s.size() > longestLength) {
            longest = s;
            longestLength = s.size();
        }
        if (shortestLength == 0 || s.size() < shortestLength) {
            shortest = s;
            shortestLength = s.size();
        }
    }

    cout << "Longest string is " << longest << "(" << longestLength <<")" << endl;
    cout << "Shortest string is " << shortest << "(" << shortestLength <<")" << endl;

    return 0;
}
