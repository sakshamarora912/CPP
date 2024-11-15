#include <iostream>  
using namespace std;  
  
int main ()  {  
    int arr[] = {9,8,7,6,5,4,3,2,1}, temp, i, j;  
    int num =sizeof(arr) / sizeof(arr[0]);
    for ( i = 0, j = num - 1; i < num/2; i++, j--)  
    {     
        temp = arr[i];  
        arr[i] = arr[j];  
        arr[j] = temp;  
    }  
    for ( i = 0; i < num; i++)  {  
        cout << arr[i] << " ";  
    }  
    return 0;  
}  