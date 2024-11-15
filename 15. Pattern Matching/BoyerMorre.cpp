#include <iostream>
using namespace std;
#define NO_OF_CHARS 256

// The preprocessing function for Boyer Moore's
// bad character heuristic
void badCharelements(string str, int size, int badchar[NO_OF_CHARS])
{
   int i;
   for (i = 0; i < NO_OF_CHARS; i++)
      badchar[i] = -1;
   for (i = 0; i < size; i++)
      badchar[(int)str[i]] = i;
}
void boyerMorre(string txt, string pat){
   int m = pat.size();
   int n = txt.size();
   int flag;
   int badchar[NO_OF_CHARS];
   badCharelements(pat, m, badchar);
   int s = 0; // s is shift
   while (s <= (n - m)){
      int j = m - 1;
      while (j >= 0 && pat[j] == txt[s + j])
         j--;
      if (j < 0){
         cout << "Pattern occurs at INDEX = " << s << endl;
         flag = 1;
         s += (s + m < n) ? -badchar[txt[s + m]] : 1;
      }
      else
         s += max(1, j - badchar[txt[s + j]]);
   }
   if (flag == 0){
      cout << "Pattern is not present";
   }
}

int main(){
   string txt = "ABAAABCD";
   string pat = "ABC";
   boyerMorre(txt, pat);
   return 0;
}