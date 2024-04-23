int res=0;
    for(int i=0;i<n;i++){
        res+=a[i];
        res %= 100;
    }

// Tìm K chữ số cuối cùng của n^m --> Chia dư n^m cho 10^k
    k=pow(10,k);
    int res=1;
    for(int i=0;i<m;i++){
        res*= n;
        res %= k;
    } 
