
#include<iostream>
#include<vector>
using namespace std;
int myfunction(int arr[],int size);
void myfunction2(int arr[],int size,int target);
int main()
{
int myarray[]={3,1,6,2,9};
int size = sizeof(myarray) / sizeof(myarray[0]);
int highest_number=myfunction(myarray,size);
cout<<"Highest Number: "<<highest_number;
myfunction2(myarray,size,9);
return 0;
}
int myfunction(int arr[],int size)
{
      int highest=arr[0];
     
      for(int i=1;i<size;i++)
      {
             if(arr[i]>highest)
             {
                highest=arr[i];
                

             }
      }

      return highest;
}
void myfunction2(int arr[],int size,int target)
{           
             int index=-1;
          for(int i=0;i<size;i++)
          {
            if(arr[i]==target)
            {
                 index=i;
               
                  
                  break;
            }

           



          }

           if(index<0)
           {
            cout<<"\n Value not Found!";
           }
           else
           cout<<" \n Value found at index "<<index;

}
