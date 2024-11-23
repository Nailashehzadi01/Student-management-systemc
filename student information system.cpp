#include <iostream>
#include <cstring>
using namespace std;

const int MAX_STUDENTS = 50;

struct Student {
    int id;
    string name;
    string status;
   
    string admissionDate;
    string batch;
    string documentSubmission;
   
    double totalFees;
    double feesPaid;
    double feesDue;
    
    int attendance;
    
    double averageScore;
    
    string healthStatus;
    string disabilityStatus;
   
    string participationDetails;
};

void addStudent(Student students[], int& numStudents) {
    if (numStudents >= MAX_STUDENTS) {
        cout << "Maximum number of students reached." << endl;
        return;
    }

    Student newStudent;
    newStudent.id = numStudents + 1;

    cout << "Enter student name: ";
    cin.ignore();
    getline(cin, newStudent.name);

    cout << "Enter student status (In-studies, Left, Pass out, etc.): ";
    getline(cin, newStudent.status);

   
    cout << "Enter admission date: ";
    getline(cin, newStudent.admissionDate);

    cout << "Enter batch: ";
    getline(cin, newStudent.batch);

    cout << "Enter document submission status: ";
    getline(cin, newStudent.documentSubmission);

    
       cout << "Enter total fees: ";
    cin >> newStudent.totalFees;

    cout << "Enter fees paid: ";
    cin >> newStudent.feesPaid;

    newStudent.feesDue = newStudent.totalFees - newStudent.feesPaid;

    
   cout << "Enter attendance: ";
  cin >> newStudent.attendance;

    
    cout << "Enter average score: ";
    cin >> newStudent.averageScore;

    
    cout << "Enter health status: ";
    cin.ignore();
    getline(cin, newStudent.healthStatus);

   cout << "Enter disability status: ";
    getline(std::cin, newStudent.disabilityStatus);

    
   cout << "Enter participation details: ";
    getline(cin, newStudent.participationDetails);

    students[numStudents] = newStudent;
    numStudents++;

    cout << "Student added successfully." <<endl;
}

void displayStudents(const Student students[], int numStudents) {
    if (numStudents == 0) {
        cout << "No students found." << endl;
        return;
    }

    cout << "ID\tName\t\tStatus" << endl;
    for (int i = 0; i < numStudents; i++) {
        cout << students[i].id << "\t" << students[i].name << "\t\t" << students[i].status << endl;
    }
}

void searchStudent(const Student students[], int numStudents, int studentId) {
    for (int i = 0; i < numStudents; i++) {
        if (students[i].id == studentId) {
            cout << "ID: " << students[i].id << endl;
          cout << "Name: " << students[i].name << endl;
            cout << "Status: " << students[i].status << endl;
           cout << "Admission Dates: " << students[i].admissionDate << endl;
           cout << "Batch: " << students[i].batch << endl;
           cout << "Document Submission: " << students[i].documentSubmission << endl;
            cout << "Total Fees: " << students[i].totalFees << endl;
           cout << "Fees Paid: " << students[i].feesPaid << endl;
            cout << "Fees Due: " << students[i].feesDue << endl;
           cout << "Attendance: " << students[i].attendance << endl;
           cout << "Average Score: " << students[i].averageScore << endl;
            cout << "Health Status: " << students[i].healthStatus << endl;
            cout << "Disability Status: " << students[i].disabilityStatus << endl;
            cout << "Participation Details: " << students[i].participationDetails << endl;
            return;
        }
    }
    cout << "Student with ID " << studentId << " not found." << endl;
}

int main() {
    Student students[MAX_STUDENTS];
    int numStudents = 0;

    int choice;
    int studentId;

    do {
        cout << "Student Information System" << endl;
      cout << "1. Add Student" << endl;
        cout << "2. Display Students" << endl;
        cout << "3. Search Student" << endl;
       cout << "4. Quit" << std::endl;
       cout << "Enter your choice: ";
       cin >> choice;

        switch (choice) {
            case 1:
                addStudent(students, numStudents);
                break;
            case 2:
                displayStudents(students, numStudents);
                break;
            case 3:
                cout << "Enter student ID to search: ";
                cin >> studentId;
                searchStudent(students, numStudents, studentId);
                break;
            case 4:
               cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }

       cout << endl;
    } while (choice != 4);

    return 0;
}

