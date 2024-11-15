#include <iostream>
#include <string>

using namespace std;

void search(string str, string pattern)
{
int n = str.length();
int m = pattern.length();
int flag =0, count = 0;

for (int i = 0; i <= n - m; i++)
{
int j;
for (j = 0; j < m; j++)
{
if (str[i + j] != pattern[j])
break;
}
if (j == m){
flag = 1;
if((i%2)==0)
    cout <<"Pattern "<<pattern<<" is preesent from position "<<i<<" to position "<<i+m-1<<endl;
count++;
// return;
}
}

if(flag ==0){
cout<<"Pattern not found."<<endl;
}
else{
cout<<"Pattern "<<pattern<<" is matched "<<count<<" times.";
}

}

int main()
{
string str = "ABBCBCBABBDCBABCABBDABVBCABBD";
string pattern = "ABBD";

search(str, pattern);
return 0;
}