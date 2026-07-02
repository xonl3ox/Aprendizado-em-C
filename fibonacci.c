#include <stdio.h>

int main()
{
    int n, n1 = 0, n2 = 1, fibo;
    printf("escreva o valor de n: ");
    scanf("%d",&n);
    for(int i = 3; i <= n; i++){
        if(n==1){
            fibo=0;
            break;
        }
        if(n==2){
            fibo=1;
            break;
        }
        fibo=n1+n2;
        n1=n2;
        n2=fibo;
    }
        printf("%d\n",fibo);
    return 0;
}
