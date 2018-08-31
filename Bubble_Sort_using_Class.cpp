

#include<iostream>
using namespace std;
class BubbleSort{
    private:
        int arr[50],n;

    public:
        void getarray();
        void sortit();
        void display();
};
void BubbleSort::getarray(){
    int i;
    cout<<"How many elements: ";
    cin>>n;
    cout<<"Insert array of element to sort: ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
}
void BubbleSort::sortit(){
    int temp,i,j;
    for(i = 0; i < n; i++){
        for(j =0; j < n-1-i; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void BubbleSort::display(){
    int i;
    cout<<"The sorted element is\n";
    for(i = 0 ; i < n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    BubbleSort BS;
    BS.getarray();
    BS.sortit();
    BS.display();
    return 0;
}
