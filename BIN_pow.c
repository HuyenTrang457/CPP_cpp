ll  binpow( ll a, ll b){
    if(b==0) return 1;
    ll x= binpow(a,b/2);
    if(b%2==0) return x*x;
    else return x*x*a;
}
