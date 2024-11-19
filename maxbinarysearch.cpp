#include <iostream>
using namespace std;

int main()
{
    int A[5] = {10, 30, 110, 40, 33}; 
    int max = A[0]; 
    
    for(int i=1;i<5;i++) 
    {
        if(A[i]>max) 
        {
            max=A[i];
        }
    }
    cout<<max<<endl; 
    return 0; 
}