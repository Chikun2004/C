# include <stdio.h>
int main() {
int marks[3];
printf("physics : ");
scanf("%d", &marks[0]);
printf("chem : ");
scanf("%d", &marks[1]);
printf("math : ");
scanf("%d", &marks[2]);
printf("physics = %d, ", marks[0]); //physics
printf("chem = %d, ", marks[1]); //chem
printf("math = %d \n", marks[2]); //math

return 0;
}

/*
    #include <stdio.h>

int main() {
    int physics, chemistry, math;

    printf("Enter marks for Physics: ");
    scanf("%d", &physics);

    printf("Enter marks for Chemistry: ");
    scanf("%d", &chemistry);

    printf("Enter marks for Math: ");
    scanf("%d", &math);

    printf("\nMarks obtained:\n");
    printf("Physics: %d\n", physics);
    printf("Chemistry: %d\n", chemistry);
    printf("Math: %d\n", math);

    return 0;
}

*/