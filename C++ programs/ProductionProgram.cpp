/*
	Name: Production Graph 
	Copyright: 
	Author: Ammarah Mirani
	Date: 22/06/25 15:29
	Description: case study 
	
*/
#include<iostream>
#include<cmath>
using namespace std;
void GetTotal(int& sum);
void InputData(int a[], int LastPlantNumber);
int RoundNum(double num);
void Scale(int a[], int size );
void PrintAsteriks(int n);
void Graph(const int AsterikCount[], int LastPlantNumber );
const int PlantNumbers=4;

int main()
{

	int production[PlantNumbers];
	cout<<"\t\t\t\tTHIS PROGRAM DISPLAYS THE BAR GRAPH OF ASTERIKS SHOWING THE PRODUCTION OF EACH PLANT OF ABC COMPANY\n\n\n";
    cout<<"\t\t\t\t_________________________________________________________________________________________________________";

char ans;
do
{
 InputData(production, PlantNumbers);
 cout<<endl;
 cout<<"\n Total production for each of the plants 1 through 4 are : ";
 for(int i=1;i<=PlantNumbers;i++)
 {
 	cout<<production[i-1]<<" ";
	 }	
	 
	 

Scale(production,PlantNumbers);
Graph(production, PlantNumbers);
cout<<"\nDo you want to test again? Enter n or y and return ";
	 cin>>ans;
}
while(ans!='n' && ans!='N');
	return 0;
}
void InputData(int a[], int LastPlantNumber)
{
	for(int PlantNumber=1;PlantNumber<=LastPlantNumber;PlantNumber++)
	{
		cout<<endl<<"Enter production data for plant number "<<PlantNumber<<endl;
		GetTotal(a[PlantNumber-1]);
	}
}

void GetTotal(int& sum)
{
	sum=0;
	int next;
	cout<<"\n Enter number of units produced by each department";
	  cout<<" Append a negative number to the end of list ";
	cin>>next;
	while(next>=0)
	{
	sum+=next;
	cin>>next;
	}
	cout<<"\n Total = "<<sum<<endl;
}

void Scale(int a[], int size )
{
	for(int i=0;i<size;i++)
	a[i]=round(a[i]/1000.0);
}

int RoundNum(double num)
{
         using namespace std;
		  return static_cast<int>(floor(num+0.5));	
}

void Graph(const int AsterikCount[], int LastPlantNumber )
{
	//using namespace std;
	cout<<"\n Units produced in thousands of units : ";
	for(int i=1;i<=LastPlantNumber;i++)
	{
	          cout<<"\n   Plant No #"<<i<<" ";
			  PrintAsteriks(AsterikCount[i-1]);
			  cout<<endl;	
	}
}
void PrintAsteriks(int n)
{
	//using namespace std;
	for(int count=1;count<=n;count++)
	
		cout<<" * ";
	
}
