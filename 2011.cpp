#include<iostream>
using namespace std;
int main()
{
    cout<<"BINARY SEARCH"<<endl;
    int ARR[3]={1,2,3};

    for (int i = 0; i < 3; i++)
    {
        cout<<i+1;
    }
    int l=0, h=2;
    while (l<=h)
    {
        int m =(l+h)/2;
        if (ARR[m] == w)
        {
            cout<<"FOUND:"<<endl;
            break;
        }
        else
        {
            if (ARR[m]>target)
            {
                h = m-1;
            }
            else
            {
                l = m+1;
            }
        }
    }
    if (l>h)
    {
        cout<<"UNSUCESS"<<endl;
    }
    return 0;
}