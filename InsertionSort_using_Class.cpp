#include<iostream>
using namespace std;
class InsertionSort{
    private:
        int arr[50],n;
    public:
        void getarray();
        void sortit();
        void display();
};
void InsertionSort::getarray(){
    int i;
    cout<<"How many elements: ";
    cin>>n;
    cout<<"Insert array of element to sort: ";
    for(i = 0; i < n; i++){
        cin>>arr[i];
    }
}
void InsertionSort::sortit(){
    int temp, i , j;
    for(i = 0; i < n; i++){
        temp = arr[i];
        for(j = i-1; j >= 0 && temp < arr[j]; j--){
            arr[j+1] = arr[j];
        }
        arr[j+1] = temp;
        cout<<"Iteration "<<i+1<<" : ";
        display();
    }
}
void InsertionSort::display(){
    int i;
    for(i = 0 ; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    InsertionSort IS;
    IS.getarray();
    IS.sortit();
    return 0;
}
