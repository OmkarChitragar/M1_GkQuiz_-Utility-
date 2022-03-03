#include "GkQuiz.h"
int Calculatescore()
{   
    if (Userscore >= 90&&Userscore <= 100)
    {  
	printf("\n\nCongrats %s, you have a very good general knowledge!\n",Username);
	printf("Your score is %d points.\n",Userscore);
	printf("You answered %d questions correctly.\n",Countscore);
    printf("\n**************************** The End ******************************\n"); 
    printf("press (R) to RESTART the quiz\n");   
    }
    else if(Userscore >= 50&&Userscore < 90)
    {
	printf("\n\nCongrats %s, you have a good general knowledge!\n",Username);
	printf("Your score is %d points.\n",Userscore);
	printf("You answered %d questions correctly.\n",Countscore);
    printf("\n**************************** The End ******************************\n");
    printf("press (R) to RESTART the quiz\n"); 
    }
    else if(Userscore >= 30&&Userscore < 50)
    {
	printf("\n\nCongrats %s, you have an average general knowledge!\n",Username);
	printf("Your score is %d points.\n",Userscore);
	printf("You answered %d questions correctly.\n",Countscore);
    printf("\n**************************** The End ******************************\n");
    printf("press (R) to RESTART the quiz\n"); 
    }
    else if(Userscore >= 10&&Userscore < 30)
    {
	printf("\n\nSorry %s, you have a poor general knowledge!\n",Username);
	printf("Your score is %d points.\n",Userscore);
	printf("You answered %d questions correctly.\n",Countscore);
	printf("\n********************** Better luck next time **********************\n");
    printf("press (R) to RESTART the quiz\n"); 
    }
    else if(Userscore >= 0&&Userscore < 10)
    {  
	printf("\n\nOopsy %s, you failed the general knowledge test!\n",Username);
	printf("Your score is %d points.\n",Userscore);
	printf("You answered %d questions correctly.\n",Countscore);
	printf("\n********************** Better luck next time ***********************\n");
    printf("press (R) to RESTART the quiz\n");
    }
 return 0;   
}
char result(char Chooseoption,char Correctoption)
{
    char Nextquestion;
    if (tolower(Chooseoption)==Correctoption)
    {
	Countscore++;
	Userscore=Userscore+10;
	printf("Yay! your answer is Correct :)\n");
	printf("Press (Y) for next question ");
	printf("or Press (N) to END the quiz\n");
	fflush(stdin);
	scanf("%c",&Nextquestion);
	return(Nextquestion);
    }
    else
    {
	printf("Sorry! your answer is wrong :(\n");
	printf("Press (Y) for next question ");
	printf("or Press (N) to END the quiz\n");
	fflush(stdin);
	scanf("%c",&Nextquestion);
	return(Nextquestion);
    }
    return 0;
}
int question()
{   
    char Chooseoption,Correctoption;
    printf("1.Which is the 3rd highest mountain in the world ?\n");
    printf("\tA. Mt. K2    \tB. Mt. Kanchanjungha\n");
    printf("\tC. Mt. Makalu\tD. Mt. Kilimanjaro\n");
    printf("Choose your option:");
    fflush(stdin);
    scanf("%c",&Chooseoption);
    Correctoption='b';
    Correctoption=result(Chooseoption,Correctoption);
    if (Correctoption=='n'||Correctoption=='N')
    {
	return 0;  
    }
    printf("2.What is the group of frogs known as ?\n");
    printf("\tA. A traffic \tB. A toddler\n");
    printf("\tC. A police  \tD. An Army\n");
    printf("Choose your option:");
    fflush(stdin);
    scanf("%c",&Chooseoption);
    Correctoption='d';
    Correctoption=result(Chooseoption,Correctoption);
    if (Correctoption=='n'||Correctoption=='N')
    {
	return 0;     
    }
	printf("3.What is the national game of England ?\n");
	printf("\tA. Football \tB. Basketball\n");
    printf("\tC. Cricket  \tD. Baseball\n");
    printf("Choose your option:");
    fflush(stdin);
    scanf("%c",&Chooseoption);
    Correctoption='c';
    Correctoption=result(Chooseoption,Correctoption);
    if (Correctoption=='n'||Correctoption=='N')
    {
	return 0;     
    }
   	printf("4.Study of earthquake is called as ?\n");
	printf("\tA. Seismology\tB. Cosmology\n");
    printf("\tC. Orology   \tD. Etimology\n");
    printf("Choose your option:");
    fflush(stdin);
    scanf("%c",&Chooseoption);
    Correctoption='a';
    Correctoption=result(Chooseoption,Correctoption);
    if (Correctoption=='n'||Correctoption=='N')
    {
	return 0;     
    }
    printf("5.The laws of electromagnetic induction were given by ?\n");
    printf("\tA. Faraday  \tB. Tesla\n");
    printf("\tC. Maxwell  \tD. Coulomb\n");
    printf("Choose your option:");
    fflush(stdin);
    scanf("%c",&Chooseoption);
    Correctoption='a';
    Correctoption=result(Chooseoption,Correctoption);
    if (Correctoption=='n'||Correctoption=='N')
    {
	return 0;     
    }
    printf("6.Which is the longest river in the world ?\n");
	printf("\tA. Nile    \tB. Koshi\n ");
    printf("\tC. Ganga   \tD. Amazon\n");
    printf("Choose your option:");
    fflush(stdin);
    scanf("%c",&Chooseoption);
    Correctoption='a';
    Correctoption=result(Chooseoption,Correctoption);
    if (Correctoption=='n'||Correctoption=='N')
    {
	return 0;     
    }
    printf("7.Name the country where there no mosquitoes are found ?\n");
	printf("\tA. Japan     \tB. Italy\n ");
    printf("\tC. Argentina \tD. France\n");
    printf("Choose your option:");
    fflush(stdin);
    scanf("%c",&Chooseoption);
    Correctoption='d';
    Correctoption=result(Chooseoption,Correctoption);
    if (Correctoption=='n'||Correctoption=='N')
    {
	return 0;     
    }
    printf("8.Which country is famous for samba dance ?\n");
	printf("\tA. Brazil    \tB. Venezuela\n");
    printf("\tC. Nigeria   \tD. Bolivia\n");
    printf("Choose your option:");
    fflush(stdin);
    scanf("%c",&Chooseoption);
    Correctoption='b';
    Correctoption=result(Chooseoption,Correctoption);
    if (Correctoption=='n'||Correctoption=='N')
    {
	return 0;     
    }
	printf("9.Ozone plate is being destroyed regularly because of ?\n");
	printf("\tA. LPG       \tB. Nitrogen\n");
    printf("\tC. Methane   \tD. CFC:\n");
    printf("Choose your option:");
    fflush(stdin);
    scanf("%c",&Chooseoption);
    Correctoption='d';
    Correctoption=result(Chooseoption,Correctoption);
    if (Correctoption=='n'||Correctoption=='N')
    {
	return 0;     
    }
    printf("10.Wind speed is measure by______ ?\n");
	printf("\tA. Lysimeter  \tB. Air vane\n");
    printf("\tC. Hydrometer \tD. Anemometer\n");
    printf("Choose your option:");
    fflush(stdin);
    scanf("%c",&Chooseoption);
    Correctoption='d';
    Correctoption=result(Chooseoption,Correctoption);
    if (Correctoption=='n'||Correctoption=='N')
    {
	return 0;
    }
    Calculatescore();
    return 0;
}
int menu()
{
    char Yes;
    char Restart;
    printf("\nHello! %s\n",Username);
    printf("------------  Welcome to General Knowledge Test Quiz  -----------\n");
    printf("-----------------------------------------------------------------\n");
    printf("Here are the rules you must know before taking up this quiz:\n");
    printf(">> This quiz has a total of 10 questions.\n");
    printf(">> Each question has four options to choose the right answer.\n");
    printf(">> Every question carrys 10 points.\n");
    printf(">> Your general knowledge is tested based upon the points earned.\n");
    printf("-----------------------------------------------------------------\n");
    printf("Press (Y) to START the quiz >>>>\n");
    printf("-----------------------------------------------------------------\n");
    fflush(stdin);
    scanf("%c",&Yes);
    if(Yes=='y'||Yes=='Y')
    {
	question();
	Calculatescore();
    }
    fflush(stdin);
    scanf("%c",&Restart);
    if(Restart=='r'||Restart=='R')
    {
    Userscore=0,Countscore=0;
    menu();
    }
    return 0;  
  }