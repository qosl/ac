#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> words;

    string s;

    while (getline(cin, s)) {
        if (s.empty())
            break;
        words.push_back(s);
    }
    /* !ATTENTION! The code below may cause segmentation fault.
    Just enter two strings:
    pop
    pull
    TO DO: RISE A QUESTION ABOUT THIS ISSUE ON STACKOVERFLOW
    */
    for (vector<string>::iterator i = words.begin(); i != words.end(); ++i) {
        string tmp = (*i);
        reverse((*i).begin(), (*i).end());
        if (tmp != (*i))
            words.erase(i);
        //cout << (*i) << endl;

    }
}
