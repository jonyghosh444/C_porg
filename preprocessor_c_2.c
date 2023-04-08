#include <stdio.h>

int main()
{
    printf("file name is %s'\n", __FILE__);
    printf("Today's Date is %s'\n", __DATE__);
    printf("Time now is %s'\n", __TIME__);
    printf("Line No is %d'\n", __LINE__);
    printf("Is ANSI %d'\n", __STDC__);
    return 0;
}
