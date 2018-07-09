#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	int marks=0,total,n,i,j;
	char c;
	do
	{
		system("cls");
	
	printf("\n\t\t\t\t\t WELCOME TO QUIZE GAME\t\t\n");
	printf("\nRules :\n");
	printf("\n1:Every candidate can have 20 questions at a time\n2:Each right question gives you 10 marks and Every wrong atempt deducte 5 marks\n3:At the end of the game if your score equal or more than 25 you will be passed\n");
	printf("\nsahajit1996@gmail.com\t\t\t\t\t\t\t\t\t\t\t\t TOTAL MARKS=100\n");
	printf("\nLets start.................................................................................................\n");
	
	while(i<=10)
	{
		

	printf("\npress 1 for question number 1\n");
		scanf("%d",&i);
		if(i==1)
		{
			printf("\nQuestion number  %d",i);
			printf("\nQ1>what is the capital of india\n");
			printf("\n1:New delhi\t\t\t\t\t\t\t\t\t\t2:Mumbai\n3:Kolkata\t\t\t\t\t\t\t\t\t\t4:Bangalore\n");
			printf("\nEnter your Answer\n");
			scanf("%d",&j);
			if(j==1)
			{
				printf("\nCongo!!!!!!!!! Right answer\n");
				marks=marks+10;
				printf("\nYour marks is %5d\n",marks);
			}
			else
			{
				printf("\nopps sory better luck next time\n");
				marks=marks-5;
				printf("\nYour marks is %5d\n",marks);
			}
		}
		printf("\npress 2 for question number 2\n");
			scanf("%d",&i);
		if(i==2)
		{
			printf("\nQuestion number  %d",i);
			printf("\nQ2> Who has won the men s singles French Open tennis tournament 2018?\n");
			printf("\n1:NovakDjokovic\t\t\t\t\t\t\t\t\t\t2:DominicThiem\n3:Roger Federer\t\t\t\t\t\t\t\t\t\t4:Rafael Nadal\n");
			printf("\nEnter your Answer\n");
			scanf("%d",&j);
			if(j==4)
			{
				printf("\nCongo!!!!!!!!! Right answer\n");
				marks=marks+10;
				printf("\nYour marks is %5d\n",marks);
			}
			else
			{
				printf("\nopps sory better luck next time\n");
				marks=marks-5;
				printf("\nYour marks is %5d\n",marks);
			}
		}
		printf("\npress 3 for question number 3\n");
			scanf("%d",&i);
		if(i==3)
		{
			printf("\nQuestion number  %d",i);
			printf("\nQ2> Which country s football team has lifted the 2018 Intercontinental Cup football title?\n");
			printf("\n1:India\t\t\t\t\t\t\t\t\t\t2:Srilanka\n3:Argentina\t\t\t\t\t\t\t\t\t\t4:Brazil\n");
			printf("\nEnter your Answer\n");
			scanf("%d",&j);
			if(j==1)
			{
				printf("\nCongo!!!!!!!!! Right answer\n");
				marks=marks+10;
				printf("\nYour marks is %5d\n",marks);
			}
			else
			{
				printf("\nOpps sory better luck next time\n");
				marks=marks-5;
				printf("\nYour marks is %5d\n",marks);
			}
		}
		printf("\npress 4 for question number 4\n");
			scanf("%d",&i);
		if(i==4)
		{
			printf("\nQuestion number  %d",i);
			printf("\nQ2> Preity Zinta made her debut in this film.\n");
			printf("\n1:Soldier\t\t\t\t\t\t\t\t\t\t2:Key kahena\n3:Dil se\t\t\t\t\t\t\t\t\t\t4:Sangharsh\n");
			printf("\nEnter your Answer\n");
			scanf("%d",&j);
			if(j==3)
			{
				printf("\nCongo!!!!!!!!! Right answer\n");
				marks=marks+10;
				printf("\nYour marks is %5d\n",marks);
			}
			else
			{
				printf("\nOpps sory better luck next time\n");
				marks=marks-5;
				printf("\nYour marks is %5d\n",marks);
			}
		}
	
		printf("\npress 5 for question number 5\n");
			scanf("%d",&i);
		if(i==5)
		{
			printf("\nQuestion number  %d",i);
			printf("\nQ2> Name Aamir Khan s character in the Oscar-nominated film 'Lagaan.'.\n");
			printf("\n1:Sajjan\t\t\t\t\t\t\t\t\t\t2:Bhuvan\n3:Lallan\t\t\t\t\t\t\t\t\t\t4:Chandan\n");
			printf("\nEnter your Answer\n");
			scanf("%d",&j);
			if(j==2)
			{
				printf("\nCongo!!!!!!!!! Right answer\n");
				marks=marks+10;
				printf("\nYour marks is %5d\n",marks);
			}
			else
			{
				printf("\nOpps sory better luck next time\n");
				marks=marks-5;
				printf("\nYour marks is %5d\n",marks);
			}
		}
		printf("\npress 6 for question number 6\n");
			scanf("%d",&i);
		if(i==6)
		{
			printf("\nQuestion number  %d",i);
			printf("\nQ2> Who played the role of Birju in the 1957 film 'Mother India'?\n");
			printf("\n1:Sunil Dutta\t\t\t\t\t\t\t\t\t\t2:Raaj Kapoor\n3:Rajendra Kumar\t\t\t\t\t\t\t\t\t\t4:Dev Anand\n");
			printf("\nEnter your Answer\n");
			scanf("%d",&j);
			if(j==1)
			{
				printf("\nCongo!!!!!!!!! Right answer\n");
				marks=marks+10;
				printf("\nYour marks is %5d\n",marks);
			}
			else
			{
				printf("\nOpps sory better luck next time\n");
				marks=marks-5;
				printf("\nYour marks is %5d\n",marks);
			}
		}
	
		
	
		
			printf("\npress 7 for question number 7\n");
			scanf("%d",&i);
		if(i==7)
		{
			printf("\nQuestion number  %d",i);
			printf("\nQ2>Which of these actors was not one of Priyanka Chopra s seven husbands in '7 Khoon Maaf'??\n");
			printf("\n1:John Abrahim\t\t\t\t\t\t\t\t\t\t2:Irfan Khan\n3:Nil Nitish Mukhesh\t\t\t\t\t\t\t\t\t\t4:Saif ali khan\n");
			printf("\nEnter your Answer\n");
			scanf("%d",&j);
			if(j==4)
			{
				printf("\nCongo!!!!!!!!! Right answer\n");
				marks=marks+10;
				printf("\nYour marks is %5d\n",marks);
			}
			else
			{
				printf("\nOpps sory better luck next time\n");
				marks=marks-5;
				printf("\nYour marks is %5d\n",marks);
			}
		}
			printf("\npress 8 for question number 8\n");
			scanf("%d",&i);
		if(i==8)
		{
			printf("\nQuestion number  %d",i);
			printf("\nQ2>What profession does Sanjay Dutt fake in 'Lage Raho Munna Bhai'??\n");
			printf("\n1:History professor\t\t\t\t\t\t\t\t\t\t2:Engineer\n3:Teacher\t\t\t\t\t\t\t\t\t\t4:Police\n");
			printf("\nEnter your Answer\n");
			scanf("%d",&j);
			if(j==1)
			{
				printf("\nCongo!!!!!!!!! Right answer\n");
				marks=marks+10;
				printf("\nYour marks is %5d\n",marks);
			}
			else
			{
				printf("\nOpps sory better luck next time\n");
				marks=marks-5;
				printf("\nYour marks is %5d\n",marks);
			}
		}
		printf("\npress 9 for question number 9\n");
			scanf("%d",&i);
			if(i==9)
		{
			printf("\nQuestion number  %d",i);
			printf("\nQ2>Which Amrish Puri film features the iconic dialogue 'Mogambo khush hua'??\n");
			printf("\n1:Nayak\t\t\t\t\t\t\t\t\t\t2:Mr.India\n3:Dhadkan\t\t\t\t\t\t\t\t\t\t4:Laggan\n");
			printf("\nEnter your Answer\n");
			scanf("%d",&j);
			if(j==2)
			{
				printf("\nCongo!!!!!!!!! Right answer\n");
				marks=marks+10;
				printf("\nYour marks is %5d\n",marks);
			}
			else
			{
				printf("\nOpps sory better luck next time\n");
				marks=marks-5;
				printf("\nYour marks is %5d\n",marks);
			}
		}
			
			printf("\npress 10 for question number 10\n");
			scanf("%d",&i);
		if(i==10)
		{
			printf("\nQuestion number  %d",i);
			printf("\nQ2>Which famous director made his acting debut in 'Dilwale Dulhania Le Jayenge'??\n");
			printf("\n1:Farhan Akhter\t\t\t\t\t\t\t\t\t\t2:Anurag Kasshap\n3:Srijit Mukherjee\t\t\t\t\t\t\t\t\t\t4:Karan Johar\n");
			printf("\nEnter your Answer\n");
			scanf("%d",&j);
			if(j==3)
			{
				printf("\nCongo!!!!!!!!! Right answer\n");
				marks=marks+10;
				printf("\nYour marks is %5d\n",marks);
			}
			else
			{
				printf("\nOpps sory better luck next time\n");
				marks=marks-5;
				printf("\nYour marks is %5d\n",marks);
			}
		}
		printf("\nYou just have Finshed your game\n");
		break;
	}
	if(marks>=25)
	{
		printf("\n\t\t\t\t\t\t Congo you have passed\nyour marks is %5d",marks);
	}
	else
	{
		printf("\n\t\t\t Sory you have Failed \nyour marks is %d and you have to bring more %d marks to pass",marks,25-marks);
	}
		printf("\ndo you want to play again.....!!!!!\nif yes press 'y'or 'Y'");
		c=getche();
		
}while(c=='y'||c=='Y');
	

}
