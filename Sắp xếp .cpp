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
