#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,j=0,r=0,c=0;
    printf("\n enter row size");
    scanf("\n %d",&r);
    printf("\n enter column size");
    scanf("\n %d",&c);
    printf("\n Pattern =\n\n");
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(i==1 || i== r || i+j==c+1 )
            {

            printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}
