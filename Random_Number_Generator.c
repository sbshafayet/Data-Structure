#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main()
{

    srand(time(NULL));
    int t =0, i;

    freopen("in.txt","w",stdout);

    for (i=0;i<50;i++)
    {
        t = -250 + rand() % (250+250+1);
        printf("%d ",t);
    }
    /*
    for(i = 0 ; i < 500 ; i++)
    {
        t = (rand()%500 - 250);
        printf("%d ",t);
    }
    */
    //freopen("in.txt","w",stdout);
    return 0;
}
