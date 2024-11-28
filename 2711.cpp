#include<iostream>
using namespace std;
int main{
void INSERTFRONT(int val)
{
    if (F==R+1 || (F==0 && R=N-1))
    {
        overflow_error;
    }
    else 
    {
        if (F==-1 && R ==-1)
        {
            F=0;
            R=0;
            DQ[F]=val;
        }
        else
        {
            if (F==0)
            {
                F=N-1;
                DQ[F]=VAL;
            }
            else
            {
                F=F-1;
                DQ[F]=val;
            }
        }
    }
}
}