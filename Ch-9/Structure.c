# include <stdio.h>
# include <string.h>
struct student {
char name[100];
int roll;
float cgpa;
};
typedef struct ComputerEngineeringStudent{
int roll;
float cgpa;
char name[100];
} coe;
void printInfo(struct student s1);
int main() {

struct student s1;
// s1.name = "Shradha"; // not a modifiable value
strcpy(s1.name,"Shradha");
s1.roll = 64;
s1.cgpa = 9.2;
printf("student info : \n");
printf("name = %s\n", s1.name);
printf("roll no = %d\n", s1.roll);
printf("cgpa = %f\n", s1.cgpa);

//array of structures
struct student IT[60];
struct student COE[60];
struct student ECE[60];
//declaration
struct student s2 = {"Rajat", 1552, 8.6};
struct student s3 = {0};
printf("roll no of s2 = %d\n", s2.roll);
printf("roll no of s3 = %d\n", s3.roll);
//pointer to structure
struct student *ptr = &s1;
printf("student.name = %s\n", (*ptr).name);
printf("student.roll = %d\n", (*ptr).roll);
printf("student.cgpa = %f\n", (*ptr).cgpa);
//arrow operator
printf("student->name = %s\n", ptr->name);
printf("student->roll = %d\n", ptr->roll);
printf("student->cgpa = %f\n", ptr->cgpa);
//Passing structure to function
printInfo(s1);
//typedef keyword
coe student1;
student1.roll = 1664;
student1.cgpa = 6.7;

strcpy(student1.name, "sudhir");
return 0;
}
void printInfo(struct student s1) {
printf("student info : \n");
printf("name = %s\n", s1.name);
printf("roll no = %d\n", s1.roll);
printf("cgpa = %f\n", s1.cgpa);
//change
s1.roll = 1660; //but it won't be reflected to the main function

//as structures are passed by value

}