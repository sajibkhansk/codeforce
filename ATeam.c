#include<stdio.h>
int main(){

    int n,i,j,count=0,sum=0;
    scanf("%d", &n);
    int a[n][3];
    for(i=0;i<n;i++){
        for(j=0;j<3;j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0;i<n;i++){
            sum=0;
    for(j=0;j<3;j++){
            sum=sum+a[i][j];
            if(sum>=2){
                count++;
                break;
            }
        }
    }
    printf("%d",count);
}
