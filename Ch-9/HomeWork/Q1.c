#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100
#define MAX_TEACHERS 50
#define MAX_STAFF 50

// Structure to define common attributes for person
struct Person {
    char name[50];
    int age;
    char gender[10];
    char address[100];
};

// Structure for Student
struct Student {
    struct Person person;
    int roll_number;
    float cgpa;
    int attendance;
};

// Structure for Teacher
struct Teacher {
    struct Person person;
    char subject[50];
    int employee_id;
};

// Structure for Staff
struct Staff {
    struct Person person;
    char department[50];
    int employee_id;
};

// Arrays to store the details of students, teachers, and staff
struct Student students[MAX_STUDENTS];
struct Teacher teachers[MAX_TEACHERS];
struct Staff staff[MAX_STAFF];

int student_count = 0, teacher_count = 0, staff_count = 0;

// Function to add student details
void addStudent() {
    if(student_count >= MAX_STUDENTS) {
        printf("Student capacity reached!\n");
        return;
    }

    struct Student newStudent;
    
    printf("Enter Student Name: ");
    scanf(" %[^\n]s", newStudent.person.name);
    
    printf("Enter Age: ");
    scanf("%d", &newStudent.person.age);
    
    printf("Enter Gender: ");
    scanf("%s", newStudent.person.gender);
    
    printf("Enter Address: ");
    scanf(" %[^\n]s", newStudent.person.address);
    
    printf("Enter Roll Number: ");
    scanf("%d", &newStudent.roll_number);
    
    printf("Enter CGPA: ");
    scanf("%f", &newStudent.cgpa);
    
    printf("Enter Attendance: ");
    scanf("%d", &newStudent.attendance);

    students[student_count++] = newStudent;
    printf("Student added successfully!\n");
}

// Function to add teacher details
void addTeacher() {
    if(teacher_count >= MAX_TEACHERS) {
        printf("Teacher capacity reached!\n");
        return;
    }

    struct Teacher newTeacher;
    
    printf("Enter Teacher Name: ");
    scanf(" %[^\n]s", newTeacher.person.name);
    
    printf("Enter Age: ");
    scanf("%d", &newTeacher.person.age);
    
    printf("Enter Gender: ");
    scanf("%s", newTeacher.person.gender);
    
    printf("Enter Address: ");
    scanf(" %[^\n]s", newTeacher.person.address);
    
    printf("Enter Subject: ");
    scanf(" %[^\n]s", newTeacher.subject);
    
    printf("Enter Employee ID: ");
    scanf("%d", &newTeacher.employee_id);
    
    teachers[teacher_count++] = newTeacher;
    printf("Teacher added successfully!\n");
}

// Function to add staff details
void addStaff() {
    if(staff_count >= MAX_STAFF) {
        printf("Staff capacity reached!\n");
        return;
    }

    struct Staff newStaff;
    
    printf("Enter Staff Name: ");
    scanf(" %[^\n]s", newStaff.person.name);
    
    printf("Enter Age: ");
    scanf("%d", &newStaff.person.age);
    
    printf("Enter Gender: ");
    scanf("%s", newStaff.person.gender);
    
    printf("Enter Address: ");
    scanf(" %[^\n]s", newStaff.person.address);
    
    printf("Enter Department: ");
    scanf(" %[^\n]s", newStaff.department);
    
    printf("Enter Employee ID: ");
    scanf("%d", &newStaff.employee_id);
    
    staff[staff_count++] = newStaff;
    printf("Staff added successfully!\n");
}

// Function to display student details
void displayStudents() {
    for(int i = 0; i < student_count; i++) {
        printf("\n--- Student %d ---\n", i + 1);
        printf("Name: %s\n", students[i].person.name);
        printf("Age: %d\n", students[i].person.age);
        printf("Gender: %s\n", students[i].person.gender);
        printf("Address: %s\n", students[i].person.address);
        printf("Roll Number: %d\n", students[i].roll_number);
        printf("CGPA: %.2f\n", students[i].cgpa);
        printf("Attendance: %d\n", students[i].attendance);
    }
}

// Function to display teacher details
void displayTeachers() {
    for(int i = 0; i < teacher_count; i++) {
        printf("\n--- Teacher %d ---\n", i + 1);
        printf("Name: %s\n", teachers[i].person.name);
        printf("Age: %d\n", teachers[i].person.age);
        printf("Gender: %s\n", teachers[i].person.gender);
        printf("Address: %s\n", teachers[i].person.address);
        printf("Subject: %s\n", teachers[i].subject);
        printf("Employee ID: %d\n", teachers[i].employee_id);
    }
}

// Function to display staff details
void displayStaff() {
    for(int i = 0; i < staff_count; i++) {
        printf("\n--- Staff %d ---\n", i + 1);
        printf("Name: %s\n", staff[i].person.name);
        printf("Age: %d\n", staff[i].person.age);
        printf("Gender: %s\n", staff[i].person.gender);
        printf("Address: %s\n", staff[i].person.address);
        printf("Department: %s\n", staff[i].department);
        printf("Employee ID: %d\n", staff[i].employee_id);
    }
}

// Function to calculate CGPA for a student based on roll number
void calculateCGPA(int roll_number) {
    for(int i = 0; i < student_count; i++) {
        if(students[i].roll_number == roll_number) {
            float total_points = 0.0;
            int num_subjects = 5;
            printf("Enter total points for 5 subjects: ");
            for(int j = 0; j < num_subjects; j++) {
                float points;
                scanf("%f", &points);
                total_points += points;
            }
            students[i].cgpa = total_points / num_subjects;
            printf("Updated CGPA: %.2f\n", students[i].cgpa);
            return;
        }
    }
    printf("Student with roll number %d not found!\n", roll_number);
}

// Function to manage attendance for a student
void updateAttendance(int roll_number, int attendance) {
    for(int i = 0; i < student_count; i++) {
        if(students[i].roll_number == roll_number) {
            students[i].attendance = attendance;
            printf("Attendance updated for Roll Number %d\n", roll_number);
            return;
        }
    }
    printf("Student with roll number %d not found!\n", roll_number);
}

// Menu system to interact with the user
void menu() {
    int choice;
    do {
        printf("\n1. Add Student\n2. Add Teacher\n3. Add Staff\n");
        printf("4. Display Students\n5. Display Teachers\n6. Display Staff\n");
        printf("7. Calculate CGPA\n8. Update Attendance\n9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: addStudent(); break;
            case 2: addTeacher(); break;
            case 3: addStaff(); break;
            case 4: displayStudents(); break;
            case 5: displayTeachers(); break;
            case 6: displayStaff(); break;
            case 7: {
                int roll_number;
                printf("Enter Roll Number of Student: ");
                scanf("%d", &roll_number);
                calculateCGPA(roll_number);
                break;
            }
            case 8: {
                int roll_number, attendance;
                printf("Enter Roll Number of Student: ");
                scanf("%d", &roll_number);
                printf("Enter Updated Attendance: ");
                scanf("%d", &attendance);
                updateAttendance(roll_number, attendance);
                break;
            }
            case 9: printf("Exiting...\n"); break;
            default: printf("Invalid choice! Please try again.\n");
        }
    } while(choice != 9);
}

// Main function to execute the program
int main() {
    menu();
    return 0;
}