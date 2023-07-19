#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers starting with 1 & 2 separated by a comma,followed by a space.
 * Return: Ever 0
 */
unsigned long a = 1,b = 2,c;
int main(void)
{
printf("%lu, %lu,",a,b);
for(int i=0;i<98;i++){
c = a + b;
a = b;
b = c;
if(i != 97){ 
printf(" %lu, ",c);
}else{	
printf(" %lu",c);
}
}
printf("\n");
return (0);
}
