#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        string str;
        cin>>str;
        vector<int> vect;
        int flag=0;
        for(int i=0;i<N;i++)
        {
            if(str=='1')
            vect.push_back(i);
            
        }
        for(int i=0;i<vect.end();i++)
        {
          if((i-(vect.end()-1))%2!=0)
          {
              flag=1;
              break;
          }
        }
        if(flag)
        cout<<"1"<<endl;
        else
        cout<<"2"<<endl;
    }
    return 0;
}