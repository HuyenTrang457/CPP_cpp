------------------------------------
  // INSERTION SORT 
void insert_sort(int a[], int n){
    int i, j, last;
    for(int i=1;i<n;i++){
        last=a[i];
        j=i;
        while(j>0&& a[j-1]>last){
            a[j]=a[j-1];
            j--;
        }
        a[j]= last;
    }
}

-------------------------------------
  // MERGE SORT 
  #include<iostream>
using namespace std;
#include<algorithm>
int size(int a[]){
    return sizeof(a) / sizeof(a[0]);
}
void merge_sort(int a[])
{
    int length = size(a);
    if(length<= 1) return;
    int middle= length/2;
    int leftArray[middle];
    int rightArray[length-middle];
    int i=0, j=0; // chỉ số của leftArray, rightArray;
    for(;i<middle;i++){
        leftArray[i]=a[i];
    }
    for(j=middle;j<length- middle;j++){
        rightArray[j]=a[j-middle];
    }
    merge_sort(leftArray);
    merge_sort(rightArray);
    merge(leftArray, rightArray, a);
}
void merge(int leftArray[], int rightArray[], int array[]){
    int leftSize= size(array)/2;
    int rightSize=  size(array)- leftSize;
    int i=0, l=0,r=0;
    while(l<leftSize&& r<rightSize){
        if(leftArray[l]<rightArray[r]){
            array[i]=leftArray[l];
            i++;
            l++;
        }
        else{
            array[i]= rightArray[r];
            i++;
            r++;
        }
    }
    while(l<leftSize){
        array[i]=leftArray[l];
        i++; l++;
    }
    while(r<rightSize){
        array[i]= rightArray[r];
        i++;r++;
    }
}
int main(){
    int n=7;
    int a[n]={1,2,5,3,6,2,4};
    merge_sort(a);
    for(int x:a) cout<<x<<" ";
}
