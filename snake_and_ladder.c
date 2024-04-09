#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <stdbool.h>

void Game_rule()
{
    printf("\nRules:");
    printf("\n1.Two Player Gets a chance to roll dice one after another repetedly ");
    printf("\n2.Player,Who get a first 100 points is a winner of the game");
    printf("\n3.if a Player gets a bite from the snake the player score will decrease depending on the Snake\n");
}

void snake_ladder_details()
{
    int snake_from[]={18,29,31,58,73,89,96};
    int snake_to[]={6,16,5,20,45,23,10};

    int  ladder_from[]={8,26,43,55,78,84};
    int  ladder_to[]={20,37,64,63,87,95};

    printf("\nSnake Details");
    printf("\nFrom  --  To");
    for(int i = 0; i < (sizeof(snake_from)/sizeof(snake_from[0])); i++)
    {
        printf("\n %d   --  %d",snake_from[i],snake_to[i]);
    }
    printf("\n\n\nLadder Details");
    printf("\nFrom  --  To");
    for(int i = 0; i < (sizeof(ladder_from)/sizeof(ladder_from[0])); i++)
    {
        printf("\n %d   --  %d",ladder_from[i],ladder_to[i]);
    }
}
void board(int *p1, int *p2)
{
    int board_number=100,temp=0;
    printf("\nBoard :\n");
    for (int i = 10; i > 0; i--)
    {
        for (int j = 10; j > 0; j--)
        {
            if (board_number==89)
            {
                if (*p1==89)
                {
                    *p1=23;
                    temp=1;
                }
                else if (*p2==89)
                {
                    *p2=23;
                    temp=1;
                }
                printf("  sn ");
                
            }
            if (board_number==73)
            {
                if (*p1==73)
                {
                    *p1=45;
                    temp=1;
                }
                else if (*p2==73)
                {
                    *p2=45;
                    temp=1;
                }
                printf("  sn ");
                
            }
            if (board_number==58)
            {
                if (*p1==58)
                {
                    *p1=20;
                    temp=1;
                }
                else if (*p2==58)
                {
                    *p2=20;
                    temp=1;
                }
                printf("  sn ");
                
            }
            if (board_number==96)
            {
                if (*p1==96)
                {
                    *p1=10;
                    temp=1;
                }
                else if (*p2==96)
                {
                    *p2=10;
                    temp=1;
                }
                printf("  sn ");
                
            }
            if (board_number==29)
            {
                if (*p1==29)
                {
                    *p1=16;
                    temp=1;
                }
                else if (*p2==29)
                {       
                    *p2=16;
                    temp=1;
                }
                printf("  sn ");
                
            }
            if (board_number==18)
            {
                if (*p1==18)
                {
                    *p1=6;
                    temp=1;
                }
                else if (*p2==18)
                {
                    *p2=6;
                    temp=1;
                }
                printf("  sn ");
                
            }
            if (board_number==31)
            {
                if (*p1==31)
                {
                    *p1=5;
                    temp=1;
                }
                else if (*p2==31)
                {
                    *p2=5;
                    temp=1;
                }
                printf("  sn ");
            }

            if (board_number==8)
            {
                if (*p1==8)
                {
                    *p1=20;
                }
                else if (*p2==8)
                {
                    *p2=20;
                }
                printf("  la ");
            }
            if (board_number==26)
            {
                if (*p1==26)
                {
                    *p1=37;
                }
                else if (*p2==26)
                {
                    *p2=37;
                }
                printf("  la ");
            }
            if (board_number==43)
            {
                if (*p1==43)
                {
                    *p1=64;
                }
                else if (*p2==43)
                {
                    *p2=64;
                }
                printf("  la ");
            }
            if (board_number==55)
            {
                if (*p1==55)
                {
                    *p1=63;
                }
                else if (*p2==55)
                {
                    *p2=63;
                }
                printf("  la ");
            }
            if (board_number==78)
            {
                if (*p1==78)
                {
                    *p1=87;
                }
                else if (*p2==78)
                {
                    *p2=87;
                }
                printf("  la ");
            }
            if (board_number==84)
            {
                if (*p1==84)
                {
                    *p1=95;
                }
                else if (*p2==84)
                {
                    *p2=95;
                }
                printf("  la ");
            }
            if ( (*p1 == *p2) && *p1 == board_number)
            {
                printf("\033[1;31mp1,p2\033[0m");
            }
            else if (*p1==board_number)
            {
                printf("\033[1;31m  p1 \033[0m");
            }
            else if(*p2==board_number)
            {
                printf("\033[1;31m  p2 \033[0m");
            }
            else
            {
               if (!(board_number == 18 || board_number == 96 || board_number == 89 ||board_number == 73 || board_number == 58 || board_number == 31 ||board_number == 29 || board_number == 8 || board_number == 26|| board_number == 43 || board_number == 55 || board_number == 78 || board_number == 84) && board_number>=10 && board_number!=100)
                {
                    printf("  %d ",board_number);
                }
                else if (board_number==100)
                {
                   printf(" 100 ");
                }
                else if(board_number<10&&board_number!=8)
                {
                    printf("  0%d ",board_number);
                }
            }
            board_number--;     
        }
        printf("\n");
    }
    if(temp==1)
    {
        printf("\nYou Got Snake bite");
    }
}

int main()
{
    int p1=0,p2=0;
    bool flag=true;
    int random,chance=1,ch;
    while (flag)
    {
        printf("\nChoice:\n1.To Know the Rules");
        if (chance%2 == 1)
        {
            printf("\n2.To Roll the dice for player 1");
            printf("\n3.Player 1 to Exit");
        }
        else
        {
            printf("\n2.To Roll the dice for player 2");
            printf("\n3.Player 2 to Exit");
        }
        printf("\n4.To know the details of Sankes and Ladders");
        printf("\nEnter the Choice : ");
        scanf("%d",&ch);
        random = rand()%6 + 1;
        switch (ch)
        {
        case 1:
            Game_rule();
            break;
        case 2:
            printf("\nYou Got %d",random);
            if (chance%2 == 1)
            {
                if (p1+random > 100)
                {
                    printf("\nYou need %d or less to Win the Game",(100-p1));
                }
                else
                {
                    p1+=random;
                }
            }
            else
            {
                if (p2+random > 100)
                {
                    printf("\nYou need %d or less to Win the Game",(100-p2));
                }
                else
                {
                    p2+=random;
                }
            }
            if (p1==100)
            {
                printf("\n\033[1;32mPlayer 1 Wins\033[0m");
                flag=false;
            }
            else if (p2==100)
            {
                printf("\n\033[1;32mPlayer 2 Wins\033[0m");
                flag=false;
            }
            board(&p1,&p2);
            if (random!=6)
            {
               chance++;
            }
            else
            {
                printf("You got One More Chance");
            }
            break;
        case 3:
            if (chance%2 == 1)
            {
                printf("\n\033[1;32mPlayer 2 Wins\033[0m");
            }
            else
            {
                printf("\n\033[1;32mPlayer 1 Wins\033[0m");
            }
            flag=false;
            break;
        case 4:
            snake_ladder_details();
            break;
        default:
            printf("\nInvalid choice. Please enter a valid choice.");
            break;
        }
    }
    printf("\n\033[1;34mCongratulation For Your Win\033[0m");
    printf("\n\033[1;34mHope you play again\033[0m");
    getch();
}