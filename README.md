# Student Information System (SIS)

## 📝 Description

A comprehensive C++ console application for managing student records. This system allows educational institutions to maintain detailed student information including personal details, academic records, financial status, and health information.

## ✨ Features

- Add new students with detailed information
- Display all enrolled students
- Search for specific students by ID
- Track multiple aspects of student data:
  * Personal Information
  * Academic Status
  * Financial Records
  * Health Information
  * Participation Details

## 🔧 Technical Details

### Data Structure
```cpp
struct Student {
    // Personal Information
    int id;                     // Unique identifier for each student
    string name;               // Full name of the student
    string status;            // Current status (In-studies/Left/Pass out)
    
    // Academic Information
    string admissionDate;     // Date of admission
    string batch;            // Student's batch/class
    string documentSubmission; // Status of document submission
    
    // Financial Information
    double totalFees;        // Total fees to be paid
    double feesPaid;        // Amount already paid
    double feesDue;         // Remaining fees (automatically calculated)
    
    // Academic Performance
    int attendance;         // Attendance record
    double averageScore;   // Academic performance metric
    
    // Health and Special Considerations
    string healthStatus;    // Current health condition
    string disabilityStatus; // Any disabilities to consider
    
    // Extra-curricular
    string participationDetails; // Participation in activities
};
```

## 🛠️ Functions Explanation

### 1. Add Student Function
```cpp
void addStudent(Student students[], int& numStudents)
```
**Purpose:** Adds a new student to the system
- Checks for maximum capacity (50 students)
- Automatically assigns ID (incremental)
- Collects comprehensive student information
- Calculates fees due automatically
- Updates student count

### 2. Display Students Function
```cpp
void displayStudents(const Student students[], int numStudents)
```
**Purpose:** Shows list of all students
- Displays basic information (ID, Name, Status)
- Handles empty database case
- Formatted tabular output

### 3. Search Student Function
```cpp
void searchStudent(const Student students[], int numStudents, int studentId)
```
**Purpose:** Finds and displays specific student details
- Searches by student ID
- Shows all available information if found
- Displays error message if student not found

## 📋 Program Flow

1. **Main Menu Options:**
   ```
   1. Add Student
   2. Display Students
   3. Search Student
   4. Quit
   ```

2. **Data Input Process:**
   - Personal Information
   - Academic Details
   - Financial Information
   - Performance Metrics
   - Health Information
   - Participation Details

3. **Data Validation:**
   - Checks for maximum student limit
   - Validates student ID during search
   - Handles invalid menu choices

## 💻 Technical Requirements

- C++ Compiler (C++11 or later)
- Console/Terminal support
- Minimum 50 student records storage capacity

## 🚀 How to Use

1. **Compilation:**
   ```bash
   g++ student_system.cpp -o student_system
   ```

2. **Execution:**
   ```bash
   ./student_system
   ```

3. **Adding a Student:**
   - Select Option 1
   - Enter requested information
   - System confirms successful addition

4. **Viewing Students:**
   - Select Option 2
   - View tabulated list of all students

5. **Searching for a Student:**
   - Select Option 3
   - Enter student ID
   - View detailed information

## 🔍 Data Fields Explanation

1. **Personal Information:**
   - `id`: Unique identifier (auto-generated)
   - `name`: Student's full name
   - `status`: Current enrollment status

2. **Academic Records:**
   - `admissionDate`: When student joined
   - `batch`: Class/Year group
   - `documentSubmission`: Track submitted documents

3. **Financial Tracking:**
   - `totalFees`: Complete fee amount
   - `feesPaid`: Amount received
   - `feesDue`: Pending amount (auto-calculated)

4. **Performance Metrics:**
   - `attendance`: Attendance percentage
   - `averageScore`: Academic performance

5. **Health Records:**
   - `healthStatus`: Current health condition
   - `disabilityStatus`: Special needs if any

6. **Activities:**
   - `participationDetails`: Extra-curricular activities

## ⚠️ Limitations

1. **Storage Limits:**
   - Maximum 50 students
   - Fixed array size
   - No persistent storage

2. **Data Validation:**
   - Basic input validation
   - No date format validation
   - No duplicate checking

3. **Features Not Included:**
   - Data modification
   - Record deletion
   - Advanced search options
   - Data persistence

## 🔄 Future Improvements

1. **Data Management:**
   - Database integration
   - File system storage
   - Dynamic array sizing

2. **Features to Add:**
   - Update student information
   - Delete records
   - Advanced search options
   - Data export functionality

3. **User Interface:**
   - Graphical user interface
   - Better data presentation
   - Input validation
   - Error handling

## ✍️ Author

Naila Shehzadi
- GitHub: [NailaShehzadi](https://github.com/Nailashehzadi01)
- Email: Nailashehzadi396@gmail.com

---
*Last Updated: March 2025*




