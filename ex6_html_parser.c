#include <stdio.h>
#include <string.h>

void Html_Parser(char *html)
{
    // Remove tag
    int in = 0;
    int index = 0;
    for (int i = 0; i < strlen(html); i++)
    {
        if (html[i] == '<')
        {
            in = 1;
            continue;
        }
        else if (html[i] == '>')
        {
            in = 0;
            continue;
        }
        if (in == 0)
        {
            html[index] = html[i];
            index++;
        }
    }
    html[index] = '\0';

    // Remove the trailing spaces from the beginning
    while (html[0] == ' ')
    {
        // shift the string to the left
        for (int i = 0; i < strlen(html); i++)
        {
            html[i] = html[i + 1];
        }
    }
    // Remove the trailing spaces from the end
    while (html[strlen(html) - 1] == ' ')
    {
        html[strlen(html)-1] = '\0';
    }
}

int main()
{
    char html[] = "<head>               Hare Krishna Hare Krishna Krishna Krishna Hare Hare Hare Ramo Hare Ramo Ramo Ramo Hare Hare.     </head>";
    printf("%s\n", html);
    Html_Parser(html);
    printf("String from html ~~%s~~~\n", html);

    return 0;
}