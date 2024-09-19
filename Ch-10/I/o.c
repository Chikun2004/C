# include <stdio.h>
int main() {
FILE *fptr;
//Reading a file
char ch;
fptr = fopen("Test.txt", "r");
if(fptr == NULL) {
printf("doesn't exist!\n");
} else {
fscanf(fptr, "%c", &ch);
printf("character in file is : %c\n", ch);
fscanf(fptr, "%c", &ch);
printf("character in file is : %c\n", ch);
fclose(fptr);
}
//Writing in a file
ch = 'M';
fptr = fopen("NewFile.txt", "w");

fprintf(fptr, "%cANGO", ch);
fclose(fptr);
//fgets
fptr = fopen("NewFile.txt", "r");
printf("character in file is : %c\n", fgetc(fptr));
printf("character in file is : %c\n", fgetc(fptr));
printf("character in file is : %c\n", fgetc(fptr));
printf("character in file is : %c\n", fgetc(fptr));
printf("character in file is : %c\n", fgetc(fptr));
fclose(fptr);
//fputc
fptr = fopen("NewFile.txt", "w");
fputc('a', fptr);
fputc('p', fptr);
fputc('p', fptr);
fputc('l', fptr);
fputc('e', fptr);
fclose(fptr);
//read the full file (EOF)
fptr = fopen("NewFile.txt", "r");
ch = fgetc(fptr);
while(ch != EOF) {
printf("%c", ch);
ch = fgetc(fptr);
}
printf("\n");
fclose(fptr);
return 0;
}