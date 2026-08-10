// -------------
// [64+row] mane holo 64+1=65===ASCI 'A'
// ------------

#include<stdio.h>
void main()
{
    int n,row,col;
    printf("Enter N:");
    scanf("%d",&n);

    for (row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%c ",64+row);
            
        }
        printf("\n");
    }
}
