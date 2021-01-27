#include<iostream>
using namespace std;

int function(int ptr[])
{
   int x = 10;
   //size of a pointer:
   cout << "Size of a pointer : " << (int)sizeof(*ptr);

   ptr = &x; //this is allowed bcz ptr is a pointer and not an array
   cout << "\npointer value : "<< *ptr << endl;
 return 0;
}



int main()
{
  int arr[] = {12,13,14,15,16,17};
  cout << "Size of an array : " << (int)sizeof(arr) << "\n" << endl;  
 
  function(arr);
return 0;

}
