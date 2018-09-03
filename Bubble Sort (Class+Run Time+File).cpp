#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <time.h>

using namespace std;

class Sorting
{
public:
void bubblesort(int a[], int n)
{
   for(int i=0; i<=n-2; i++){
        for(int j=0; j<=n-2-i; j++){
            if(a[j]<a[j+1])
                swap(a[j], a[j+1]);
        }
    }


}
};

int main()
{
int i, j, t, k, r;
Sorting sorting;



ofstream input;
input.open("in.txt");
srand(time(0));
freopen("in.txt", "w", stdout);
for (i = 0; i < 500; i++)
{
r = (rand() % (600) + (-300));
input << r << endl;
}
input.close();

ifstream data;
data.open("in.txt");
int numbers[500];
for (k = 0; k < 500; k++)
{
data >> numbers[k];
}
data.close();

clock_t start, end;
int a;
double cpu_time_used;

start = clock();

sorting.bubblesort(numbers, 500);
ofstream input_sort;
input_sort.open("out­.txt");
for (i = 0; i < 500; i++)
{
input_sort << numbers[i] << endl;
}
input_sort.close();
end = clock();
cout << start << endl;
cout << end << endl;
printf("%d\n", CLOCKS_PER_SEC);

cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
printf("Execution Time: %.3lf Seconds\n", cpu_time_used);

return 0;
}


