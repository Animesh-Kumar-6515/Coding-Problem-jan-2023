#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        s.erase(remove(s.begin(),s.end(),'.'),s.end());
        
        if(s.size()==0)
        {
            cout<<"Valid"<<endl;
            continue;
        }
        if(s.size()%2!=0)
        {
            cout<<"Invalid"<<endl;
            continue;
        }
        bool is_valid=true;
        for(int i=0;i<s.size();i+=2)
        {
            
            if(s[i]!='H' || s[i+1]!='T')
            {
                is_valid=false;
                break;
            }
        }
        
        if(is_valid)
        cout<<"Valid"<<endl;
        else
        cout<<"Invalid"<<endl;
    }
    return 0;
}
