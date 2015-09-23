#include <algorithm>
#include <iomanip>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
#include "grade.h"
#include "student_info.h"

using std::cin;
using std::cout;
using std::domain_error;
using std::endl;
using std::istream;
using std::ostream;
using std::setprecision;
using std::max;
using std::sort;
using std::streamsize;
using std::string;
using std::vector;


int main()
{
    vector<Student_info> students;
    Student_info record;
    string::size_type maxlen = 0;       // length of the longest name

    // read and store all the students' data.
    // Invariant: students contains all the student records read so far
    // maxlen contains the length of the longest name in students

    while(read(cin, record)) {
        // find lenght of the longest name
         maxlen = (maxlen, record.name.size());
         students.push_back(record);
    }

    //alphabetize the student records
    sort(students.begin(), students.end(), compare);

    cout << "Sort happened" << endl;

    // write the names and grades
    for (vector<Student_info>::size_type i = 0;
         i != students.size(); ++i) {
        // write the name, padded on the right to maxlen + 1 char-s
        cout << students[i].name
             << string(maxlen + 1 - students[i].name.size(), ' ');
        // compute and write the grade
        try {
            double final_grade = grade(students[i]);
            streamsize prec = cout.precision();
            cout << setprecision(3) << final_grade
                 << setprecision(prec);
        } catch (domain_error e) {
            cout << e.what();
        }
        cout << endl;
    }
    return 0;
}


















