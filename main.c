#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include "Checkisogram.h"
int main() {
    char s[100],ls[100];
    int c=0,i;
    scanf("%s",s);
    for(i=0;i<strlen(s);i++)
    {
        ls[i]=tolower(s[i]);
    }
    c=isogram(ls);
    if(c==0)
    printf("NO");
    else
    printf("YES");
}
