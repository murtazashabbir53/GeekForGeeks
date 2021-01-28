 //***************************** 2D Array Representation*****************************************

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

//***************************** 3D Array Representation*****************************************
#include<iostream>
using namespace std;

int main()
{
  int set,r,c;
  int arr[10][10][10];
  cout << "\nEnter set the rows and columns : " << endl;
  cin >> set;
  
  cout << "\nEnter total rows : " << endl;
  cin >> r;

  cout << "\nEnter total columns : " << endl;
  cin >> c;

 //three nested loops for user defined input
  for(int i=0;i<set;i++)
  {
    for(int j=0;j<r;j++)
    {
       for(int k=0;k<c;k++)
       {
          cout << "\nEnter element :" <<endl;
          cin >> arr[i][j][k];
        }

     }
   }
  //Displayed the output with proper labelling
  for(int i=0;i<set;i++)
  {
    for(int j=0;j<r;j++)
    {
       for(int k=0;k<c;k++)
       {
          cout << "\narr[" << i << "]" << "[" << j << "]" << "[" << k << "] :";
  cout << arr[i][j][k] << endl;;
                    
        }

     }
   }
  
 return 0;
}

