#include <iostream>
using namespace std;
class Student {
private:
    float marks;
public:
    Student(float m = 0.0) : marks(m) {}
    friend float calculateAverage(Student section[], int n);
};
float calculateAverage(Student section[], int n) {
    float sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += section[i].marks;
    }
    return sum / n;
}

int main() {
    const int numStudents = 5;
    Student section1[numStudents], section2[numStudents];
    float marks;
    cout << "Enter marks for 5 students in Section 1:\n";
    for (int i = 0; i < numStudents; i++) {
        cout << "Enter marks for student " << i + 1 << ": ";
        cin >> marks;
        section1[i] = Student(marks);
    }
    cout << "\nEnter marks for 5 students in Section 2:\n";
    for (int i = 0; i < numStudents; i++) {
        cout << "Enter marks for student " << i + 1 << ": ";
        cin >> marks;
        section2[i] = Student(marks);
    }
    float average1 = calculateAverage(section1, numStudents);
    float average2 = calculateAverage(section2, numStudents);

    cout << "\nAverage marks of Section 1: " << average1 << endl;
    cout << "Average marks of Section 2: " << average2 << endl;

    return 0;
}
