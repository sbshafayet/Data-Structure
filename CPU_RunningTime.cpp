#include<time.h>
#include<stdio.h>

#include<iostream>
using namespace std;


int main()
{
    clock_t start, end;
    int a;
    double cpu_time_used;

    start = clock();
    while(1)
    {
        scanf("%d",&a);
        if(a == 1)break;
    }
    end = clock();
    cout<<start<<endl;
    cout<<end<<endl;

    printf("%d\n",CLOCKS_PER_SEC);

    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Execution Time: %.10lf Seconds\n", cpu_time_used);

    return 0;
}
