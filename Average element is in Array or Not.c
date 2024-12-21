#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int s=0,avg,c=0;
    for(i=0;i<n;i++){
        s+=a[i];
    }
    avg=s/n;
    for(i=0;i<n;i++){
        if(avg==a[i]){
            c=1;
            break;
        }
    }
    if(c==1){
        printf("True");
    }else{
        printf("False");
    }
}