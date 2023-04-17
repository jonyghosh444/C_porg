#include <stdio.h>

int main()
{
    FILE *ptr = NULL;
    char string[64] = "Jay Shree Krishna..";
    // Reading a file 
    // ptr = fopen("myfile.txt", "r");
    // fscanf(ptr, "%s", string);
    // printf("The content of this file has:\n%s\n", string);

    // Writing in a file
    ptr = fopen("myfiletwo.txt", "a");
    fprintf(ptr, "%s\n", string);
    fclose(ptr);
    


    return 0;
}