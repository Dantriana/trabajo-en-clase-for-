#include "iostream"
#include "stdlib.h"

using namespace std; 
int main()
{ 

    for(int i=50;i<=100;+=2)
    {//notemos que escribiar i+=2 es similar a escribir i = i + 2 
        cout << i << endl;
    }
    system("pause");
    return 0;
}