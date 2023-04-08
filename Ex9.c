#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char ComputerTurn(int n)
{
    srand(time(NULL));
    int CmpTurn = rand() % n;
    return CmpTurn;
}
int Action(char p, char c)
{
    // player own = 1, Opponent own = -1, Drawn = 0
    int Ap;
    if (p == c)
    {
        return Ap = 0;
    }
    else
    {
        if (p == 'r' && c == 's')
        {
            return Ap = 1;
        }
        else if (p == 's' && c == 'r')
        {
            return Ap = -1;
        }
        else if (p == 'p' && c == 'r')
        {
            return Ap = 1;
        }
        else if (p == 'r' && c == 'p')
        {
            return Ap = -1;
        }
        else if (p == 's' && c == 'p')
        {
            return Ap = 1;
        }
        else if (p == 'p' && c == 's')
        {
            return Ap = -1;
        }
    }
}

int main()
{
    int i, temp, Ap;
    int playerPoint = 0;
    int opponentPoint = 0;
    char elm[32] = {'r', 'p', 's'};
    char player, computer;
    i = 0;
    while (i < 3)
    {
        printf("Your Turn:\n");
        scanf("%d", &temp);
        player = elm[temp - 1];
        if (player == 'r')
        {
            printf("You chose Rock..\n");
        }
        else if (player == 'p')
        {
            printf("You chose Paper..\n");
        }
        else if (player == 's')
        {
            printf("You chose Scissors..\n");
        }
        temp = ComputerTurn(3) + 1;
        computer = elm[temp - 1];
        if (computer == 'r')
        {
            printf("Opponent chose Rock..\n");
        }
        else if (computer == 'p')
        {
            printf("Opponent chose Paper..\n");
        }
        else if (computer == 's')
        {
            printf("Opponent chose Scissors..\n");
        }
        temp = ComputerTurn(3) + 1;
        Ap = Action(player, computer);
        if (Ap == 0)
        {
            playerPoint++;
            opponentPoint++;
            printf("Round %d Drawn\n", i + 1);
        }
        else if (Ap == 1)
        {
            playerPoint++;
            printf("You own the Round %d\n", i + 1);
        }
        else if (Ap == -1)
        {
            opponentPoint++;
            printf("Opponent own the Round%d\n", i + 1);
        }
        i++;
    }

    printf("\n");
    printf("Your total point is %d\n", playerPoint);
    printf("Opponent's total point is %d\n", opponentPoint);

    if (playerPoint == opponentPoint)
    {
        printf("Game Over!!!!!!");
        printf("Match is Drawn!!!!!\n");
    }
    else if (playerPoint > opponentPoint)
    {
        printf("Game Over!!!!!!\n");
        printf("Congratulations You own the match\n");
    }
    else if (opponentPoint < playerPoint)
    {
        printf("Game Over!!!!!!\n");
        printf("Congratulations You Lose the match\nBetter Luck Next Time\n");
    }

    return 0;
}