
#include<stdio.h>
#include<time.h>

void insertion(int arr[], int n){

    int i,j,temp;



    for(i = 0; i < n; i++){
        temp = arr[i];
        for(j = i-1; j >= 0 && temp < arr[j]; j--){
            arr[j+1] = arr[j];
        }
        arr[j+1] = temp;
    }
    }

int main()
{
	freopen("in.txt","r",stdin);

    clock_t start, end;
    double time;

	int s, i=0, b[505];

	while(scanf("%d",&b[i++])!=EOF);
    s = i-1;

    start = clock();
    insertion(b,s);
    end = clock();

    time = ((double)(end - start))/CLOCKS_PER_SEC;
    printf("Actual running time of insertion sort: %.9lf seconds\n",time);

	freopen("out.txt","w",stdout);
    for(i = 0 ; i < s ; i++)printf("%d ",b[i]);

	return 0;
}




