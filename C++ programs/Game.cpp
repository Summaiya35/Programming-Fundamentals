#include<iostream>
#include<conio.h>
using namespace std;
int main()

{int a;
cout<<"\n\t Press 1 for quiz without lifelines and press 2 for quiz with lifelines";
cout<<"\n\t";
cin>>a;
switch (a)
{ 
case 1: 
{
 char a;
 int score=0;
 cout<<"\n\n\t  Welcome to short quiz of 5 questions";
 
 cout<<"\n\t What is the capital of Sindh";
 cout<<"\n\t A. Karachi";
 cout<<"\n\t B. Islamabad";
 cout<<"\n\t C. Lahore";
 cout<<"\n\t Enter your answer (A,B,C)";
 cout<<"\n\t";
 cin>>a;
 if (a=='A')
 {
 cout<<"\n\t Correct";
 score+=10;}
 else
 cout<<"\n\t Wrong answer";
 
 cout<<"\n\t What is the capital of Khyber";
 cout<<"\n\t A. Karachi";
 cout<<"\n\t B. Islamabad";
 cout<<"\n\t C. Peshawar";
 cout<<"\n\t Enter your answer (A,B,C)";
 cout<<"\n\t";
 cin>>a;
 if (a=='C')
 {
 cout<<"\n\t Correct";
 score+=10;}
 else
 cout<<"\n\t Wrong answer";
 cout<<"\n\t What is the capital of Punjab";
 cout<<"\n\t A. Karachi";
 cout<<"\n\t B. Islamabad";
 cout<<"\n\t C. Lahore";
 cout<<"\n\t Enter your answer (A,B,C)";
 cout<<"\n\t";
 cin>>a;
 if (a=='C')
 {
 cout<<"\n\t Correct";
 score+=10;}
 else
 cout<<"\n\t Wrong answer";
 cout<<"\n\t What is the capital of Balochistan";
 cout<<"\n\t A. Quetta";
 cout<<"\n\t B. Islamabad";
 cout<<"\n\t C. Lahore";
 cout<<"\n\t Enter your answer (A,B,C)";
 cout<<"\n\t";
 cin>>a;
 if (a=='A')
 {
 cout<<"\n\t Correct";
 score+=10;}
 else
 cout<<"\n\t Wrong answer";
 cout<<"\n\t What is the capital of Pakistan";
 cout<<"\n\t A. Karachi";
 cout<<"\n\t B. Islamabad";
 cout<<"\n\t C. Lahore";
 cout<<"\n\t Enter your answer (A,B,C)";
 cout<<"\n\t";
 cin>>a;
 if (a=='B')
 {
 cout<<"\n\t Correct";
 score+=10;}
 else
 cout<<"\n\t Wrong answer";}
case 2:

{int score=0,lifeline=3;
char ans;
cout<<"\n\t\t  Short Quiz of Ten questions related to CS."<<endl<<" Select correct option and you have only three lifelines.";
cout<<"\n\t_____________________________________________________________________________________";
cout<<"\n\n\t Q.no.1 Abacus, the first computer prototype was invented _____ years ago\t";
cout<<"\n\tA. 15000 "<<endl<<"\tB. 2500 "<<endl<<"\tC. 8000 "<<endl<<"\tD. 5000";
cout<<"\n\t Enter your answere here Option\t";
cin>>ans;
if(ans=='D')
{
score+=10;
cout<<"\n\t Correct Answer";}
else 
{lifeline-=1; 
cout<<"\n\t You lost one lifeline";
}
cout<<"\n\n\t Q.no.2 In 1612, John Napier developed small machine that contained ten rods, made up of wood or metal";
cout<<"\n\t This device was used for :\t";
cout<<"\n\tA. Addition and Subtraction ";
cout<<endl;
cout<<"\n\tB. Multiplication and Division";
cout<<endl;
cout<<"\n\tC. Both A and B";
cout<<endl;
cout<<"\n\tD. None of these";
cout<<"\n\t Enter your answere here Option\t";
cin>>ans;
if(ans=='B')
{
score+=10;
cout<<"\n\t Correct Answer";}
else 
{
lifeline-=1; 
if((lifeline==3)||(lifeline==2))
cout<<"\n\t You lost one lifeline";
else
cout<<"\n\t You lost another lifeline";
}

if(lifeline!=0)
{
cout<<"\n\n\t Q.no.3 Later in 1622, William oughtered invented a calculating device, conataining pair of two moveable\t";
cout<<"\n\t rules to perform division and multiplication this device called\t";
cout<<"\n\tA. Leibnitz Calculator "<<endl<<"\tB. Napier's Bones "<<endl<<"\tC. Slide Rule "<<endl<<"\tD. Fortran Calculator\t";
cout<<"\n\t Enter your answere here Option\t";
cin>>ans;
if(ans=='C')
{
score+=10;
cout<<"\n\t Correct Answer";}
else 
{
lifeline-=1;
if(lifeline==0)
{
cout<<"\n\t Game Over!";
cout<<"\n\t You lost all three lifelines";
cout<<"\n\t Score :"<<score;

   }

else	{
	if((lifeline==3)||(lifeline==2))
	cout<<"\n\t You lost one lifeline";
	else
	cout<<"\n\t You lost another lifeline";
	
}}}
if(lifeline!=0)
{
cout<<"\n\n\t Q.no.4 In which year Blaise Pascal invented mechanical calculator which perform addition and subtaction by eight figures\t";
cout<<"\n\tA. 1645 "<<endl<<"\tB. 1698 "<<endl<<"\tC. 1642 "<<endl<<"\tD. 1690";
cout<<"\n\t Enter your answere here Option\t";
cin>>ans;
if(ans=='C')
{
score+=10;
cout<<"\n\t Correct Answer";}
else
{lifeline-=1;
if(lifeline==0)
{
cout<<"\n\t Game Over!";
cout<<"\n\t You lost all three lifelines";
cout<<"\n\t Score :"<<score;
}
else
{
	if((lifeline==3)||(lifeline==2))
	cout<<"\n\t You lost one lifeline";
	else
	cout<<"\n\t You lost another lifeline";
}}}
if(lifeline!=0)
{
cout<<"\n\n\t Q.no.5 Which was the first calculator that could perform all four basic operations \t";
cout<<"\n\tA. Analytical Engine "<<endl<<"\tB. Leibnitz Calculator "<<endl<<"\tC. Pasculine Calculator  "<<endl<<"\tD. Tabulating Machine ";
cout<<"\n\t Enter your answere here Option\t";
cin>>ans;
if(ans=='B')
{
score+=10;
cout<<"\n\t Correct Answer";}
else 
{lifeline-=1;
if(lifeline==0)

{
cout<<"\n\t Game Over!";
cout<<"\n\t You lost all three lifelines";
cout<<"\n\t Score :"<<score;
}
else {if(lifeline==3||lifeline==2)
	cout<<"\n\t You lost one lifeline";
	else
	cout<<"\n\t You lost another lifeline";
}}}
if(lifeline!=0)
{
cout<<"\n\n\t Q.no.6 Who is the father of Computer? \t";
cout<<"\n\tA. Charles Babbage "<<endl<<"\tB. William James "<<endl<<"\tC. Herman Hollerith "<<endl<<"\tD. Professor Quicken  ";
cout<<"\n\t Enter your answere here Option\t";
cin>>ans;
if(ans=='A')
{
score+=10;
cout<<"\n\t Correct Answer";}
else
{lifeline-=1;
if(lifeline==0)
{
cout<<"\n\t Game Over!";
cout<<"\n\t You lost all three lifelines";
cout<<"\n\t Score :"<<score;
}
else
{if((lifeline==3)||(lifeline==2))
	cout<<"\n\t You lost one lifeline";
	else
	cout<<"\n\t You lost another lifeline";
}}}
if(lifeline!=0)
{
cout<<"\n\n\t Q.no.7 First Generation of computers used :\t";
cout<<"\n\tA. Transistors "<<endl<<"\tB. ICs "<<endl<<"\tC. Vaccum Tubes "<<endl<<"\tD. LICs  ";
cout<<"\n\t Enter your answere here Option\t";
cin>>ans;
if(ans=='C')
{
score+=10;
cout<<"\n\t Correct Answer";}
else 
{lifeline-=1;
if(lifeline==0)
{
cout<<"\n\t Game Over!";
cout<<"\n\t You lost all three lifelines";
cout<<"\n\t Score :"<<score;
}
else
{if((lifeline==3)||(lifeline==2))
	cout<<"\n\t You lost one lifeline";
	else
	cout<<"\n\t You lost another lifeline";
}}}
if(lifeline!=0)
{
cout<<"\n\n\t Q.no.8 Second Generation of computers used :\t";
cout<<"\n\tA. Transistors "<<endl<<"\tB. ICs "<<endl<<"\tC. Vaccum Tubes "<<endl<<"\tD. LICs  ";
cout<<"\n\t Enter your answere here Option\t";
cin>>ans;
if(ans=='A')
{
score+=10;
cout<<"\n\t Correct Answer";}
else 

{lifeline-=1;
if(lifeline==0)
{
cout<<"\n\t Game Over!";
cout<<"\n\t You lost all three lifelines";
cout<<"\n\t Score :"<<score;
}
else
{
if((lifeline==3)||(lifeline==2))
	cout<<"\n\t You lost one lifeline";
	else
	cout<<"\n\t You lost another lifeline";}}}
	if(lifeline!=0)
{
cout<<"\n\n\t Q.no.9 Third Generation of computers used :\t";
cout<<"\n\tA. Transistors "<<endl<<"\tB. ICs "<<endl<<"\tC. Vaccum Tubes "<<endl<<"\tD. LICs  ";
cout<<"\n\t Enter your answere here Option\t";
cin>>ans;
if(ans=='D')
{
score+=10;
cout<<"\n\t Correct Answer";}

else
{lifeline-=1;
if(lifeline==0)
{
cout<<"\n\t Game Over!";
cout<<"\n\t You lost all three lifelines";
cout<<"\n\t Score :"<<score;
}
else
{if((lifeline==3)||(lifeline==2))
	cout<<"\n\t You lost one lifeline";
	else
	cout<<"\n\t You lost another lifeline";
}}}
if(lifeline!=0)
{
cout<<"\n\n\t Q.no.10 Present-day Generation of computers used :\t";
cout<<"\n\tA. Multicore Processors "<<endl<<"\tB. LICs "<<endl<<"\tC. AI "<<endl<<"\tD. Quantum Computing  ";
cout<<"\n\t Enter your answere here Option\t";
cin>>ans;
if(ans=='C')
{
score+=10;
cout<<"\n\t Correct Answer";}
else 

{lifeline-=1;
if(lifeline==0)
{
cout<<"\n\t Game Over!";
cout<<"\n\t You lost all three lifelines";
cout<<"\n\t Score :"<<score;
}
else
{if((lifeline==3)||(lifeline==2))
	cout<<"\n\t You lost one lifeline";
	else
	cout<<"\n\t You lost another lifeline";
}}}
if(score==100)
{
cout<<"\n\t Wohoo! You Win!";
cout<<"\n\t Highest Score :"<<score;}
else
{
cout<<"\n\t Well tried";
cout<<"\n\t  Score :"<<score;}}
default:
	cout<<"\n\t Invalid Entry";
}
getch();
return 0;
}

