#include <stdio.h>
#define size 5

int main (){
    int iArr[size ] = {0,0,0,0,0};

    for (int i = 0 ; i < size; i++)
    {

        iArr[i] = (2*i)+1;
    
    }

    for (int i = 0 ; i < size; i++)
    {
        printf ("%d", iArr[i]);
    }
    return 0 ;
}