#include <stdio.h>
#include <unistd.h>
#include <Windows.h>
#include <string.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int main ()
{
    long int player,player1,player2,player3,number,die,negges;
    char y;
    char extra;
    char yesno;
    char typ [50];
    char typ1 [50];
    char yasser [50];
    char code [10] = "yasser";
    char code2 [10] = "YASSER";
    do{
    printf("\n-------------------------------------------------------------------------------------------\n");
    printf(" //Hello to the QUIZE GAME in this game we will learn more about you and your skills in solving//\n");
    printf("                     //mathematical problems and questions//");
        getchar();
    printf("//So let's get started,Press enter to get started :");
        getchar();
    printf("\n-----------------------------\n");
    printf("            -1-\n");
    printf("//choose the correct answer://\n");
    printf("2 + 2 = ?\n");
    printf("1: '1'\n");
    printf("2: '2'\n");
    printf("3: '4'\n");
    printf("YOU : ");
        scanf(" %d", &player);
    if (player == 1 || player == 2)
    {
    printf(ANSI_COLOR_RED       "// WRONG //"     ANSI_COLOR_RESET "\n");
    }
    if (player == 3)
    {
    printf(ANSI_COLOR_GREEN     "// CORRECT //"   ANSI_COLOR_RESET "\n");
    }
    printf("\n-----------------------------\n");
    printf("            -2-\n");
    printf("//choose the correct answer://\n");
    printf("192293 + 8280293 /928082 + 939283 %% 727272 /2902828090982 = ?\n");
    printf("1: Im gay\n");
    printf("2: 292832839\n");
    printf("3: Skip\n");
    printf("YOU :  ");
        scanf(" %d", &player1);
    if (player1 == 2 || player1 == 3)
    {
    printf(ANSI_COLOR_RED       "// WRONG //"     ANSI_COLOR_RESET "\n");
    }
    if (player1 == 1)
    {
    printf(ANSI_COLOR_GREEN     "// CORRECT //"   ANSI_COLOR_RESET "\n");
    }
        printf("\n-----------------------------\n");
    printf("            -3-\n");
    printf("//choose the correct answer://\n");
    printf("/Does your mother know that you are gay?/\n");
    printf("1: Yes \n");
    printf("2: No\n");
    printf("3: Maybe\n");
    printf("YOU :");
        scanf(" %d", &player2);
    if (player2 == 1 || player2 == 2 || player2 == 3)
    {
    printf(ANSI_COLOR_GREEN     "// CORRECT //"   ANSI_COLOR_RESET "\n");
    }
           printf("\n-----------------------------\n");
    printf("            -4-\n");
    printf("//choose the correct answer://\n");
    printf("/is the earth flat?/\n");
    printf("1: Yes\n");
    printf("2: No\n");
    printf("3: Fuck u\n");
    printf("YOU :");
        scanf(" %d", &player3);
      if (player3 == 2)
    {
    printf(ANSI_COLOR_RED       "// WRONG //"     ANSI_COLOR_RESET "\n");
    }
    if (player3 == 1 || player3 == 3)
    {
    printf(ANSI_COLOR_GREEN     "// CORRECT //"   ANSI_COLOR_RESET "\n");
    }
               printf("\n-----------------------------\n");
    printf("            -5-\n");
    printf("//Type the correct answer://\n");
    printf("To continue type ur number (hihihi)\n");
    printf("YOU :06");
        scanf(" %d", &number);
    if (number > 0)
    {
        int i,j;
        for (int i = 1; i <= 50; i++)
        {
            printf("\r");
            printf("[");
        
        for (int j = 1; j <= i; j++)
        {
            sleep(0.99);
            printf("|");
        }
        
        }
        printf("]\n");
        sleep(1);
        printf("        --The process ended successfully-- ");
    }
          printf("\n-----------------------------\n");
    printf("            -6-\n");
    printf("//choose the correct answer://\n");
    printf("/DO YOU WANT TO DIE?/\n");
    printf("1: Yes\n");
    printf("2: Yes\n");
    printf("3: Yes\n");
    printf("YOU :");
        scanf(" %d", &die);
     if (die == 1 || die == 3 || die == 2)
    {
    printf(ANSI_COLOR_GREEN     "// CORRECT //"   ANSI_COLOR_RESET "\n");
    }
            printf("\n-----------------------------\n");
    printf("            -7-\n");
    printf("//type the correct answer://\n");
    printf("/type 'E' to get an extra question or type to 'S' to skip /\n");
    printf("YOU :");
        scanf(" %c", &extra);
    if (extra == 'E' || extra == 'e' || extra == 's' || extra == 'S')
    {
     printf("bro come on are you serious :)\n");
    }
            printf("\n-----------------------------\n");
    printf("            -8-\n");
    printf("//Type the correct answer://\n");
    printf("//Let's be honest, you're gay, right?\n");
    printf("YOU :");
        scanf(" %s", &typ);
    printf("\n-----------------------------\n");
    printf("Do not lie to me bro:");
        scanf(" %s", &typ1);
    printf("I won't tell anywone, don't be afraid: ok I'm gay u got me \n");
        sleep(6);
    printf("I'm glad you talked to me openly\n");
        sleep(3);
    printf("soo let's continue\n");
        sleep(4);
              printf("\n-----------------------------\n");
    printf("            -9-\n");
    printf("//choose the correct answer://\n");
    printf("/Take this link and paste it into a browser/\n");
    printf("https://youtu.be/dQw4w9WgXcQ?si=yyCowcOYD9IABnSR \n");
        sleep(8);
    printf("Sorry the wrong link :)\n");
        sleep(4);
    printf("\n---------------------------------------------\n");    
    printf("https://youtu.be/-QxW3bRxN9Q?si=X2DdlC0rg-LWFhhQ \n");
    printf("so what did you see\n");
    printf("1: Two monkeys\n");
    printf("2: Two gay niggas kissing \n");
    printf("3: nothing\n");
    printf("YOU :");
        scanf(" %d", &negges);
        if (negges == 3)
    {
    printf(ANSI_COLOR_RED       "// WRONG //"     ANSI_COLOR_RESET "\n");
    }
    if (negges == 2 || negges == 1)
    {
    printf(ANSI_COLOR_GREEN     "// CORRECT //"   ANSI_COLOR_RESET "\n");
    }
            printf("\n-----------------------------\n");
    printf("            -10-\n");
    printf("//Type the correct answer://\n");
    printf("// What is your best friend's name ?\n");
    printf("YOU :");
        scanf(" %s", &yasser);
    if(strcmp(yasser,code) == 0 )
    {
        sleep(1);
    printf("THX BRO ;)\n");
    }
    else if (strcmp(yasser,code) == -1 || strcmp(yasser,code) < 0)
    {
        sleep(1);
    printf("You mean Yasser right :)\n");
    }
        sleep(1);
    printf("So You did it man, congratualtions.\n");
        sleep(0.99);
    printf("Do you want to replay the game (y/n): ");
        scanf(" %c", &yesno);
    if (yesno == 'n' || yesno == 'N')
        {
            printf("                                    //Fuck//\n");
                sleep(0.99);
            return 0;
        }
     }while ( yesno == 'y' || yesno == 'Y');

    return 0;
    //THE_CEATOR_YASSER
}