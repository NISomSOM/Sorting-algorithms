#include<iostream>
using namespace std;
void bubble(int array[],int size){
    int temp;
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1-i;j++){
            if(array[j]>array[j+1]){
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
}
void insertion(int array[],int size){
    int temp;
    for(int i=1;i<size;i++){
        for(int j=i;j>=1;j--){
            if(array[j-1]>array[j]){
                temp=array[j-1];
                array[j-1]=array[j];
                array[j]=temp;
            }
        }
    }
}
void selection(int array[],int size){
    int m,location,temp;
    for(int i=0;i<size-1;i++){
        m=array[i];
        location=i+1;
        for(int j=i+1;j<size;j++){
            if(m>array[j]){
                m=array[j];
                location=j;
            }
        }
        if(array[location]<array[i]){
            temp=array[location];
            array[location]=array[i];
            array[i]=temp;
        }
    }
}    
void getdata(int array[],int size){
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
}
void display(int array[],int size){
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int a[n],b[n],c[n];
    getdata(a,n);
    for(int i=0;i<n;i++) {
        b[i]=a[i];
        c[i]=a[i];
    }
    cout<<"Array sorted using bubble sort:"<<endl;
    bubble(a,n);
    display(a,n);
    cout<<"Array sorted using insertion sort:"<<endl;
    insertion(b,n);
    display(b,n);
    cout<<"Array sorted using selection sort:"<<endl;
    selection(c,n);
    display(c,n);
    return 0;
}                             