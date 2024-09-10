//Creating a 5-Level first aid game
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#include<windows.h>
#include<mmsystem.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>

int main()
{
    Beep(500,500);
    Beep(300,500);
    Beep(400,500);
    Beep(1000,500);
    Beep(50,500);
    Beep(5000,500);
    char user_name[20],choice,choice2,choice3,choice4,choice5,choice6,choice7,choice8;
    int b,i,p,countp,count;
    float score;

    //Display loading before game starts
        system("cls");
       for (b = 0; b < 10000; b++)
        {
           SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(10));
           printf("\t\t\t\t_____________");
           printf("\r\t\t\t\t\t\t\t\t\t\tLoading... %d%%", b/100);
           fputs("\e[?25l", stdout); /* hide the cursor */
        }
       printf("\n");
PlaySound(TEXT("C:\\Users\\Siri\\Downloads\\dilated_pupils"),NULL, SND_ASYNC | SND_LOOP);//general background music

    mainhome:
    system("cls");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(12));
    printf("\t\t\t\t\t\t\t\t                       ____ _                                          \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(12));
    printf("\t\t\t\t\t\t\t\t                   .--.\  ___ `'.                                             \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(12));
    printf("\t\t\t\t\t\t\t\t                   |__| ' |--.\\  \\                                           \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(12));
    printf("\t\t\t\t\t\t\t\t                   .--. | |    \\  '                                          \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(12));
    printf("\t\t\t\t\t\t\t\t            __     |  | | |     |  '    __                                   \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(12));
    printf("\t\t\t\t\t\t\t\t         .:--.'.   |  | | |     |  | .:--.'.                                 \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(12));
    printf("\t\t\t\t\t\t\t\t        / |   \\ |  |  | | |     ' .'/ |   \\ |                                \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(12));
    printf("\t\t\t\t\t\t\t\t        `** __ | | |  | | |___.' /' `** __ | |                                \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(12));
    printf("\t\t\t\t\t\t\t\t          .'.''| | |__|/_______.'/    .'.''| |                                \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(12));
    printf("\t\t\t\t\t\t\t\t         / /   | |_   \\_______|/     / /   | |_                               \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(12));
    printf("\t\t\t\t\t\t\t\t         \ \._,\ '/                     \ \._,\ '/                               \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(12));
    printf("\t\t\t\t\t\t\t\t         \\__ __`//                   \\__ __`//                               \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(9));
    printf("\n\t\t\t\t\t\t\t\t |#######################################################|");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
    printf("\n\t\t\t\t\t\t\t\t | Feel  Good  With  First  Aid,  Feel  Good  With  AIDA |");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(9));
    printf("\n\t\t\t\t\t\t\t\t |#######################################################|");

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(9));
    printf("\n\n\t\t\t\t\t\t\t\t\t   ------------------------------------");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
    printf("\n\n\t\t\t\t\t\t\t\t\t   --------------MAIN Menu-------------  ");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(9));
    printf("\n\n\t\t\t\t\t\t\t\t\t   ------------------------------------");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(10));
    printf("\n\n\t\t\t\t\t\t\t\t\t     > Press P to Play Game");
    printf("\n\n\t\t\t\t\t\t\t\t\t     > Press V to View Score");
    printf("\n\n\t\t\t\t\t\t\t\t\t     > Press R to Reset Score");
    printf("\n\n\t\t\t\t\t\t\t\t\t     > Press H for Help");
    printf("\n\n\t\t\t\t\t\t\t\t\t     > Press Q to Quit");
    choice=toupper(getch());
    if(choice=='P')
    {
    system("cls");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(10));
    printf("\n\n\n\n\n\n\n\n\n\n\t\t\tEnter your user name: ");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
    gets(user_name);
    system("cls");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(12));
    printf("\n ---------------------------------------------------------------------------------  WELCOME %s to AIDA  --------------------------------------------------------------------------------------------",user_name);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
    printf("\n\n Here are some TIPS you might wanna know before playing:");
    printf("\n\t\t\t\t\t\t\t\t >> In the game, you will be given a total of 5 missions to test your");
    printf("\n\t\t\t\t\t\t\t\t    general knowledge on First Aid.");
    printf("\n\t\t\t\t\t\t\t\t >> You will be given options with different letters next to them");
    printf("\n\t\t\t\t\t\t\t\t >> Choose the letter of your choice to make your next move");
    printf("\n\t\t\t\t\t\t\t\t >> You will be given missions continuously, if you keep making the right moves");
    printf("\n\t\t\t\t\t\t\t\t >> No negative marking for wrong moves!");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(10));
    printf("\n\n\t\t\t\t\t\t\t\t\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
    printf("\n\n\n\t\t\t\t\t\t\t\t\t Press  S  to start the game!");
    printf("\n\t\t\t\t\t\t\t\t\t Press M to go to MAIN MENU!");
    choice2=toupper(getch());
    if (choice2=='S')
		{
		    goto game;
        }
	else if (choice2=='M')
		{
        goto mainhome;
       }
game:
     countp = 0;
     for (i = 1; i <= 20; i++)
     {
     p=i;
     switch(p)
		{
		case 1:
		system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
		printf("\n====================================================================================================================================================================================================");
		printf("\n-------------------------------------------------------------------------------------  ");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(10));
        printf("LEVEL 1");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
        printf("  ----------------------------------------------------------------------------------------------------");
		printf("\n====================================================================================================================================================================================================");
		Sleep(2000);
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(10));
        printf("\n\tPress M to go to MAIN MENU");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPOINTS:");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(7));
        printf(" %d",countp++);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(10));
        printf("\n\tPress Q to QUIT program");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
		printf("\n\n\n\t\t\t\t\t\t\t\tYou were about to cook yummy Indomie but you burnt your hand in the flames...oh oh.");
		printf("\n\t\t\t\t\t\t\t\tCool the burn before it gets worst.");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
		printf("\n\n\t\t\t\t\t\t\t\t#############################################################");
		printf("\n\n\t\t\t\t\t\t\t\t[A]");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(10));
        printf(" Cool the burn with ICE");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
		printf("\n\n\t\t\t\t\t\t\t\t#############################################################");
        printf("\n\n\t\t\t\t\t\t\t\t[B]");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(10));
        printf(" Cool the burn under running WATER for at least 10 minutes");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
        printf("\n\n\t\t\t\t\t\t\t\t#############################################################");
        printf("\n\n\t\t\t\t\t\t\t\t[C]");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(10));
        printf(" Apply OIL on the burn");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
        printf("\n\n\t\t\t\t\t\t\t\t#############################################################");
        choice3=toupper(getch());
		if (choice3=='B')
			{
             PlaySound(TEXT("C:\\Users\\Siri\\Downloads\\mixkit-girls-audience-applause-510"),NULL, SND_ASYNC);
             SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(10));
             printf("\n\nWOW! Great thinking GENIUS!!!");
             printf("\n\nThis will definitely cool the burn, reduce any pains and risk of scarring");
             SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
             printf("\n\n\n\t\t\t\t\t\t\t\t\t (Press  Enter to go to the next level)");
             countp++;
             getch();
             PlaySound(TEXT("C:\\Users\\Siri\\Downloads\\dilated_pupils"),NULL, SND_ASYNC | SND_LOOP);
             break;
            }
        else if (choice3=='A')
                {
                 PlaySound(TEXT("C:\\Users\\Siri\\Downloads\\mixkit-sad-game-over-trombone-471"),NULL, SND_ASYNC);
                 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(10));
                 printf("\n\nIce may further damage the skin. Oh Nooo! TRY AGAIN!");
                 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
                 printf("\n\n\n\t\t\t\t\t\t\t\t\t (Press  Enter)");
                 getch();
                 PlaySound(TEXT("C:\\Users\\Siri\\Downloads\\dilated_pupils"),NULL, SND_ASYNC | SND_LOOP);
                 goto score;
                }
        else if (choice3=='C')
		        {
		         PlaySound(TEXT("C:\\Users\\Siri\\Downloads\\mixkit-sad-game-over-trombone-471"),NULL, SND_ASYNC);
                 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(10));
                 printf("\n\nOil will cause further damage and pain since it retains heats. Oh Nooo! TRY AGAIN!");
                 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
                 printf("\n\n\n\t\t\t\t\t\t\t\t\t (Press  Enter)");
                 getch();
                 PlaySound(TEXT("C:\\Users\\Siri\\Downloads\\dilated_pupils"),NULL, SND_ASYNC | SND_LOOP);
                 goto score;
                 break;
            }
        else if (choice3=='M')
                {
                 goto mainhome;
                }
        else if (choice3=='Q')
                {
                 system("cls");
                 PlaySound(NULL,0,0);
                 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(12));
                 printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tQuitting program.........");
                 Sleep(5000);
                 system("cls");
                 exit(0);
                }
         else
		       {
                PlaySound(TEXT("C:\\Users\\Siri\\Downloads\\mixkit-sad-game-over-trombone-471"),NULL, SND_ASYNC);
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(12));
                printf("\n\nERROR: Invalid Input! TRY AGAIN!");
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
                printf("\n\n\n\t\t\t\t\t\t\t\t\t (Press  Enter)");
		        getch();
		        PlaySound(TEXT("C:\\Users\\Siri\\Downloads\\dilated_pupils"),NULL, SND_ASYNC | SND_LOOP);
		        goto score;
		        break;
                }

		case 2:
		system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
		printf("\n====================================================================================================================================================================================================");
		printf("\n-------------------------------------------------------------------------------------  ");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(10));
        printf("LEVEL 2");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
        printf("  ----------------------------------------------------------------------------------------------------");
		printf("\n====================================================================================================================================================================================================");
		Sleep(2000);
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(10));
        printf("\n\tPress M to go to MAIN MENU");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPOINTS:");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
        printf(" %d",countp++);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(10));
        printf("\n\tPress Q to QUIT program");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
		printf("\n\n\n\t\t\t\t\t\t\t\tYou went to the mall and you saw a lady fall to the ground and started shaking,");
		printf("\n\t\t\t\t\t\t\t\t lady is probably epileptic. Help her immediately!");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
		printf("\n\n\t\t\t\t\t\t\t\t#############################################################");
		printf("\n\n\t\t\t\t\t\t\t\t[A]");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(10));
        printf(" Put a SPOON in her mouth to keep her from biting her tongue and call emergency");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
		printf("\n\n\t\t\t\t\t\t\t\t#############################################################");
        printf("\n\n\t\t\t\t\t\t\t\t[B]");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(10));
        printf(" RESTRAIN her and call emergency");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
        printf("\n\n\t\t\t\t\t\t\t\t#############################################################");
        printf("\n\n\t\t\t\t\t\t\t\t[C]");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(10));
        printf(" Place a CLOTHING under her head, after the seizure roll the lady to her side tilted back and call emergency");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
        printf("\n\n\t\t\t\t\t\t\t\t#############################################################");
        choice4=toupper(getch());
		if (choice4=='C')
			{
             PlaySound(TEXT("C:\\Users\\Siri\\Downloads\\mixkit-girls-audience-applause-510"),NULL, SND_ASYNC);
             SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(10));
             printf("\n\nWOW! Great thinking GENIUS!!!");
             printf("\n\nThis will make sure the lady keeps breathing and also allow any fluids to drain from her mouth");
             SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
             printf("\n\n\n\t\t\t\t\t\t\t\t\t (Press  Enter to go to the next level)");
             countp++;
             getch();
             PlaySound(TEXT("C:\\Users\\Siri\\Downloads\\dilated_pupils"),NULL, SND_ASYNC | SND_LOOP);
             break;}
        else if (choice4=='A')
                {
                 PlaySound(TEXT("C:\\Users\\Siri\\Downloads\\mixkit-sad-game-over-trombone-471"),NULL, SND_ASYNC);
                 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(12));
                 printf("\n\nDon't put anything in the lady's mouth, she may instead injure herself! Oh Nooo! TRY AGAIN!");
                 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
                 printf("\n\n\n\t\t\t\t\t\t\t\t\t (Press  Enter)");
                 getch();
                 PlaySound(TEXT("C:\\Users\\Siri\\Downloads\\dilated_pupils"),NULL, SND_ASYNC | SND_LOOP);
                 goto score;
                 break;}
        else if (choice4=='B')
		        {
		         PlaySound(TEXT("C:\\Users\\Siri\\Downloads\\mixkit-sad-game-over-trombone-471"),NULL, SND_ASYNC);
                 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(12));
                 printf("\n\nDon't restrain the lady. Oh Nooo! TRY AGAIN!");
                 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
                 printf("\n\n\n\t\t\t\t\t\t\t\t\t (Press  Enter)");
                 getch();
                 PlaySound(TEXT("C:\\Users\\Siri\\Downloads\\dilated_pupils"),NULL, SND_ASYNC | SND_LOOP);
                 goto score;
                 break;}
        else if (choice4=='M')
                {
                 goto mainhome;
                }
        else if (choice4=='Q')
                {
                 system("cls");
                 PlaySound(NULL,0,0);
                 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(12));
                 printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tQuitting program.........");
                 Sleep(5000);
                 system("cls");
                 exit(0);
                }
        else
		       {
                PlaySound(TEXT("C:\\Users\\Siri\\Downloads\\mixkit-sad-game-over-trombone-471"),NULL, SND_ASYNC);
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(12));
                printf("\n\nERROR: Invalid Input! TRY AGAIN!");
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
                printf("\n\n\n\t\t\t\t\t\t\t\t\t (Press  Enter)");
		        getch();
		        PlaySound(TEXT("C:\\Users\\Siri\\Downloads\\dilated_pupils"),NULL, SND_ASYNC | SND_LOOP);
		        goto score;
		        break;}

		case 3:
		system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
		printf("\n====================================================================================================================================================================================================");
		printf("\n-------------------------------------------------------------------------------------  ");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(10));
        printf("LEVEL 3");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
        printf("  ----------------------------------------------------------------------------------------------------");
		printf("\n====================================================================================================================================================================================================");
		Sleep(2000);
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(10));
        printf("\n\tPress M to go to MAIN MENU");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPOINTS:");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
        printf(" %d",countp++);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(10));
        printf("\n\tPress Q to QUIT program");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
		printf("\n\n\n\t\t\t\t\t\t\t\tYou made a new friend John. He came over to your place and started having difficulties");
		printf("\n\t\t\t\t\t\t\t\tbreathing. You suspect he's having an asthma attack. Oh oh. Help him! ");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
		printf("\n\n\t\t\t\t\t\t\t\t#############################################################");
		printf("\n\n\t\t\t\t\t\t\t\t[A]");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(10));
        printf(" Check his bag if he has an INHALER and help him with it");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
		printf("\n\n\t\t\t\t\t\t\t\t#############################################################");
        printf("\n\n\t\t\t\t\t\t\t\t[B]");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(10));
        printf(" Start chest COMPRESSIONS");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
        printf("\n\n\t\t\t\t\t\t\t\t#############################################################");
        printf("\n\n\t\t\t\t\t\t\t\t[C]");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(10));
        printf(" Do mouth to mouth RESUSCITATION");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
        printf("\n\n\t\t\t\t\t\t\t\t#############################################################");
        choice5=toupper(getch());
		if (choice5=='A')
			{
             PlaySound(TEXT("C:\\Users\\Siri\\Downloads\\mixkit-girls-audience-applause-510"),NULL, SND_ASYNC);
             SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(10));
             printf("\n\nWOW! Great thinking GENIUS!!!");
             printf("\n\nThis will definitely help your friend breathe better");
             SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
             printf("\n\n\n\t\t\t\t\t\t\t\t\t (Press  Enter to go to the next level)");
             countp++;
             getch();
             PlaySound(TEXT("C:\\Users\\Siri\\Downloads\\dilated_pupils"),NULL, SND_ASYNC | SND_LOOP);
             break;}
		 else if (choice5=='B')
                 {
                  PlaySound(TEXT("C:\\Users\\Siri\\Downloads\\mixkit-sad-game-over-trombone-471"),NULL, SND_ASYNC);
                  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(12));
                  printf("\n\nIf John stopped breathing,chest compressions would have been necessary. Oh Nooo! TRY AGAIN!");
                  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
                  printf("\n\n\n\t\t\t\t\t\t\t\t\t (Press  Enter)");
                  getch();
                  PlaySound(TEXT("C:\\Users\\Siri\\Downloads\\dilated_pupils"),NULL, SND_ASYNC | SND_LOOP);
                  goto score;
                  break;}
        else if (choice5=='C')
		       {
		        PlaySound(TEXT("C:\\Users\\Siri\\Downloads\\mixkit-sad-game-over-trombone-471"),NULL, SND_ASYNC);
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(12));
                printf("\n\nJohn only had difficulties breathing. Mouth to mouth wont't be necessary. Oh Nooo! TRY AGAIN!");
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
                printf("\n\n\n\t\t\t\t\t\t\t\t\t (Press  Enter)");
                getch();
                PlaySound(TEXT("C:\\Users\\Siri\\Downloads\\dilated_pupils"),NULL, SND_ASYNC | SND_LOOP);
                goto score;
                break;}
        else if (choice5=='M')
                {
                 goto mainhome;
                }
        else if (choice5=='Q')
                {
                 system("cls");
                 PlaySound(NULL,0,0);
                 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(12));
                 printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tQuitting program.........");
                 Sleep(5000);
                 system("cls");
                 exit(0);
                }
        else
		       {
                PlaySound(TEXT("C:\\Users\\Siri\\Downloads\\mixkit-sad-game-over-trombone-471"),NULL, SND_ASYNC);
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(12));
                printf("\n\nERROR: Invalid Input! TRY AGAIN!");
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
                printf("\n\n\n\t\t\t\t\t\t\t\t\t (Press  Enter)");
		        getch();
		        PlaySound(TEXT("C:\\Users\\Siri\\Downloads\\dilated_pupils"),NULL, SND_ASYNC | SND_LOOP);
		        goto score;
		        break;}

		case 4:
		system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
		printf("\n====================================================================================================================================================================================================");
		printf("\n-------------------------------------------------------------------------------------  ");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(10));
        printf("LEVEL 4");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
        printf("  ----------------------------------------------------------------------------------------------------");
		printf("\n====================================================================================================================================================================================================");
		Sleep(2000);
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(10));
        printf("\n\tPress M to go to MAIN MENU");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPOINTS:");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
        printf(" %d",countp++);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(10));
        printf("\n\tPress Q to QUIT program");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
		printf("\n\n\n\t\t\t\t\t\t\t\tIts house cleaning time. While cleaning your house, you injured your self and got a really deep cut to");
		printf("\n\t\t\t\t\t\t\t\tyour hand.You are bleeding heavily. Do something to stop the bleeding.");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
		printf("\n\n\t\t\t\t\t\t\t\t#############################################################");
		printf("\n\n\t\t\t\t\t\t\t\t[A]");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(10));
        printf(" Rinse the injury with WATER and continue cleaning your house ");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
		printf("\n\n\t\t\t\t\t\t\t\t#############################################################");
        printf("\n\n\t\t\t\t\t\t\t\t[B]");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(10));
        printf(" Allow the blood to FLOW and continue cleaning ");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
        printf("\n\n\t\t\t\t\t\t\t\t#############################################################");
        printf("\n\n\t\t\t\t\t\t\t\t[C]");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(10));
        printf(" Apply PRESSURE to the wound with a cloth and go to a clinic for treatment");
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
        printf("\n\n\t\t\t\t\t\t\t\t#############################################################");
        choice6=toupper(getch());
		if (choice6=='C')
			{
			 PlaySound(TEXT("C:\\Users\\Siri\\Downloads\\mixkit-girls-audience-applause-510"),NULL, SND_ASYNC);
             SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(10));
             printf("\n\nWOW! Great thinking GENIUS!!!");
             printf("\n\nApplying pressure will help the blood clot and stop the bleeding");
             countp++;
             SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
             printf("\n\n\n\t\t\t\t\t\t\t\t\t (Press  Enter to go to the next level)");
             getch();
             PlaySound(TEXT("C:\\Users\\Siri\\Downloads\\dilated_pupils"),NULL, SND_ASYNC | SND_LOOP);
             break;}
		 else if (choice6=='A')
                 {
                  PlaySound(TEXT("C:\\Users\\Siri\\Downloads\\mixkit-sad-game-over-trombone-471"),NULL, SND_ASYNC);
                  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(12));
                  printf("\n\nThis is not a minor cut. You will bleed more if you use wash the injury. Oh Nooo! TRY AGAIN!");
                  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
                  printf("\n\n\n\t\t\t\t\t\t\t\t\t (Press  Enter)");
                  getch();
                  PlaySound(TEXT("C:\\Users\\Siri\\Downloads\\dilated_pupils"),NULL, SND_ASYNC | SND_LOOP);
                  goto score;
                  break;}
         else if (choice6=='B')
                 {
		          PlaySound(TEXT("C:\\Users\\Siri\\Downloads\\mixkit-sad-game-over-trombone-471"),NULL, SND_ASYNC);
                  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(12));
                  printf("\n\nIf you allow the bleeding, you will lose a lot of blood. Oh Nooo! TRY AGAIN!");
                  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
                  printf("\n\n\n\t\t\t\t\t\t\t\t\t (Press  Enter)");
                  getch();
                  PlaySound(TEXT("C:\\Users\\Siri\\Downloads\\dilated_pupils"),NULL, SND_ASYNC | SND_LOOP);
                  goto score;
                  break;}
        else if (choice6=='M')
                {
                 goto mainhome;
                }
        else if (choice6=='Q')
                {
                 system("cls");
                 PlaySound(NULL,0,0);
                 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(12));
                 printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tQuitting program.........");
                 Sleep(5000);
                 system("cls");
                 exit(0);
                }
         else
		         {
                  PlaySound(TEXT("C:\\Users\\Siri\\Downloads\\mixkit-sad-game-over-trombone-471"),NULL, SND_ASYNC);
                  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(12));
                  printf("\n\nERROR: Invalid Input! TRY AGAIN!");
                  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
                  printf("\n\n\n\t\t\t\t\t\t\t\t\t (Press  Enter)");
		          getch();
		          PlaySound(TEXT("C:\\Users\\Siri\\Downloads\\dilated_pupils"),NULL, SND_ASYNC | SND_LOOP);
		          goto score;
		          break;}

		case 5:
		system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
		printf("\n====================================================================================================================================================================================================");
		printf("\n-------------------------------------------------------------------------------------  ");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(10));
        printf("LEVEL 5");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
        printf("  ----------------------------------------------------------------------------------------------------");
		printf("\n====================================================================================================================================================================================================");
		Sleep(2000);
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(10));
        printf("\n\tPress M to go to MAIN MENU");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPOINTS:");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
        printf(" %d",countp++);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(10));
        printf("\n\tPress Q to QUIT program");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
		printf("\n\n\n\t\t\t\t\t\t\t\tYou're at a family get together and your uncle starts complaining of severe crushing pains in his chest");
		printf("\n\t\t\t\t\t\t\t\tWhose advice should you listen to?");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
		printf("\n\n\t\t\t\t\t\t\t\t#############################################################");
		printf("\n\n\t\t\t\t\t\t\t\t[A]");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(10));
        printf(" Uncle LARRY 'Oh, he'll be alright. Let him rest for half an hour. It's probably just last night's dinner'");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
		printf("\n\n\t\t\t\t\t\t\t\t#############################################################");
        printf("\n\n\t\t\t\t\t\t\t\t[B]");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(10));
        printf(" Cousin TIM 'Sit him down and call an ambulance right away'");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
        printf("\n\n\t\t\t\t\t\t\t\t#############################################################");
        printf("\n\n\t\t\t\t\t\t\t\t[C]");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(10));
        printf(" NAN 'Just help him upstairs to lie down'");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
        printf("\n\n\t\t\t\t\t\t\t\t#############################################################");
        choice7=toupper(getch());
		if (choice7=='B')
			{
			 PlaySound(TEXT("C:\\Users\\Siri\\Downloads\\mixkit-girls-audience-applause-510"),NULL, SND_ASYNC);
             SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(10));
             printf("\n\nWOW! Great thinking GENIUS!!!");
             printf("\n\nSit him down to ease the strain on his heart.");
             SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
             printf("\n\n\n\t\t\t\t\t\t\t\t\t (Press  Enter to go to the next level)");
             countp++;
             getch();
             PlaySound(TEXT("C:\\Users\\Siri\\Downloads\\dilated_pupils"),NULL, SND_ASYNC | SND_LOOP);
             break;}
        else if (choice7=='A')
                {
                 PlaySound(TEXT("C:\\Users\\Siri\\Downloads\\mixkit-sad-game-over-trombone-471"),NULL, SND_ASYNC);
                 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(12));
                 printf("\n\nLet Always call an ambulance if you think someone is having a heart attack. Oh Nooo! TRY AGAIN!");
                 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
                 printf("\n\n\n\t\t\t\t\t\t\t\t\t (Press  Enter)");
                 getch();
                 PlaySound(TEXT("C:\\Users\\Siri\\Downloads\\dilated_pupils"),NULL, SND_ASYNC | SND_LOOP);
                 goto score;
                 break;}
        else if (choice7=='C')
		       {
		        PlaySound(TEXT("C:\\Users\\Siri\\Downloads\\mixkit-sad-game-over-trombone-471"),NULL, SND_ASYNC);
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(12));
                printf("\n\nCall an ambulance immediately. Oh Nooo! TRY AGAIN!");
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
                printf("\n\n\n\t\t\t\t\t\t\t\t\t (Press  Enter)");
                getch();
                PlaySound(TEXT("C:\\Users\\Siri\\Downloads\\dilated_pupils"),NULL, SND_ASYNC | SND_LOOP);
                goto score;
                break;}
        else if (choice7=='M')
                {
                 goto mainhome;
                }
        else if (choice7=='Q')
                {
                 system("cls");
                 PlaySound(NULL,0,0);
                 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(12));
                 printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tQuitting program.........");
                 Sleep(5000);
                 system("cls");
                 exit(0);
                }
        else
		       {
                PlaySound(TEXT("C:\\Users\\Siri\\Downloads\\mixkit-sad-game-over-trombone-471"),NULL, SND_ASYNC);
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(12));
                printf("\n\nERROR: Invalid Input! TRY AGAIN!");
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
                printf("\n\n\n\t\t\t\t\t\t\t\t\t (Press  Enter)");
		        getch();
		        PlaySound(TEXT("C:\\Users\\Siri\\Downloads\\dilated_pupils"),NULL, SND_ASYNC | SND_LOOP);
		        goto score;
		        break;}
		}
      }
    }

    else if (choice=='V')
	{
    system("cls");
    FILE *f;
    f=fopen("score.txt","r");
    fscanf(f,"%s%f",&user_name,&score);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(10));
    printf("\n\t\t\t\t\t\t\t\t\t   .................................");
    printf("\n\t\t\t\t\t\t\t\t\t\t         SCORE");
    printf("\n\t\t\t\t\t\t\t\t\t   .................................");
    if (score<50)
    {
        printf("\n\n\t\t\t\t\t\t\t\t\t\t  %s has %0.2f points\n\n\n\n",user_name,score);
        printf("\n\n\t\t\t\t\t\t\t\t\t      Press M to go to MAIN MENU");
    }
    else
    {
        printf("\n\n\t\t\t\t\t\t\t\t\t  %s has the highest score of %0.2f points\n\n\n\n",user_name,score);
        printf("\n\n\t\t\t\t\t\t\t\t\t      Press M to go to MAIN MENU");
    }
    fclose(f);
    getch();
    goto mainhome;
	}

	else if (choice=='R')
	{
    system("cls");
    FILE *f;
    f=fopen("score.txt","r+");
    fscanf(f,"%s%f",&user_name,&score);
    score=0;
    printf(f,"%s %.2f points",user_name,score);
    fclose(f);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(9));
    printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tResetting score.........");
    Sleep(5000);
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\tCOMPLETED");
    Sleep(2000);
    goto mainhome;
    }

    else if (choice=='H')
	{
    help:
    system("cls");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(10));
    printf("\n\t\t\t\t\t\t\t\t\t   .................................");
    printf("\n\t\t\t\t\t\t\t\t\t\t         HELP");
    printf("\n\t\t\t\t\t\t\t\t\t   .................................");
    printf("\n\t\t\t\t\t\t\t\t >> In the game, you will be given a total of 5 questions to test your");
    printf("\n\t\t\t\t\t\t\t\t    general knowledge on First Aid.");
    printf("\n\t\t\t\t\t\t\t\t >> Each right move for all 5 levels will be awarded with points.");
    printf("\n\t\t\t\t\t\t\t\t    By this way you can earn a TROPHY!!!!!..........");
    printf("\n\t\t\t\t\t\t\t\t >> But if you do not complete all 5 levels, you will earn a FIRST AIDER BADGE!!!!!");
    printf("\n\t\t\t\t\t\t\t\t >> To make your next move, you will be given 3 options");
    printf("\n\t\t\t\t\t\t\t\t    and each option has letter A, B, C, next to it.");
    printf("\n\t\t\t\t\t\t\t\t >> Enter the letter of your choice to carry out your next action");
    printf("\n\t\t\t\t\t\t\t\t >> You will be given questions continuously, if you keep making the right move");
    printf("\n\t\t\t\t\t\t\t\t >> No negative marking for wrong moves!");
    printf("\n\n*************************************************************************************BEST OF LUCK PAL**********************************************************************************************");
	puts("\n\n\n\t\t\t\t\t\t\t\t\t\tPress M to go to MAIN MENU");
	if (toupper(getch())=='M')
		goto mainhome;
	}
	else if (choice=='Q')
	{
	    system("cls");
	    PlaySound(NULL,0,0);
	    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(12));
        printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tQuitting program.........");
        Sleep(5000);
        system("cls");
        exit(0);
	}

	score:
    system("cls");
	score = (float)countp*10;
	if(score>40 && score<99)
	{
	   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(10));
	   printf("\n\n************************************************************************************* CONGRATULATIONS **********************************************************************************************");
       printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\t    Your score is %0.2f",score);
       printf("\n\n\t\t\t\t\t\t\t\t\t    You earned a FIRST AIDER BADGE!!!");
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(1));
       printf("\n\n\n\t\t\t\t\t\t\t\t\t\t      __________________");
        printf("\n\t\t\t\t\t\t\t\t\t\t     |        ###       |");
        printf("\n\t\t\t\t\t\t\t\t\t\t     |        ###       |");
        printf("\n\t\t\t\t\t\t\t\t\t\t     |     #########    |");
        printf("\n\t\t\t\t\t\t\t\t\t\t     |        ###       |");
        printf("\n\t\t\t\t\t\t\t\t\t\t     |        ###       |");
        printf("\n\t\t\t\t\t\t\t\t\t\t     |  :+:||.-o-.||:+: |");
        printf("\n\t\t\t\t\t\t\t\t\t\t     |  |  |/.-o-.\|   | |");
        printf("\n\t\t\t\t\t\t\t\t\t\t     |------------------|");
        printf("\n\t\t\t\t\t\t\t\t\t\t     | |### ###|");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
        printf(" FIRST");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(1));
        printf("  |");
        printf("\n\t\t\t\t\t\t\t\t\t\t     | |   +   |");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(15));
        printf(" AIDER");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(1));
        printf("  |");
        printf("\n\t\t\t\t\t\t\t\t\t\t     | |  ###  |  )_(   |");
        printf("\n\t\t\t\t\t\t\t\t\t\t     :-+-------|------+-:");
        printf("\n\t\t\t\t\t\t\t\t\t\t      :: ++ ::.|.:: ++ : ");
        printf("\n\t\t\t\t\t\t\t\t\t\t       \\__( )_(|)_( )__/");
        printf("\n\t\t\t\t\t\t\t\t\t\t         '. +|:+:|+ .'");
        printf("\n\t\t\t\t\t\t\t\t\t\t           '._(|)_.'");
        printf("\n\t\t\t\t\t\t\t\t\t\t             '+|+'");
        printf("\n\t\t\t\t\t\t\t\t\t\t               +");
       goto go;
    }

	 else if(score==100)
	{
	    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(10));
	    printf("\n\n************************************************************************************* CONGRATULATIONS **********************************************************************************************");
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\t    Your score is %0.2f",score);
        printf("\n\n\t\t\t\t\t\t\t\t\t\t  You earned a TROPHY!!!!!");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(14));
        printf("\n\n\n\t\t\t\t\t\t\t\t\t\t      ___________");
        printf("\n\t\t\t\t\t\t\t\t\t\t     '._==_==_=_.'");
        printf("\n\t\t\t\t\t\t\t\t\t\t     .-\:       /-.");
        printf("\n\t\t\t\t\t\t\t\t\t\t     | (|:.    |) |");
        printf("\n\t\t\t\t\t\t\t\t\t\t     '-|:.     |-'");
        printf("\n\t\t\t\t\t\t\t\t\t\t        \::.    /");
        printf("\n\t\t\t\t\t\t\t\t\t\t         '::. .'");
        printf("\n\t\t\t\t\t\t\t\t\t\t           ) (");
        printf("\n\t\t\t\t\t\t\t\t\t\t         _.' '._");
        printf("\n\t\t\t\t\t\t\t\t\t\t         ######### ");
        goto go;
	}
	 else
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(12));
        printf("\n\n************************************************************************************* SORRY YOU DIDN'T GET ANY PRIZE ********************************************************************************");
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t    Your score is %0.2f",score);
        printf("\n\n\t\t\t\t\t\t\t\t\t\t      Thanks for your participation");
	    printf("\n\n\t\t\t\t\t\t\t\t\t\t               TRY AGAIN!");
	    goto go;
    }

	go:
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(10));
	puts("\n\n Press Y if you want to play again");
	puts("\n\n Press Q to quit the game");
	puts("\n\n Press M to go to main menu");
	choice8=toupper(getch());
	if (choice8=='Y')
		{
		    goto game;
		}
    else if (choice8=='Q')
            {
                system("cls");
                PlaySound(NULL,0,0);
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),TEXT(12));
                printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tQuitting program.........");
                Sleep(5000);
                system("cls");
                exit(0);
            }
    else if (choice8='M')
            {
                goto mainhome;
            }

    return 0;
}
