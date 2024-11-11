#include <iostream>
using namespace std;
class Faculty {
private:
    string name;
    int id;
    string department;

public:
    Faculty() {}
    void input() {
        cout << "Enter ID: ";
        cin >> id;
        cin.ignore(); 
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Department: ";
        getline(cin, department);
    }
    void display() const {
        cout << "ID: " << id << ", Name: " << name << ", Department: " << department << endl;
    }
    string getDepartment() const {
        return department;
    }
};
void countAndDisplayFaculties(Faculty faculties[], int n, const string& dept) {
    int count = 0;
    cout << "\nDetails of faculties in the " << dept << " department:\n";
    for (int i = 0; i < n; i++) {
        if (faculties[i].getDepartment() == dept) {
            faculties[i].display();
            count++;
        }
    }
    cout << "\nTotal number of faculties in the " << dept << " department: " << count << endl;
}

int main() {
    int n;
    cout << "Enter the number of faculty members: ";
    cin >> n;
    Faculty faculties[n];
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for faculty " << i + 1 << ":\n";
        faculties[i].input();
    }
    string dept;
    cout << "\nEnter the department to display faculty details: ";
    cin >> dept;
    countAndDisplayFaculties(faculties, n, dept);
    return 0;
}
