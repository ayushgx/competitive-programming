// problem statement:- https://www.spoj.com/problems/PRIME1/
// medium one 
/* still there is a problem with this code ..cant figure out whats wrong
*/

#include<bits/stdc++.h>
using namespace std;
#define max 100001
vector<int>* sieve(){
    bool isPrime[max];
    for(int i=0;i<max;i++){
        isPrime[i] = true;
    }
    for(int i=2;i*i<max;i++){
        if(isPrime[i]){
            for(int j=i*i;j<max;j+=i){
                isPrime[j] = false;
            }
        }
    }
    vector<int>* primes = new vector<int>();
    primes->push_back(2);
    for(int i=3;i<=max;i+=2){
        if(isPrime[i]){
            primes->push_back(i);
        }
    }
    return primes;
}
void printPrimes(long long l,long long r,vector<int>* &primes){
    bool isPrime[r-l+1];
    for(int i=0;i<=r-l;i++){
        isPrime[i] = true;
    }
    for(int i=0;primes->at(i)*(long long)primes->at(i) <=r ;i++){
        int currPrime = primes->at(i);
        long long base = (l/(currPrime))*(currPrime);
        if(base<l){
            base = base + currPrime;
        }
        for(long long j=base;j<=r; j+= currPrime){
            isPrime[j-l] = false;
        }
        if(base==currPrime){
            isPrime[base-l] = true;
        }
    }
    for(int i=0;i<=r-l;i++){
        if(isPrime[i]== true){
            if(i+l!=1){
            cout<<i+l<<endl;
            }
        }
    }
}
int main(){
    vector<int>* primes = sieve();
    int t;
    cin>>t;
    while(t--){
        long long int l,r;
        cin>>l>>r;
        printPrimes(l,r,primes);
        //cout<<"\n";
    }
    return 0;
}
