# include <stdio.h>
# include <stdlib.h>
//Dynamic Memory Allocation
int main() {
//sizeof function
printf("%d\n", sizeof(int));
printf("%d\n", sizeof(float));
printf("%d\n", sizeof(char));
//malloc
// int *ptr;
// ptr = (int *) malloc(5 * sizeof(int));
// for(int i=0; i<5; i++) {
// scanf("%d", &ptr[i]);
// }
// for(int i=0; i<5; i++) {
// printf("number %d = %d\n", i+1, ptr[i]);

// }
//calloc
int *ptr = (int *) calloc(5, sizeof(int));
for(int i=0; i<5; i++) {
printf("number %d = %d\n", i+1, ptr[i]);
}
//free
free(ptr);
return 0;
}