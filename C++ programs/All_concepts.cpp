/*
Filename: C++ basic concepts
Author: Ammarah Mirani
Email address: ammaramirani.bscsf23@iba-suk.edu.pk
Project no:00
Description:Just revising first semester c++ language
Last changed date:21 June,2025.
*/
#include<iostream>
using namespace std;
void method1(int times);
void method2();
void arrayfill(int arr[],int size);
int adjustDays(int oldDays);
int main()
{  int  repeat;
int myarr[3]={1,2,3};
int arr2[3];
const int NUMBER_OF_EMPLOYEES=3;
	cout<<"How many times should repeat the program? "<<endl;
	cin>>repeat;
method1(repeat);
method2();
int vacation[NUMBER_OF_EMPLOYEES], number;
         cout << "Enter allowed vacation days for employees 1"
             << " through " << NUMBER_OF_EMPLOYEES << ":\n";
        
for (number = 1; number <= NUMBER_OF_EMPLOYEES; number++)
            cin >> vacation[number - 1];
        
for (number = 0; number < NUMBER_OF_EMPLOYEES; number++)
            vacation[number] = adjustDays(vacation[number]);
        cout << "The revised number of vacation days are:\n";
        
for (number = 1; number <= NUMBER_OF_EMPLOYEES; number++)
            cout << "Employee number " << number
                 << " vacation days = " << vacation[number-1] << endl;
                 cout<<"\n array print, before arrayfill call ";
                 for(int i=0;i<3;i++)
                 {
                 	cout<<"\n"<<arr2[i];
				 }
                 
                 arrayfill(arr2,3);
                 cout<<"\n array print, after arrayfill call ";
                 for(int i=0;i<3;i++)
                 {
                 	cout<<"\n"<<arr2[i];
				 }
                 
return 0;
}
void method1(int times)
{    
	do{

char gender;
cout<<"Enter m for male or f for female"<<endl;
cin>>gender;
if(gender=='f')
{
	string style;
cout<<"Enter sh for superhero or sv for supervillian "<<endl;
cin>>style;
if(style=="sh")
{
	char women_style;
	cout<<"Enter A for animie fashion or S for sitcoin fashion "<<endl;
	cin>>women_style;
	if(women_style=='A')
	cout<<"You should Go with bangs "<<endl;
	else if(women_style=='S')
	cout<<"You should get a bob "<<endl;
	else
	cout<<"Invalid input"<<endl;
}
else if(style=="sv")
cout<<"You should take mohawk "<<endl;
else
cout<<"Invalid input"<<endl;
	
}
else if(gender=='m')
{
	string style;
cout<<"Enter sh for superhero or sv for supervillian "<<endl;
cin>>style;
if(style=="sh")
{
	string men_style;
	cout<<"Enter St for Steak fashion or Sh for Sushi fashion "<<endl;
	cin>>men_style;
	if(men_style=="St")
	cout<<"You should get a flat top "<<endl;
	else if(men_style=="Sh")
	cout<<"You should get a pompadaour "<<endl;
	else
	cout<<"Invalid input"<<endl;
}
else if(style=="sv")
cout<<"You should take mohawk "<<endl;
else
cout<<"Invalid input"<<endl;
	
}
else
cout<<"Invalid input"<<endl;
times--;}
while(times);	
}

void method2()
{
	int input;
    do
	{
		
	cout<<"What do you want to print on display?"<<endl;
	   cout<<"press 1 for country name "<<endl;
	    cout<<"press 2 for province name "<<endl;
	    cout<<"press 3 for city name "<<endl;
	cin>>input;
	
	switch(input)
	{
	case 1:
		cout<<"Pakistan"<<endl;
		break;
		case 2:
		cout<<"Sindh"<<endl;
		break;
		case 3:
		cout<<"Sukkur"<<endl;
		break;
		case 4 :
		cout<<"Program ended"<<endl;}
		
		}
	while(input!=4);
	
}

int adjustDays(int oldDays)
{
	return oldDays+5;
}
void arrayfill(int arr[],int size)
{
	
	for(int i=0;i<size;i++)
	{  cout<<"\n Enter array element "<<i+1<<" ";
		cin>>arr[i];
		
	}
	
	
}
