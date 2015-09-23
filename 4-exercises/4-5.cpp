#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string s;
    vector<string> vec;

    while(getline(cin, s)) {
        if (s.empty())
            break;
        vec.push_back(s);
    }

    cout << "Number of words: " << vec.size() << endl;

    sort(vec.begin(), vec.end());

    string prev_word = ""; int count = 0;

    for (vector<string>::size_type i = 0; i < vec.size(); i++) {
        if (vec[i] != prev_word) {
            if (!prev_word.empty()) { // prev_word != ""
                cout << prev_word << " appeared " << count << " times" << endl;
            }
            prev_word = vec[i];
            count = 1;
        }
        else ++count;
    }
    cout << prev_word << " appeared " << count << " times" << endl;
}
