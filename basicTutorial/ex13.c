// You have to create a command line utility to add/subtract/divide/multiply two numbers the next arguments being the two number. For example:
// >>Command.c add 45 4
// >>49
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    float result = 0;
    char add[] = "add";
    char subtract[] = "subtract";
    char divide[] = "divide";
    char multiply[] = "multiply";

    if (strcmp(argv[1], add) == 0)
    {
        for (int i = 2; i < argc; i++)
        {
            result += atoi(argv[i]);
        }
    }
    else if (strcmp(argv[1], subtract) == 0)
    {
        for (int i = 2; i < argc; i++)
        {
            if (result == 0)
            {
                result = atoi(argv[i]);
            }
            else
            {
                result = result - atoi(argv[i]);
            }
        }
    }
    else if (strcmp(argv[1], divide) == 0)
    {
        for (int i = 2; i < argc; i++)
        {
            if (result == 0)
            {
                result = atoi(argv[i]);
            }
            else
            {
                result = result / atoi(argv[i]);
            }
        }
    }
    else if (strcmp(argv[1], multiply) == 0)
    {
        for (int i = 2; i < argc; i++)
        {
            if (result == 0)
            {
                result = atoi(argv[i]);
            }
            else
            {
                result = result * atoi(argv[i]);
            }
        }
    }
    else
    {
        printf("Please enter valid operation..\n");
    }

    printf("Your %s Result is: %.2f\n", argv[1], result);

    return 0;
}
