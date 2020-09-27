#include<stdio.h>
#include<string.h>
#include "Checkisogram.h"
int isogram(char ls[])
{
    int i=0,j=0;
    for(i=0;i<strlen(ls);i++)
    {
        for(j=i+1;j<=strlen(ls);j++)
        {
            if(ls[i]==ls[j])
            return 0;
        }

        //1=true 0=false
    }
return 1;
}
