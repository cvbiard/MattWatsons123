#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{

    srand(time(NULL));

    int deck[3];

    int exit = 0;
    int result = 0;
    int highest = 0;

    while (exit == 0)
    {
        printf("Welcome to Matt Watson's 1,2,3! What would you like to do? (Type number and hit enter)\n1. Play\n2. Rules\n3. Quit\n");
        scanf("%d", &result);
        system("cls");

        switch (result)
        {
        case 1:
            printf("Shuffling...\n");
            deck[0] = rand() % 3 + 1;
            deck[1] = rand() % 3 + 1;
            while (deck[1] == deck[0])
            {
                deck[1] = rand() % 3 + 1;
            }
            deck[2] = rand() % 3 + 1;
            while (deck[2] == deck[1] || deck[2] == deck[0])
            {
                deck[2] = rand() % 3 + 1;
            }
            system("PAUSE");
            system("cls");
            printf("Drawing...\n");
            printf("Player 1 drew %d\n", deck[0]);
            system("PAUSE");
            system("cls");
            printf("Drawing...\n");
            printf("Player 1 drew %d\n", deck[0]);
            printf("Player 2 drew %d\n", deck[1]);
            system("PAUSE");
            system("cls");
            printf("Drawing...\n");
            printf("Player 1 drew %d\n", deck[0]);
            printf("Player 2 drew %d\n", deck[1]);
            printf("Player 3 drew %d\n", deck[2]);
            system("PAUSE");
            system("cls");

            for (int i = 0; i < 3; i++)
            {
                if (deck[i] == 3)
                {
                    printf("Drawing...\n");
                    printf("Player 1 drew %d\n", deck[0]);
                    printf("Player 2 drew %d\n", deck[1]);
                    printf("Player 3 drew %d\n", deck[2]);
                    printf("Player %d wins!\n", i + 1);
                }
            }
            system("PAUSE");
            system("cls");
            break;
        case 2:
            printf("The rules (as defined by Matt Watson in 'MATT'S BIG IDEA - SONIC '06 - EP 17 (SHADOW'S STORY)' from his YouTube channel SuperMega with Ryan Magee):\n");
            printf("We get three index cards, you write 1, 2, and 3 on them. Shuffle them, take three players, each person gets one. Whoever has the highest number wins.\n");
            system("PAUSE");
            system("cls");
            break;
        case 3:
            exit = 1;
            break;
        }
    }
    system("cls");
    return 0;
}