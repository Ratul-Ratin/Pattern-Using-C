// -------------
// char call kora lagbe 1st loop er vitore and 2nd loop er baire
// ------------

#include<stdio.h>
void main()
{
    int n,row,col;
    printf("Enter N:");
    scanf("%d",&n);

    for (row=1;row<=n;row++)
    {
        char alph='a';
        for(col=1;col<=row;col++)
        {
            printf("%c ",alph);
            alph++;
            
        }
        printf("\n");
    }
}
