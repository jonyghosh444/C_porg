/*
you manage a travel agency and you want your n drivers to input their following details:
1. Name
2. Driving License No
3.Route
4.kms
Program should be able to take n as input and your drivers will start inputting their details one by one.

Your program should print details of the drivers in a beautiful fashion.
User structures.
*/

#include <stdio.h>
#include <string.h>
#include<stdlib.h>

typedef struct driver_details
{
    char Name[32];
    int Driving_license_No;
    char Route[32];
    int kms;

} driver;

int main()
{
    while (1)
    {
        int choice;
        driver driver1, driver2, driver3;
        printf("1.Enter Driver Information.\n2.See Details.\n3.Exit \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            // Driver 1
            printf("Enter Driver1 Name:\n");
            scanf("%s", driver1.Name);
            printf("Enter Driver1 Driving License No:\n");
            scanf("%d", &driver1.Driving_license_No);
            printf("Enter Driver1 Route:\n");
            scanf("%s", driver1.Route);
            printf("Enter Driver1 kms:\n");
            scanf("%d", &driver1.kms);
            // Driver 2
            printf("Enter Driver2 Name:\n");
            scanf("%s", driver2.Name);
            printf("Enter Driver2 Driving License No:\n");
            scanf("%d", &driver2.Driving_license_No);
            printf("Enter Driver2 Route:\n");
            scanf("%s", driver2.Route);
            printf("Enter Driver2 kms:\n");
            scanf("%d", &driver2.kms);
            // Driver 3
            printf("Enter Driver3 Name:\n");
            scanf("%s", driver3.Name);
            printf("Enter Driver3 Driving License No:\n");
            scanf("%d", &driver3.Driving_license_No);
            printf("Enter Driver3 Route:\n");
            scanf("%s", driver3.Route);
            printf("Enter Driver3 kms:\n");
            scanf("%d", &driver3.kms);

            break;
        case 2:
            // Driver1
            printf("Driver1 Name %s\n",driver1.Name);
            printf("Driver1 Driving License No %d\n",driver1.Driving_license_No);
            printf("Driver1 Route %s\n",driver1.Route);
            printf("Driver1 kms %d\n",driver1.kms);
            // Driver 2
            printf("Driver2 Name %s\n",driver2.Name);
            printf("Driver2 Driving License No %d\n",driver2.Driving_license_No);
            printf("Driver2 Route %s\n",driver2.Route);
            printf("Driver2 kms %d\n",driver2.kms);
            // Driver 3
            printf("Driver3 Name %s\n",driver3.Name);
            printf("Driver3 Driving License No %d\n",driver3.Driving_license_No);
            printf("Driver3 Route %s\n",driver3.Route);
            printf("Driver3 kms %d\n",driver3.kms);
            break;
        case 3:
            exit(0);
        default:
            printf("Please Enter valid choice number.....\n");
        }
    }

    return 0;
}