#include<iostream>
using namespace std;
void LinearSearch(int arr[], int size, int x)
{
for(int i=0;i<size;i++)
{
  if(arr[i] == x)
   {
      cout << "\nElement found at position: " << (i+1) << endl;
      break;
    }
}

}




int main()
{
int size, arr[10], s;
cout << "\nEnter total array element: " << endl;
cin >> size;

for(int i=0;i<size;i++)
{
//Entering array elements
cout << "\nEnter element: " << endl;
cin >> arr[i];
}

cout << "\nEnter the element to be searched: " << endl;
cin >> s;

//Calling the function for finding the element
   LinearSearch(arr, size, s);

return 0;
}
