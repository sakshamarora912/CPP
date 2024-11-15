#include <bits/stdc++.h>
using namespace std;

int frequency(stack<char> vowel){
    int a,count=0;
    while (!vowel.empty()){
        a=tolower(vowel.top());
        if (a=='a' ||a=='e'||a=='i'||a=='o'||a=='u') count++; vowel.pop();
    }return count;
}

void show(stack<char> vowel){
    while (!vowel.empty()){
        cout<<"  "<<vowel.top();
        vowel.pop();
    }cout<<endl;
}

int main(){
    int i;
    stack<char> vowel;

    vowel.push('s');vowel.push('h');vowel.push('i');vowel.push('v');
    vowel.push('S');vowel.push('U');vowel.push('N');vowel.push('A');vowel.push('S');
    vowel.push('D');vowel.push('a');vowel.push('S');

    cout<<"The elements of the Stack in LIFO order are: "; show(vowel);
    cout<<"Frequency of  in stack is: "<<frequency(vowel);
    return 0;
}
