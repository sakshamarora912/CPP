#include <iostream>
using namespace std;
//PRIME NUMBER
void primeSieve(int n){
    int prime[100]={0};
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
          for(int j=i*i;j<=n;j+=i){
              prime[j]=1;
            }
        }
    }
    for (int i=2;i<=n;i++){
          if(prime[i]==0){
              cout<<i<<" ";
        }
    }cout<<endl;
}

//PRIME FACTORIZATION
void primeFctor(int n){
    int spf[100]={0};
    for(int i=2;i<=n;i++){
        spf[i]=i;  
        // cout<<i<" ";
    }for(int i=2;i*i<=n;i++){
        if(spf[i]==i){
            for(int j=i*i;j<=n;j+=i){
                if(spf[j]==j){
                    spf[j]=i;
                }
            }
        }
    }while(n!=1){
        cout<<spf[n]<<" ";
        n=n/spf[n];
        cout<<n<<" ";
    }
}
int main(){
   primeSieve(50);
   primeFctor(50);
  return 0;
}