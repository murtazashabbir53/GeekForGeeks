#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int *pointerVal = NULL; //integer value initialized to NULL


    (*pointerVal) = 366;     // given a value to the pointer                           /*Your program compiles perfectly but when you try to run your program it will crash because pointer has no valid address. */
    cout << "Integer pointer value: " << *pointerVal << endl;
    return 0;
}


/*---------------------------------------------------------------------------------------------------------------*/


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int *pointerVal = NULL; //integer value initialized to NULL
    pointerVal = new int;

    (*pointerVal) = 366;     // given a value to the pointer
    cout << "Integer pointer value: " << *pointerVal << endl;
    return 0;
}
                                                                       //Memory excution using new operator
