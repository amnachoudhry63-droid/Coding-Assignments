#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

void star(int s)
{
	for(int i=0;i<=s;i++)
	{
		printf("*");
	}
}

void gotoxy(short int x, short int y)
{
	COORD arrow={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),arrow);
}
int main ()
{
	char choice;
	float ssc, hsc;
	float apt[10];
	int count=0;
	const char *uni[10]={"NED University of Engineering & Technologyy", "FAST-NUCES", "Dawood University of Engineering & Technology", "Sir Syed University of Engineering & Technology (SSUET)", "Indus University", "PAF-KIET (Karachi Institute of Economics & Technology)", "Bahria University", "Hamdard University Faculty of Engineering Sciences & Technology (HIET)", "Iqra University", "Institute of Business Administration (CS, Data Science & tech programs)"};
	while(1)
	{
	Sleep(700);
	fflush(stdout);
	printf("\n\t");
	star(120);
	printf("\n\n");
	gotoxy(50,2); printf("| THE ULTIMATE ELIGIBILITY CALCULATOR |");
	printf("\n\t");
	star(120);
	
	Sleep(300);
	fflush(stdout);
	printf("\n\n");
	gotoxy(60,7); printf("WELCOME USER!");
	printf("\n");
	gotoxy(59,8); printf("______________");
	Sleep(300);
	fflush(stdout);
	printf("\n\n\n\n");
	gotoxy(3,12); printf("THIS IS A PROGRAM THAT WILL TELL YOU WHETHER YOU ARE ELIGIBLE FOR ANY OF THE TOP TEN ENGINEERING AND TECH UNIVERSITIES IN KARACHI.");
	gotoxy(3,14); star(128);
	
	Sleep(300);
	fflush(stdout);
	printf("\n\n");
	gotoxy(45,18); printf("PRESS 'P' OR 'p' TO PROCEED WITH THE PROGRAM.\n\n");
	Sleep(300);
	fflush(stdout);
	gotoxy(68,20); printf("OR");
	Sleep(300);
	fflush(stdout);
	printf("\n\n");
	gotoxy(35,22); printf("PRESS 'V' OR 'v' TO VIEW ELIGIBILITY CRITERIA FOR EACH UNIVERSITY. ");
	gotoxy(68,24); printf("OR");
	Sleep(300);
	fflush(stdout);
	printf("\n\n");
	gotoxy(50,26); printf("PRESS 'E' OR 'e' TO EXIT THE PROGRAM. "); 
	scanf("%c",&choice);
	
	if(choice=='P' || choice=='p')
	{
		Sleep(500);
		fflush(stdout);
		system("cls");
		printf("\n\t");
			star(120);
			Sleep(500);
			fflush(stdout);
		gotoxy(55,2); printf("PROVIDE THE FOLLOWING DATA");
		printf("\n\t");
			star(120);
			Sleep(500);
			fflush(stdout);
		printf("\n\n");
		Sleep(500);
		fflush(stdout);
		gotoxy(50,10); printf("Enter your SSC/Matriculation score: ");
		scanf("%f",&ssc);
		Sleep(500);
		fflush(stdout);
		printf("\n");
		gotoxy(50,15); printf("Enter your HSC/Intermediate score: ");
		scanf("%f",&hsc);
		Sleep(500);
		fflush(stdout);
		system("cls");
		printf("\n\t");
			star(120);
			gotoxy(10,2); printf("SSC: %.2f",ssc);
			gotoxy(117,2); printf("HSC: %.2f\n",hsc);
			printf("\t");
			star(120);
			printf("\n\n");
			gotoxy(40,4); printf("ENTER YOUR APTITUDE TEST MARKS FOR THE FOLLOWING UNIVERSITIES:");
			printf("\n\n");
			gotoxy(35,6); printf("(If you haven't taken the test for any of the university below, type 0)\n");
			printf("\n\n");
			for(int i=0; i<10; i++)
			{
				printf("%d. %s: ",i+1,uni[i]);
				scanf("%f",&apt[i]);
				printf("\n\n");
			}
			system("cls");
			printf("\n\n");
			gotoxy(45,2); printf("YOU ARE ELIGIBLE FOR THE FOLLOWING UNIVERSITIES:");
			printf("\n\t\t\t\t\t    ");
			star(50);
			printf("\n\n\n");
			for(int k=0; k<10; k++)
			{
				switch(k)
				{
				case 0: 
				if(hsc!=0 && apt[k]!=0 && (hsc*0.4+apt[k]*0.6)>=50)
				{
					Sleep(500);
					printf(". %s",uni[k]);
					count++;
					break;
				}
				case 1: 
				if(hsc!=0 && apt[k]!=0 && (hsc*0.5+apt[k]*0.5)>=60)
				{
					Sleep(500);
					printf("\n\n. %s",uni[k]);
					count++;
					break;
				}
				case 2: 
				if(ssc!=0 && hsc!=0 && apt[k]!=0 && (ssc*0.1+hsc*0.3+apt[k]*0.6)>=50)
				{
					Sleep(500);
					printf("\n\n. %s",uni[k]);
					count++;
					break;
				}
				case 3: 
				if(hsc>=60 && apt[k]>=50)
				{
					Sleep(500);
					printf("\n\n. %s",uni[k]);
					count++;
					break;
				}
				case 4: 
				if(hsc>=50 && apt[k]>=60)
				{
					Sleep(500);
					printf("\n\n. %s",uni[k]);
					count++;
					break;
				}
				case 5: 
				if(hsc>=60 && apt[k]>=40)
				{
					Sleep(500);
					printf("\n\n. %s",uni[k]);
					count++;
					break;
				}
				case 6: 
				if(hsc!=0 && apt[k]!=0 && (hsc*0.5+apt[k]*0.5)>=50)
				{
					Sleep(500);
					printf("\n\n. %s",uni[k]);
					count++;
					break;
				}
				case 7: 
				if(hsc>=60 && apt[k]>=50)
				{
					Sleep(500);
					printf("\n\n. %s",uni[k]);
					count++;
					break;
				}
				case 8: 
				if(hsc!=0 && apt[k]!=0 && (hsc*0.67+apt[k]*0.33)>=60)
				{
					Sleep(500);
					printf("\n\n. %s",uni[k]);
					count++;
					break;
				}
				case 9: 
				if(hsc>=60 && apt[k]>=60)
				{
					Sleep(500);
					printf("\n\n. %s",uni[k]);
					count++;
					break;
				}
				
				}
	
			}
			if(count==0)
				{
					Sleep(500);
					printf("\n\n. Sorry! You Are Not Eligible For Any University In This List.");
				}
				getchar(); getchar();
				system("cls");
				printf("\n\n");
		gotoxy(53,15); printf("THANK YOU FOR USING THIS PROGRAM.");
    	Sleep(700);
				break;
			
		}
		else if(choice=='V' || choice=='v')
	{
		system("cls");
		Sleep(700);
		fflush(stdout);
    printf("\n\t");
    star(120);
    printf("\n");
    gotoxy(40,2); printf("ELIGIBILITY CRITERIA FOR EACH UNIVERSITY");
    printf("\n\t");
    star(120);
    printf("\n\n");
    
	Sleep(300);
	fflush(stdout);
    printf("1. NED University of Engineering & Technology\n\n");
    printf("   - 40%% HSC + 60%% Entry Test Aggregate\n");
    printf("   - Minimum overall 50%% required\n\n");

    Sleep(300);
    fflush(stdout);
	printf("2. FAST-NUCES\n\n");
    printf("   - 50%% HSC + 50%% Entry Test\n");
    printf("   - Minimum overall 60%% required\n\n");

    Sleep(300);
    fflush(stdout);
	printf("3. Dawood University of Engineering & Technology\n\n");
    printf("   - 10%% SSC + 30%% HSC + 60%% Entry Test\n");
    printf("   - Minimum 50%% aggregate required\n\n");

    Sleep(300);
    fflush(stdout);
	printf("4. Sir Syed University of Engineering & Technology (SSUET)\n\n");
    printf("   - Minimum 60%% in HSC\n");
    printf("   - Minimum 50%% in Entry Test\n\n");

    Sleep(300);
    fflush(stdout);
	printf("5. Indus University\n\n");
    printf("   - Minimum 50%% in HSC\n");
    printf("   - Minimum 60%% in Entry Test\n\n");

    Sleep(300);
    fflush(stdout);
	printf("6. PAF-KIET (Karachi Institute of Economics & Technology)\n\n");
    printf("   - Minimum 60%% in HSC\n");
    printf("   - Minimum 40%% in Entry Test\n\n");

    Sleep(300);
    fflush(stdout);
	printf("7. Bahria University\n\n");
    printf("   - 50%% HSC + 50%% Entry Test\n");
    printf("   - Minimum overall 50%% required\n\n");

    Sleep(300);
    fflush(stdout);
	printf("8. Hamdard University (HIET)\n\n");
    printf("   - Minimum 60%% in HSC\n");
    printf("   - Minimum 50%% in Entry Test\n\n");

    Sleep(300);
    fflush(stdout);
	printf("9. Iqra University\n\n");
    printf("   - 67%% HSC + 33%% Entry Test\n");
    printf("   - Minimum 60%% aggregate required\n\n");

    Sleep(300);
    fflush(stdout);
	printf("10. Institute of Business Administration (IBA)\n\n");
    printf("    - Minimum 60%% in HSC\n");
    printf("    - Minimum 60%% in Entry Test\n\n");

    Sleep(700);
    fflush(stdout);
	printf("\n\n");
    gotoxy(50,30); printf("Press Enter key to return to main menu..."); 
    getchar(); getchar();
    system("cls");
}
    else if(choice=='E' || choice=='e')
    {
    	Sleep(700);
    	fflush(stdout);
		system("cls");
    	printf("\n\n");
		gotoxy(53,15); printf("THANK YOU FOR USING THIS PROGRAM.");
    	break;
	}
	else
	{
		Sleep(700);
		fflush(stdout);
		system("cls");
		gotoxy(55,15); printf("ERROR! INVALID INPUT GIVEN.");
		Sleep(900);
		gotoxy(60,17); printf("PLEASE, TRY AGAIN.");
		getchar(); getchar();
		system ("cls");
	}
}
	return 0;
}
