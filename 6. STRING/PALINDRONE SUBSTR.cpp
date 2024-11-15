import java.io.*;
import java.util.*;
public class Main {
  public static void solution(String str,int[] arr,int n) {
      int count=0;
    for (int i = 0 ; i < str.length(); i++) {
      for (int j = i + 1; j <= str.length(); j++) {
        if (isPalindrome(str.substring(i, j))) {
            for(int k=0; k<n;k++ ) {  
               if(str.substring(i, j).length()==arr[k]){    
                   count++;
               }
            }
        }
      }
    }System.out.println(count);
  }
  public static boolean isPalindrome(String str) {
    int i = 0, j = str.length() - 1;
    while (i < j) {
      if (str.charAt(i) != str.charAt(j)) {
        return false;
      }
      i++;j--;
    }
    return true;
  }
  public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);  
    int n;
    n=sc.nextInt();  
    int[] arr = new int[10];  
    for(int i=0; i<n; i++){  arr[i]=sc.nextInt();  } 
    Scanner scn = new Scanner(System.in);
    String str = scn.next();
    solution(str,arr,n);
  }
}