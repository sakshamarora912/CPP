#include <bits/stdc++.h>
using namespace std;

void computepieTable(char pattern[], int M, int pieTable[]){
    int len = 0; pieTable[0] = 0;
    int i=1;
    while (i<M){
        if (pattern[i]==pattern[len]){
            len++;
            pieTable[i]=len;
            i++;
        }
        else{
            if (len!= 0){len=pieTable[len-1];}
            else{pieTable[i] = 0; i++;}
        }
    }
    cout<<"patterntern is:\n";
    for (int i=0;i<M;i++){cout << pattern[i] << " ";}
    cout<<"\npie table is\n";
    for (int i = 0; i<M;i++){cout<<pieTable[i]<<" ";}
}
int main(){
    char text[] = "ABABCABABDCA", pattern[] = "AAABBB";
    int M = strlen(pattern), N = strlen(text), pieTable[M];
    computepieTable(pattern, M, pieTable);
    return 0;
}