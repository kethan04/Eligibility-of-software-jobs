#include<stdio.h>
#include<string.h>
#define p printf
#define s scanf
void age(int x);
void SSC(float g);
void CBSE(float g1);
void SSC1(float g);
void CBSE1(float g1);
void SSC2(float g);
void CBSE2(float g1);
void SSC3(float g);
void CBSE3(float g1);
struct student
{
	int age;
	char name[20],mail[20],fnam[20],gen[5],phnno[10];
};
main()
{
	int n,n1,n2,n3,n4,n5,n6,n7,x,i;
	float g,I,b,g1;
	char a[20],h[15];
	struct student s1;
	x1:p("Enter Candidate details:\n");
	p("Name: ");
	s("%s",s1.name);
	p("Father/guardiune:");
	s("%s",s1.fnam);
	p("Phone No:");
	s("%s",s1.phnno);
	p("E-mail Id:");
	s("%s",s1.mail);
	p("Gender:");
	s("%s",s1.gen);
	p("Age: ");
	s("%d",&s1.age);
	p("*****************************************************************************************************************\n");
	p("\tName\t\tFather/Guardiune\tPhone No\t\tE-Mail\t\t\tGender\tAge\n");
	p("*****************************************************************************************************************\n");
	p("\t%s\t%s\t\t\t%s\t\t%s\t%s\t%d",s1.name,s1.fnam,s1.phnno,s1.mail,s1.gen,s1.age);
	p("\n***************************************************************************************************************\n");
	p("Choose your choice....\n");
	p("1.Graduation\n");
	p("2.Post Graduation\n");
	p("****************************************************\n");
	s("%d",&n);
	switch(n)
	{
	case 1:	p("Select your Graduation\n");
			p("1.B.Tech\n");
			p("2.Degree\n");
			p("****************************************************\n");
			s("%d",&n1);
			switch(n1)
			{
			  case 1:
			  	p("Choose your course\n");
			  	p("1.Computer Science Engineering(CSE)\n");
			  	p("2.Electronics & Communication(ECE)\n");
			  	p("3.Mechanical Engineering\n");
			  	p("4.Civil Engineering\n");
			  	p("5.Electrical and Electronics Engineering(EEE)\n");
			  	p("****************************************************\n");
			  	s("%d",&n3);
			  	switch(n3)
			  	{
			  	case 1:
			  		p("You have selected CSE \n");
			  		p("Select your option\n");
			  		p("1.SSC\n");
			  		p("2.CBSE\n");
			  		p("****************************************************\n");
			  		s("%d",&n5);
			  		switch(n5)
			  		{
			  			case 1:
			  				p("Enter Your SSC Hall-Ticket No:\n");
			  				s("%s",h);
			  				p("Enter your marks GPA \n");
			  				s("%f",&g);
			  				p("****************************************************\n");
			  				SSC(g);
			  				break;
			  			case 2:
			  				p("Enter Your CBSE Hall-Ticket No:\n");
			  				s("%s",h);
			  				p("Enter your Marks percentage\n");
			  				s("%f",&g1);
			  				p("****************************************************\n");
			  				CBSE(g1);
			  				break;
					}
					break;
				case 2:
					p("You have selected ECE\n");
					p("Select your option\n");
			  		p("1.SSC\n");
			  		p("2.CBSE\n");
			  		p("****************************************************\n");
			  		s("%d",&n5);
			  		switch(n5)
			  		{
			  			case 1:
			  				p("Enter Your SSC Hall-Ticket No:\n");
			  				s("%s",h);
			  				p("Enter your marks GPA \n");
			  				s("%f",&g);
			  				p("****************************************************\n");
			  				SSC1(g);
			  				break;
			  			case 2:
			  				p("Enter Your CBSE Hall-Ticket No:\n");
			  				s("%s",h);
			  				p("Enter your Marks percentage\n");
			  				s("%f",&g1);
			  				p("****************************************************\n");
			  				CBSE1(g1);
			  				break;
					}
					break;
				case 3:
					p("You have selected Mechanical Engineering\n");
					p("Select your option\n");
			  		p("1.SSC\n");
			  		p("2.CBSE\n");
			  		p("****************************************************\n");
			  		s("%d",&n5);
			  		switch(n5)
			  		{
			  			case 1:
			  				p("Enter Your SSC Hall-Ticket No:\n");
			  				s("%s",h);
			  				p("Enter your marks GPA \n");
			  				s("%f",&g);
			  				p("****************************************************\n");
			  				SSC1(g);
			  				break;
			  			case 2:
			  				p("Enter Your CBSE Hall-Ticket No:\n");
			  				s("%s",h);
			  				p("Enter your Marks percentage\n");
			  				s("%f",&g1);
			  				p("****************************************************\n");
			  				CBSE1(g1);
			  				break;
					}
					break;
				case 4:
					p("You have selected Civil Engineering\n");
					p("Select your option\n");
			  		p("1.SSC\n");
			  		p("2.CBSE\n");
			  		p("****************************************************\n");
			  		s("%d",&n5);
			  		switch(n5)
			  		{
			  			case 1:
			  				p("Enter Your SSC Hall-Ticket No:\n");
			  				s("%s",h);
			  				p("Enter your marks GPA \n");
			  				s("%f",&g);
			  				p("****************************************************\n");
			  				SSC1(g);
			  				break;
			  			case 2:
			  				p("Enter Your CBSE Hall-Ticket No:\n");
			  				s("%s",h);
			  				p("Enter your Marks percentage\n");
			  				s("%f",&g1);
			  				p("****************************************************\n");
			  				CBSE1(g1);
			  				break;
					}
					break;
				case 5:
					p("You have selected EEE\n");
					p("Select your option\n");
			  		p("1.SSC\n");
			  		p("2.CBSE\n");
			  		p("****************************************************\n");
			  		s("%d",&n5);
			  		switch(n5)
			  		{
			  			case 1:
			  				p("Enter Your SSC Hall-Ticket No:\n");
			  				s("%s",h);
			  				p("Enter your marks GPA \n");
			  				s("%f",&g);
			  				p("****************************************************\n");
			  				SSC1(g);
			  				break;
			  			case 2:
			  				p("Enter Your CBSE Hall-Ticket No:\n");
			  				s("%s",h);
			  				p("Enter your Marks percentage\n");
			  				s("%f",&g1);
			  				p("****************************************************\n");
			  				CBSE1(g1);
			  				break;
					}
					break;
				}
				break;
			  case 2:
			  	p("Choose your course\n");
			  	p("1.B.com\n");
			  	p("2.B.Sc\n");
			  	p("3.BA\n");
			  	p("****************************************************\n");
			  	s("%d",&n4);
			  	switch(n4)
			  	{
				case 1:
				  	p("You have selected B.Com\n");
					p("Select your option\n");
			  		p("1.SSC\n");
			  		p("2.CBSE\n");
			  		p("****************************************************\n");
			  		s("%d",&n5);
			  		switch(n5)
			  		{
			  			case 1:
			  				p("Enter Your SSC Hall-Ticket No:\n");
			  				s("%s",h);
			  				p("Enter your marks GPA \n");
			  				s("%f",&g);
			  				p("****************************************************\n");
			  				SSC2(g);
			  				break;
			  			case 2:
			  				p("Enter Your CBSE Hall-Ticket No:\n");
			  				s("%s",h);
			  				p("Enter your Marks percentage\n");
			  				s("%f",&g1);
			  				p("****************************************************\n");
			  				CBSE2(g1);
			  				break;
					}
				break;
				case 2:
				  	p("You have selected B.Sc\n");
					p("Select your option\n");
			  		p("1.SSC\n");
			  		p("2.CBSE\n");
			  		p("****************************************************\n");
			  		s("%d",&n5);
			  		switch(n5)
			  		{
			  			case 1:
			  				p("Enter Your SSC Hall-Ticket No:\n");
			  				s("%s",h);
			  				p("Enter your marks GPA \n");
			  				s("%f",&g);
			  				p("****************************************************\n");
			  				SSC2(g);
			  				break;
			  			case 2:
			  				p("Enter Your CBSE Hall-Ticket No:\n");
			  				s("%s",h);
			  				p("Enter your Marks percentage\n");
			  				s("%f",&g1);
			  				p("****************************************************\n");
			  				CBSE2(g1);
			  				break;
					}
					break;
				case 3:
					p("You have selected BA\n");
					p("Select your option\n");
			  		p("1.SSC\n");
			  		p("2.CBSE\n");
			  		p("****************************************************\n");
			  		s("%d",&n5);
			  		switch(n5)
			  		{
			  			case 1:
			  				p("Enter Your SSC Hall-Ticket No:\n");
			  				s("%s",h);
			  				p("Enter your marks GPA \n");
			  				s("%f",&g);
			  				p("****************************************************\n");
			  				SSC2(g);
			  				break;
			  			case 2:
			  				p("Enter Your CBSE Hall-Ticket No:\n");
			  				s("%s",h);
			  				p("Enter your Marks percentage\n");
			  				s("%f",&g1);
			  				p("****************************************************\n");
			  				CBSE2(g1);
			  				break;
					}
				}
			  	
			}
			break;
	case 2: p("Select your post Graduation\n");
			p("1.M.Tech\n");
			p("2.MCA\n");
			p("3.MA\n");
			p("4.Other\n");
			s("%d",&n2);
			switch(n2)
			{
			  case 1:
				p("You have selected M.Tech\n");
					p("Select your option\n");
			  		p("1.SSC\n");
			  		p("2.CBSE\n");
			  		p("****************************************************\n");
			  		s("%d",&n5);
			  		switch(n5)
			  		{
			  			case 1:
			  				p("Enter Your SSC Hall-Ticket No:\n");
			  				s("%s",h);
			  				p("Enter your marks GPA \n");
			  				s("%f",&g);
			  				p("****************************************************\n");
			  				SSC3(g);
			  				break;
			  			case 2:
			  				p("Enter Your CBSE Hall-Ticket No:\n");
			  				s("%s",h);
			  				p("Enter your Marks percentage\n");
			  				s("%f",&g1);
			  				p("****************************************************\n");
			  				CBSE3(g1);
			  				break;
					}
					break;
			  case 2:
			  	p("You have selected MCA\n");
					p("Select your option\n");
			  		p("1.SSC\n");
			  		p("2.CBSE\n");
			  		p("****************************************************\n");
			  		s("%d",&n5);
			  		switch(n5)
			  		{
			  			case 1:
			  				p("Enter Your SSC Hall-Ticket No:\n");
			  				s("%s",h);
			  				p("Enter your marks GPA \n");
			  				s("%f",&g);
			  				p("****************************************************\n");
			  				SSC3(g);
			  				break;
			  			case 2:
			  				p("Enter Your CBSE Hall-Ticket No:\n");
			  				s("%s",h);
			  				p("Enter your Marks percentage\n");
			  				s("%f",&g1);
			  				p("****************************************************\n");
			  				CBSE3(g1);
			  				break;
			  		}
			  		break;
			  case 3:
			  	p("You have selected MA\n");
					p("Select your option\n");
			  		p("1.SSC\n");
			  		p("2.CBSE\n");
			  		p("****************************************************\n");
			  		s("%d",&n5);
			  		switch(n5)
			  		{
			  			case 1:
			  				p("Enter Your SSC Hall-Ticket No:\n");
			  				s("%s",h);
			  				p("Enter your marks GPA \n");
			  				s("%f",&g);
			  				p("****************************************************\n");
			  				SSC3(g);
			  				break;
			  			case 2:
			  				p("Enter Your CBSE Hall-Ticket No:\n");
			  				s("%s",h);
			  				p("Enter your Marks percentage\n");
			  				s("%f",&g1);
			  				p("****************************************************\n");
			  				CBSE3(g1);
			  				break;
					}
					break;
			  case 4:
			  	p("Enter Your Course:\n");
				s("%s",a);
				p("Your Course:%s\n",a);
				p("Select your option\n");
			  	p("1.SSC\n");
			  	p("2.CBSE\n");
				p("****************************************************\n");
				s("%d",&n5);
				switch(n5)
				{
				case 1:
					p("Enter Your SSC Hall-Ticket No:\n");
			  		s("%s",h);
	 				p("Enter your marks GPA \n");
	  				s("%f",&g);
			  		p("****************************************************\n");
			  		SSC3(g);
			  		break;
		 		case 2:
		 			p("Enter Your CBSE Hall-Ticket No:\n");
			  		s("%s",h);
	 				p("Enter your Marks percentage\n");
			  		s("%f",&g1);
			  		p("****************************************************\n");
			  		CBSE3(g1);
			  		break;
				}
			break;	
			}
	}
}
void SSC(float g)
{
	char h[10];
	int n6,n7;
	float I,b;
	if(g<=10)
	{
	p("Enter Your Inter Hall-Ticket No:\n");
	s("%s",h);
	p("Enter your Intermediate percntage\n");
	s("%f",&I);
	p("****************************************************\n");
		p("Enter Your B.Tech Hall-Ticket No:\n");
		s("%s",h);
		p("Choose your exam type\n");
		p("1.Regular\n");
		p("2.Supply\n");
		s("%d",&n7);
		switch(n7)
		{
		case 1:
			p("Enter Your B.Tech Marks percentage\n");
			s("%f",&b);
			p("****************************************************\n");
			if(b>=70 && b<=100)
			{
				p("*******************CONGRATULATIONS*****************\n");
				p("You are selected for interview\n");	
				break;
			}
			else
			{
				p("Sorry Your marks are not sufficient\nWe need Better score atleast above 70%\nBetter luck next time\n");
				p("********************THANK__YOU*********************\n");
			}
			break;
		case 2:
			p("Enter Your B.Tech Hall-Ticket No:\n");
			s("%s",h);
			p("Enter Your B.Tech Marks percentage\n");
			s("%f",&b);
			p("****************************************************\n");
			if(b>=70 && b<=100)
			{
				p("*******************CONGRATULATIONS*****************\n");
				p("You are selected for interview\n");	
				break;
			}
			else
			{
				p("Sorry Your marks are not sufficient\nWe need Better score atleast above 70%\nBetter luck next time\n");
				p("********************THANK__YOU*********************\n");
			}
			break;
		}
	}
	else
	{
	p("**********Information Error*************\n");
	}
}
void CBSE(float g1)
{
	char h[10];
	int n6,n7;
	float I,b;
	if(g1<=100)
	{
	p("Enter Your Inter Hall-Ticket No:\n");
	s("%s",h);
	p("Enter your Intermediate Marks percntage\n");
	s("%f",&I);
	p("****************************************************\n");
		p("Enter Your B.Tech Hall-Ticket No:\n");
		s("%s",h);
		p("Choose your exam type\n");
		p("1.Regular\n");
		p("2.Supply\n");
		s("%d",&n7);
		switch(n7)
		{
		case 1:
			p("Enter Your B.Tech Marks percentage\n");
			s("%f",&b);
			p("****************************************************\n");
			if(b>=70 && b<=100)
			{
				p("****Congratulations****\n");
				p("You are selected for interview\n");	
			}
			else
			{
				p("Sorry Your marks are not sufficient\nWe need Better score atleast above 70%\nBetter luck next time\n");
				p("********************THANK__YOU*********************\n");
			}
			break;
		case 2:
			p("Enter Your B.Tech Marks percentage\n");
			s("%f",&b);
			p("****************************************************\n");
			if(b>=70 && b<=100)
			{
				p("*******************CONGRATULATIONS*****************\n");
				p("You are selected for interview\n");
				break;
			}
			else
			{
				p("Sorry Your marks are not sufficient\nWe need Better score atleast above 70%\nBetter luck next time\n");
				p("********************THANK__YOU*********************\n");
			}
			break;
		}
	}
	else
	p("**********Information Error*************\n");
}
void SSC1(float g)
{
	char h[10];
	int n6,n7,com,ch,str;
	float I,b,g1;
	if(g<=10)
	{
	p("Enter Your Inter Hall-Ticket No:\n");
	s("%s",h);
	p("Enter your Intermediate Marks percntage\n");
	s("%f",&I);
	p("****************************************************\n");
		p("Enter Your B.Tech Hall-Ticket No:\n");
		s("%s",h);
		p("Choose your exam type\n");
		p("1.Regular\n");
		p("2.Supply\n");
		s("%d",&n7);
		switch(n7)
		{
		case 1:
			p("Enter Your B.Tech Marks percentage\n");
			s("%f",&b);
			p("****************************************************\n");
			if(b>=70 && b<=100)
			{
				p("***********************GREAT************************\n");
				p("You are not from CSE course\nSo we have few questions for YOU\n");
				p("Do you have knowledge on computers\n");
				p("1.YES\n2.NO\n");
				s("%d",&com);
				if(com==1)
				{
				p("Our Company require certain courses\n");
				p("Do you have knowledge on any of the following\n");
				p("1.Java\n2.Python\n3.Java Script\n4.C++\n4.C\n5.Perl\n6.pascal\n7.Ruby\n8.Data base\n");
				scanf("%d",str);
				if(str<=8)
				{
				p("*******************CONGRATULATIONS*****************\n");
				p("You are selected for interview\n");
				}
				else
			{
				p("Not Eligible for Interview\n");
			}
				break;
				}
				else
				{
				p("You have no Computer Knowledge\nSo you are not selected for interview\n");
				p("*******************THANK__YOU*********************\n");
				break;	
				}	
			}
			else
			{
				p("Sorry Your marks are not sufficient\nWe need Better score atleast above 70%\nBetter luck next time\n");
				p("********************THANK__YOU*********************\n");
			}
			break;
		case 2:
			p("Enter Your B.Tech Marks percentage\n");
			s("%f",&b);
			p("****************************************************\n");
			if(b>=70 && b<=100)
			{
				p("***********************GREAT************************\n");
				p("You are not from CSE course\nSo we have few questions for YOU\n");
				p("Do you have knowledge on computers\n");
				p("1.YES\n2.NO\n");
				s("%d",&com);
				if(com==1)
				{
				p("Do you have knowledge on any of courses\n");
				p("Enter Your Knowledge based Course\n");
				scanf("%s",str);
				p("*******************CONGRATULATIONS*****************\n");
				p("You are selected for interview\n");
				break;
				}
				else
				{
				p("You have no Computer Knowledge\nSo you are not selected for interview\n");
				p("*******************THANK__YOU*********************\n");
				break;	
				}		
			}
			else
			{
				p("Sorry Your marks are not sufficient\nWe need Better score atleast above 70%\nBetter luck next time\n");
				p("********************THANK__YOU*********************\n");
			}
			break;
		}
	}
	else
	p("*************Information Error****************\n");
}
void CBSE1(float g1)
{
	char h[10],str[10];
	int n6,n7,com,ch;
	float I,b;
	if(g1<=100)
	{
	p("Enter Your Inter Hall-Ticket No:\n");
	s("%s",h);
	p("Enter your Intermediate Marks percntage\n");
	s("%f",&I);
	p("****************************************************\n");
		p("Enter Your B.Tech Hall-Ticket No:\n");
		s("%s",h);
		p("Choose your exam type\n");
		p("1.Regular\n");
		p("2.Supply\n");
		s("%d",&n7);
		switch(n7)
		{
		case 1:
			p("Enter Your B.Tech Marks percentage\n");
			s("%f",&b);
			p("****************************************************\n");
			if(b>=70 && b<=100)
			{
				p("***********************GREAT************************\n");
				p("You are not from CSE course\nSo we have few questions for YOU\n");
				p("Do you have knowledge on computers\n");
				p("1.YES\n2.NO\n");
				s("%d",&com);
				if(com==1)
				{
				p("Do you have knowledge on any of courses\n");
				p("Enter Your Knowledge based Course\n");
				scanf("%s",str);
				p("*******************CONGRATULATIONS*****************\n");
				p("You are selected for interview\n");
				break;
				}
				else
				{
				p("You have no Computer Knowledge\nSo you are not selected for interview\n");
				p("*******************THANK__YOU*********************\n");
				break;	
				}	
			}
			else
			{
				p("Sorry Your marks are not sufficient\nWe need Better score atleast above 70%\nBetter luck next time\n");
				p("********************THANK__YOU*********************\n");
				break;
			}
		case 2:
			p("Enter Your B.Tech Marks percentage\n");
			s("%f",&b);
			p("****************************************************\n");
			if(b>=70 && b<=100)
			{
				p("***********************GREAT************************\n");
				p("You are not from CSE course\nSo we have few questions for YOU\n");
				p("Do you have knowledge on computers\n");
				p("1.YES\n2.NO\n");
				s("%d",&com);
				if(com==1)
				{
				p("Do you have knowledge on any of courses\n");
				p("Enter Your Knowledge based Course\n");
				scanf("%s",str);
				p("*******************CONGRATULATIONS*****************\n");
				p("You are selected for interview\n");
				break;
				}
				else
				{
				p("You have no Computer Knowledge\nSo you are not selected for interview\n");
				p("*******************THANK__YOU*********************\n");
				break;	
				}	
			}
			else
			{
				p("Sorry Your marks are not sufficient\nWe need Better score atleast above 70%\nBetter luck next time\n");
				p("********************THANK__YOU*********************\n");
				break;
			}
		}
	}
	else
	p("*************Information Error****************\n");
}
void SSC2(float g)
{
	char h[10],str[10];
	int n6,n7,com,ch;
	float I,b,g1;
	if(g<=10)
	{
	p("Enter Your Inter Hall-Ticket No:\n");
	s("%s",h);
	p("Enter your Intermediate Marks percntage\n");
	s("%f",&I);
	p("****************************************************\n");
		p("Enter Your Degree Hall-Ticket No:\n");
		s("%s",h);
		p("Choose your exam type\n");
		p("1.Regular\n");
		p("2.Supply\n");
		s("%d",&n7);
		switch(n7)
		{
		case 1:
			p("Enter Your Degree Marks percentage\n");
			s("%f",&b);
			p("****************************************************\n");
			if(b>=70 && b<=100)
			{
				p("***********************GREAT************************\n");
				p("We have few questions for YOU\n");
				p("Do you have knowledge on computers\n");
				p("1.YES\n2.NO\n");
				s("%d",&com);
				if(com==1)
				{
				p("Do you have knowledge on any of courses\n");
				p("Enter Your Knowledge based Course\n");
				scanf("%s",str);
				p("*******************CONGRATULATIONS*****************\n");
				p("You are selected for interview\n");
				break;
				}
				else
				{
				p("You have no Computer Knowledge\nSo you are not selected for interview\n");
				p("*******************THANK__YOU*********************\n");
				break;	
				}		
			}
			else
			{
				p("Sorry Your marks are not sufficient\nWe need Better score atleast above 70%\nBetter luck next time\n");
				p("********************THANK__YOU*********************\n");	
			}
			break;
		case 2:
			p("Enter Your Degree Marks percentage\n");
			s("%f",&b);
			p("****************************************************\n");
			if(b>=70 && b<=100)
			{
				p("***********************GREAT************************\n");
				p("We have few questions for YOU\n");
				p("Do you have knowledge on computers\n");
				p("1.YES\n2.NO\n");
				s("%d",&com);
				if(com==1)
				{
				p("Do you have knowledge on any of courses\n");
				p("Enter Your Knowledge based Course\n");
				scanf("%s",str);
				p("*******************CONGRATULATIONS*****************\n");
				p("You are selected for interview\n");
				break;
				}
				else
				{
				p("You have no Computer Knowledge\nSo you are not selected for interview\n");
				p("*******************THANK__YOU*********************\n");
				break;	
				}		
			}
			else
			{
				p("Sorry Your marks are not sufficient\nWe need Better score atleast above 70%\nBetter luck next time\n");
				p("********************THANK__YOU*********************\n");	
			}
			break;
		}
	}
	else
	p("***************Information__Error********************\n");
}
void CBSE2(float g1)
{
char h[10],str[10];
	int n6,n7,com,ch;
	float I,b;
	if(g1<=100)
	{
	p("Enter Your Inter Hall-Ticket No:\n");
	s("%s",h);
	p("Enter your Intermediate Marks percntage\n");
	s("%f",&I);
	p("****************************************************\n");
		p("Enter Your Degree Hall-Ticket No:\n");
		s("%s",h);
		p("Choose your exam type\n");
		p("1.Regular\n");
		p("2.Supply\n");
		s("%d",&n7);
		switch(n7)
		{
		case 1:
			p("Enter Your Degree Marks percentage\n");
			s("%f",&b);
			p("****************************************************\n");
			if(b>=70 && b<=100)
			{
				p("***********************GREAT************************\n");
				p("We have few questions for YOU\n");
				p("Do you have knowledge on computers\n");
				p("1.YES\n2.NO\n");
				s("%d",&com);
				if(com==1)
				{
				p("Do you have knowledge on any of courses\n");
				p("Enter Your Knowledge based Course\n");
				scanf("%s",str);
				p("*******************CONGRATULATIONS*****************\n");
				p("You are selected for interview\n");
				break;
				}
				else
				{
				p("You have no Computer Knowledge\nSo you are not selected for interview\n");
				p("*******************THANK__YOU*********************\n");
				break;	
				}		
			}
			else
			{
				p("Sorry Your marks are not sufficient\nWe need Better score atleast above 70%\nBetter luck next time\n");
				p("********************THANK__YOU*********************\n");	
			}
			break;
		case 2:
			p("Enter Your Degree Marks percentage\n");
			s("%f",&b);
			p("****************************************************\n");
			if(b>=70 && b<=100)
			{
				p("***********************GREAT************************\n");
				p("We have few questions for YOU\n");
				p("Do you have knowledge on computers\n");
				p("1.YES\n2.NO\n");
				s("%d",&com);
				if(com==1)
				{
				p("Do you have knowledge on any of courses\n");
				p("Enter Your Knowledge based Course\n");
				scanf("%s",str);
				p("*******************CONGRATULATIONS*****************\n");
				p("You are selected for interview\n");
				break;
				}
				else
				{
				p("You have no Computer Knowledge\nSo you are not selected for interview\n");
				p("*******************THANK__YOU*********************\n");
				break;	
				}		
			}
			else
			{
				p("Sorry Your marks are not sufficient\nWe need Better score atleast above 70%\nBetter luck next time\n");
				p("********************THANK__YOU*********************\n");	
			}
			break;
		}
	}
	else
	p("***************Information__Error********************\n");
}
void SSC3(float g)
{
	char h[10],str[10];	
	int n6,n7,com,ch;
	float I,b;
	if(g<=10)
	{
	p("Enter Your Inter Hall-Ticket No:\n");
	s("%s",h);
	p("Enter your Intermediate Marks percntage\n");
	s("%f",&I);
	p("****************************************************\n");
		p("Enter Your PG Hall-Ticket No:\n");
		s("%s",h);	
		p("Choose your exam type\n");
		p("1.Regular\n");
		p("2.Supply\n");
		s("%d",&n7);
		switch(n7)
		{
		case 1:
			p("Enter Your PG Marks percentage\n");
			s("%f",&b);
			p("****************************************************\n");
			if(b>=70 && b<=100)
			{
				p("***********************GREAT************************\n");
				p("we have few questions for YOU\n");
				p("Do you have knowledge on computers\n");
				p("1.YES\n2.NO\n");
				s("%d",&com);
				if(com==1)
				{
				p("Do you have knowledge on any of courses\n");
				p("Enter Your Knowledge based Course\n");
				scanf("%s",str);
				p("*******************CONGRATULATIONS*****************\n");
				p("You are selected for interview\n");
				break;
				}
				else
				{
				p("You have no Computer Knowledge\nSo you are not selected for interview\n");
				p("*******************THANK__YOU*********************\n");
				break;	
				}	
			}
			else
			{
				p("Sorry Your marks are not sufficient\nWe need Better score atleast above 70%\nBetter luck next time\n");
				p("********************THANK__YOU*********************\n");
			}
			break;
		case 2:
			p("Enter Your PG Marks percentage\n");
			s("%f",&b);
			p("****************************************************\n");
			if(b>=70 && b<=100)
			{
				p("***********************GREAT************************\n");
				p("we have few questions for YOU\n");
				p("Do you have knowledge on computers\n");
				p("1.YES\n2.NO\n");
				s("%d",&com);
				if(com==1)
				{
				p("Do you have knowledge on any of courses\n");
				p("Enter Your Knowledge based Course\n");
				scanf("%s",str);
				p("*******************CONGRATULATIONS*****************\n");
				p("You are selected for interview\n");
				break;
				}
				else
				{
				p("You have no Computer Knowledge\nSo you are not selected for interview\n");
				p("*******************THANK__YOU*********************\n");
				break;	
				}	
			}
			else
			{
				p("Sorry Your marks are not sufficient\nWe need Better score atleast above 70%\nBetter luck next time\n");
				p("********************THANK__YOU*********************\n");
			}
			break;
		}
	}
	else
	p("***************Information__Error********************\n");
}
void CBSE3(float g1)
{
char h[10],str[10];	
	int n6,n7,com,ch;
	float I,b;
	if(g1<=100)
	{
	p("Enter Your Inter Hall-Ticket No:\n");
	s("%s",h);
	p("Enter your Intermediate Marks percntage\n");
	s("%f",&I);
	p("****************************************************\n");
		p("Enter Your PG Hall-Ticket No:\n");
		s("%s",h);	
		p("Choose your exam type\n");
		p("1.Regular\n");
		p("2.Supply\n");
		s("%d",&n7);
		switch(n7)
		{
		case 1:
			p("Enter Your PG Marks percentage\n");
			s("%f",&b);
			p("****************************************************\n");
			if(b>=70 && b<=100)
			{
				p("***********************GREAT************************\n");
				p("we have few questions for YOU\n");
				p("Do you have knowledge on computers\n");
				p("1.YES\n2.NO\n");
				s("%d",&com);
				if(com==1)
				{
				p("Do you have knowledge on any of courses\n");
				p("Enter Your Knowledge based Course\n");
				scanf("%s",str);
				p("*******************CONGRATULATIONS*****************\n");
				p("You are selected for interview\n");
				break;
				}
				else
				{
				p("You have no Computer Knowledge\nSo you are not selected for interview\n");
				p("*******************THANK__YOU*********************\n");
				break;	
				}	
			}
			else
			{
				p("Sorry Your marks are not sufficient\nWe need Better score atleast above 70%\nBetter luck next time\n");
				p("********************THANK__YOU*********************\n");
			}
			break;
		case 2:
			p("Enter Your PG Marks percentage\n");
			s("%f",&b);
			p("****************************************************\n");
			if(b>=70 && b<=100)
			{
				p("***********************GREAT************************\n");
				p("we have few questions for YOU\n");
				p("Do you have knowledge on computers\n");
				p("1.YES\n2.NO\n");
				s("%d",&com);
				if(com==1)
				{
				p("Do you have knowledge on any of courses\n");
				p("Enter Your Knowledge based Course\n");
				scanf("%s",str);
				p("*******************CONGRATULATIONS*****************\n");
				p("You are selected for interview\n");
				break;
				}
				else
				{
				p("You have no Computer Knowledge\nSo you are not selected for interview\n");
				p("*******************THANK__YOU*********************\n");
				break;	
				}	
			}
			else
			{
				p("Sorry Your marks are not sufficient\nWe need Better score atleast above 70%\nBetter luck next time\n");
				p("********************THANK__YOU*********************\n");
			}
			break;
		}
	}
	else
	p("***************Information__Error********************\n");
}
