#include <stdio.h>
#include <stdlib.h>

int soma(int num1, int num2){
   num1 = num1 * 20;
   num2 = num2 + 10;
   return(num1 +  num2);
}

int main()
{
    int a = 3, b = 7;
    printf("%d %d %d",a,b,soma(a,b));
    return 0;
}
