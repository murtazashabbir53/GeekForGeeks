#include<iostream>
using namespace std;

int main()
{
  int r,c,arr[10][10];
 
  //initializing 2-D array... arr[i][j].. where i:row number and j:column number
 // int arr[5][3] = {{3,1,5},{6,8,23},{9,1,3},{7,8,9},{10,20,67}};  //elements initialized in a nested brace format for easy understanding
   cout << "\nEnter total array elements to be entered in the respective ROW : ";
   cin >> r;  
 
   cout << "\nEnter total array elements to be entered in the respective column : ";
   cin >> c;  
 
   for(int i=0;i<r;i++)
  {
    for(int j=0;j<c;j++)
    {
     cout << "\nEnter element: " << endl;
     cin >> arr[i][j];
    }
  }
 
  //displaying the multidimensional array elements using nested loop

  for(int i=0;i<r;i++)
  {
    for(int j=0;j<c;j++)
    {
       cout << "\narr[" << i << "]" << "[" << j << "] : ";
       cout << arr[i][j];
    }
  }
return 0;
}
