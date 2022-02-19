#include<stdio.h>

int Sumd(int n)
{
    if(n<10) return n;
    else{
        return n%10+Sumd(n/10);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",Sumd(n));
}
