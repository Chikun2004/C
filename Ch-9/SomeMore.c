# include <stdio.h>
# include <string.h>
//user defined
typedef struct student {
int roll;
float cgpa;
char name[100];
} stu ;
typedef struct computerengineeringstudent {
int roll;
float cgpa;
char name[100];
} coe;
struct address {
int houseNo;
int block;
char city[100];
char state[100];
};
struct vector {
int x;

int y;
};
void calcSum(struct vector v1, struct vector v2, struct vector sum);
struct complex {
int real;
int img;
};
typedef struct BankAccount {
int accountNo;
char name[100];
} acc ;
int main() {
acc acc1 = {123, "shradha"};
acc acc2 = {124, "rajat"};
acc acc3 = {125, "sudhir"};
printf("acc no = %d", acc1.accountNo);
printf("name = %s", acc1.name);
return 0;
}
void calcSum(struct vector v1, struct vector v2, struct vector sum) {
sum.x = v1.x + v2.x;
sum.y = v1.y + v2.y;
printf("sum of x is : %d\n", sum.x);
printf("sum of y is : %d\n", sum.y);
}