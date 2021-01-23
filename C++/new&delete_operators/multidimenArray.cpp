/*create a multidimensional array using the new operator. In the below example I am creating a 2D array has 3 row and 3 column with the help of double pointer and new operator.

*/

#include<iostream>
//in 2D, we have three rows and three columns
#define row 3
#define column 3
using namespace std;

int main(int argc, char **argv)
{
     int irow, icol;
  //assigning memory to the rows
  char **pcBuffer = new char *[row];

  //assigning memory to the columns
  for(int icol=0;icol<column;icol++)
  {
     pcBuffer[icol] = new char[column];
  }

  for(irow=0;irow<row;irow++)
  {
      for(icol=0;icol<column;icol++)          //assigning value to the 2D array
      {
          pcBuffer[icol][irow] = (irow+icol)+48;       //Adding 48(ascii character of zero} for 0,1,2,3
  }

  for(irow=0;irow<row;irow++)
  {
      for(icol=0;icol<column;icol++)          //display
      {
          cout << pcBuffer[icol][irow] << endl;
      }
  }




  //Now, its time to free up the memory using delete operator
  for(icol=0;icol<column;icol++)   //simply deleting column
  {
      delete [] pcBuffer[icol];
  }
  delete [] pcBuffer; //deleting rows


return 0;
}



