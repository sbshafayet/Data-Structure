#include<stdio.h>
#include<stdlib.h>

int main()
{
int *a, i;
a = (int *) malloc(4 * sizeof(int));
for (i = 0; i < 4; i++)
{
*(a + i) = i * 10;
}
printf("%d\n", *a++);
printf("%d\n", (*a)++);
printf("%d\n", *a);
printf("%d\n", *++a);
printf("%d\n", ++*a);
return 0;
}
