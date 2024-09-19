#include <stdio.h>
#include <math.h>

int main(){
    int marks;
    printf("Enter a number(0-100) :");
    scanf("%d", &marks);

    if( marks >=0 && marks <= 30){
        printf("FAIL\n");
    } else if(marks >= 30 && marks <= 100) {
        printf("PASS\n");
    } else {
        printf("Wrong Marks");
    }
    return 0;
}