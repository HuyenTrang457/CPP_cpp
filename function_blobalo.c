//-----Kiem tra so nguyen to------------------
bool kiem_tra_ngto(int n){
    if(n==2) return true;
    else{
        for(int i=2;i<n;i++){
            
            if(n%i==0) return false;
        }
        return true;
    }
}
