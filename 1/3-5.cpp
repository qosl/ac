#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

#define NUM_HOMEWORK 2

int main() {
    vector<string> names;
    vector<double> final_grades;
    bool done = false;

    while(!done) {
        // ask for and read the student's name
        cout << "Please enter your name: ";
        string name;
        cin >> name;
        cout << "Hello, " << name << "!" << endl;
        names.push_back(name);

        // ask for and read the midterm and final grades
        cout << "Please enter your midterm and final grades:";
        double midterm, final;
        cin >> midterm >> final;

        cout << "Enter all your homework grades,"
                " followed by end-of-file";
        // the number and sum of grades read so far
        int counter = 0;
        double sum = 0;

        double x;   // a variable into which to read
        while (counter < NUM_HOMEWORK) {
            counter++;
            cin >> x;
            sum += x;
        }
        double final_grade = 0.2 * midterm + 0.4 * final + 0.4 * sum / counter;
        final_grades.push_back(final_grade);

        cout << "More? (Y/N) ";
        string s;
        cin >> s;

        if (s != "Y")
            done = true;
    }
    for (vector<string>::size_type i = 0; i < names.size(); ++i) {
    // write the result
    streamsize prec = cout.precision();
    cout << names[i] << "'s final grade is " << setprecision(3)
        << final_grades[i]
        << setprecision(prec) << endl;
    }
}





