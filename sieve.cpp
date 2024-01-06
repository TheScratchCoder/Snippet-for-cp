//sieve of erathosthenis

void sieve(long long n){
    
    bool prime[n+1];
    fill(prime , prime+n+1 , true);
    prime[0] = prime[1] = false;

    for(long long i=2; i*i<=n; i++){
        if(prime[i]){
            for(long long j= i*2 ; j<=n ; j+=i){
                prime[j]=false;
            }
        }
    }
    string temp="";
    for(long long i=2; i<=n; i++){
        if(prime[i]){
            // do stuffs_
        }
    }
}
