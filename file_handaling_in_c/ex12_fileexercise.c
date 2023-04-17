#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// You have to fill in values to a template letter.txt
//  Bill.txt looks smoething like this:
//  Thanks for purchasing {{item}} from our outlet {{outlet}}.
//  Please:visit our outlet {{outlet}} for any kind of problems. We plan to serve you again soon.

// you have to read this file and replace these values:
// {{name}} - Harry
// {{item}} - Table Fan
// {{outlet}} - Ram Laxmi fan outlet

// Use file functions in c to accomplish the same

char *replaceWord(char *str, char *oldWord, char *newWord)
{
    char *resultString;
    int i, count = 0;
    int newWordLength = strlen(newWord);
    int oldWordLength = strlen(oldWord);

    // Let's count the number of times old word accurs in the string
    for (i = 0; str[i] != '\0'; i++)
    {
        if (strstr(&str[i], oldWord) == &str[i])
        {
            count++;

            // Jump over this word
            i = i + oldWordLength - 1;
        }
    }

    // Making a new string to fit in the replaced words
    resultString = (char *)malloc(i + count * (newWordLength - oldWordLength) + 1);

    i = 0;
    while (*str)
    {
        // Compare the substring with result
        if (strstr(str, oldWord) == str)
        {
            strcpy(&resultString[i], newWord);
            i += newWordLength;
            str += newWordLength;
        }
        else
        {
            resultString[i] = *str;
            i+=1;
            str+=1;
        }
    }
    resultString[i] = '\0';
    return resultString;
}

int main()
{
    FILE *ptr = NULL;
    FILE *ptr2 = NULL;
    ptr = fopen("Bill.txt", "r");
    ptr2 = fopen("Genarated_Bill.txt", "w");
    char str[200];
    fgets(str, 200, ptr);
    printf("The given Bill tamplate was: %s\n", str);

    char *newstr;
    newstr = replaceWord(str, "{{item}}", "Table Fan");
    newstr = replaceWord(newstr, "{{outlet}}", "Ram Laxmi fan outlet");
    newstr = replaceWord(newstr, "{{name}}", "Harry");

    printf("The Generated Bill is: %s\n", newstr);

    fprintf(ptr2, "%s", newstr);
    fclose(ptr);
    fclose(ptr2);

    return 0;
}