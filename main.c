# include <stdio.h>
#include "my_mat.c"

int main(){
    char ch='x';
    
while (ch != 'D')
{
   scanf("%c",&ch);
   if (ch=='A') function1(); 
   if (ch=='B') function2(); 
   
}

    return 0;
}

