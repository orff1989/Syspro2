#include <stdio.h>

int mat[10][10];

void function1(){
    int num;
     for (int i = 0; i < 10; i++)
       {
           for (int j = 0; j < 10; j++)
           {
               scanf("%i",&num);
               mat[i][j]=num; //shoud be a char or int?
           }
}
int[] FWalgorithm(int i, int j){
   return new int[]; 
}

void function2(){
    int i;
    int j;
    scanf("%d",&i);
    scanf("%d",&j);
    int[] path =FWalgorithm(i,j);
    if (sizeof(path)==0) printf("False")
    else printf("True")
}

void function3(){
    int i;
    int j;
    scanf("%d",&i);
    scanf("%d",&j);

    int[] path =FWalgorithm(i,j);
    sizeOfPath= sizeof(path)/ sizeof(int);
    if (sizeOfPath==0) printf("-1");

    for (int k = 0; k < sizeOfPath; k++)
    {
        printf("%d",path[k]);
    }
}
