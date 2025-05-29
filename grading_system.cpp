#include <iostream>
#include <vector>
using namespace std;

struct Student {
    string name;
    int marks[5];
    float percentage;
    char grade;
};

char calculateGrade(float percentage) {
    if (percentage >= 90) return 'A';
    else if (percentage >= 75) return 'B';
    else if (percentage >= 60) return 'C';
    else if (percentage >= 40) return 'D';
    else return 'F';
}

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    vector<Student> students(n);

    for (int i = 0; i < n; i++) {
        cout << "\nEnter name of student " << i + 1 << ": ";
        cin >> students[i].name;

        int total = 0;
        cout << "Enter marks for 5 subjects: ";
        for (int j = 0; j < 5; j++) {
            cin >> students[i].marks[j];
            total += students[i].marks[j];
        }

        students[i].percentage = total / 5.0;
        students[i].grade = calculateGrade(students[i].percentage);
    }

    cout << "\n--- Report Card ---\n";
    for (auto s : students) {
        cout << "Name: " << s.name
             << " | Percentage: " << s.percentage
             << "% | Grade: " << s.grade << "\n";
    }

    return 0;
}
