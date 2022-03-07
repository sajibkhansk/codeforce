#include<stdio.h>
int main()
{
    int a[5][5];
    int i,j,s=0, p=0;

    for( i= 0; i<5 ; i++)
    {
        for( j=0; j<5; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for( i= 0; i<5 ; i++)
    {
        for(j=0;j<5;j++){

        if (a[i][j]==1)
        {
            s=i+1;
            p=j+1;
            break;
        }
    }
}
int x=0;
x=s-3;
int y=0;
y=p-3;
int sum = 0;
if(x<0){
    x=x*-1;
}
if(y<0){
    y=y*(-1);
}

printf("%d", x+y);

}
