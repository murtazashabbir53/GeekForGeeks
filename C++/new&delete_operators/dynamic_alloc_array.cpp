//new op
#include<iostream>
using namespace std;

int main(int argv, char **argc)
{
   char *pcBuffer = new char[12];  //memory allocation for character array

 for(int i=0; i<9; i++)
                                      //Assigned data to the buffer
     pcBuffer[i] = i+49;


   for(int i=0;i<9;i++)
   {
     cout << pcBuffer[i] << endl; //displayed the data
   }
  return 0;
}


//delete op

#include<iostream>
using namespace std;

int main(int argv, char **argc)
{
   char *pcBuffer = new char[12];  //memory allocation for character array

 for(int i=0; i<9; i++)
                                      //Assigned data to the buffer
     pcBuffer[i] = i+49;


   for(int i=0;i<9;i++)
   {
     cout << pcBuffer[i] << endl;
   }
    delete [] pcBuffer;
    return 0;
}
