#include <stdio.h>

int main()
{
    FILE *ptr = NULL;
    ptr = fopen("myfile.txt", "r+");
    // fgetc
    // char c = fgetc(ptr);
    // printf("The character I read was %c\n", c);
    // fgets
    char str[64];
    fgets(str, 5, ptr);
    printf("Ther string is %s\n", str);

    // fputc
    // fputc('o',ptr);
    // fputs("hare krishna hare krishna\nKrishna krishna hare hare\nhare ramo hare ramo\nramo ramo hare hare\n",ptr);




    fclose(ptr);

    return 0;
}