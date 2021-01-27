#include<iostream>
using namespace std;

int main()
{
  //initializing 2-D array... arr[i][j].. where i:row number and j:column number
  int arr[5][3] = {{3,1,5},{6,8,23},{9,1,3},{7,8,9},{10,20,67}};  //elements initialized in a nested brace format for easy understanding

  //displaying the multidimensional array elements using nested loop

  for(int i=0;i<5;i++)
  {
    for(int j=0;j<3;j++)
    {
       cout << "\narr[" << i << "]" << "[" << j << "] : " << arr[i][j] << endl;
    }
  }
return 0;
}
