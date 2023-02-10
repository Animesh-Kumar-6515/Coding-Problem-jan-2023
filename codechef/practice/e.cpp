#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int xin=0;
        vector<int>v;
        int z=0,f=0,r=0;
        set<int>m0,m5;
        map<int,int>c;
        map<int,vector<int>>m;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(a%10==0)
            z=1;
            else if(a%10==5)
            f=1;
            else
            r=1;
            if(a%10==0)
            m0.insert(a);
            else if(a%10==5)
            m5.insert(a);
            if(c[a]==0)
            {
                v.push_back(a);
                m[a%10].push_back(a);
            }
            c[a]++;
        }
        if(r==1&&(f==1||z==1))
        cout<<"No"<<endl;
        else if(r==1)
        {
            sort(v.begin(),v.end());
            if(m[1].size()>m[3].size()>m[7].size()>1||m[9].size()>1){
                cout<<"No"<<endl;
            }
            else
            {
                if(m[1].size()==1)
                m[2].push_back(m[1][0]+1);
                if(m[3].size()==1)
                m[6].push_back(m[3][0]+3);
                if(m[7].size()==1)
                m[4].push_back(m[7][0]+7);
                if(m[9].size()==1)
                m[8].push_back(m[9][0]+9);
                for(int i=0;i<m[2].size();i++)
                {
                    if(xin<1){
                    m[8].push_back(m[2][i]+6);
                    }
                    else{
                        cout<<-1<<endl;
                    }
                }
                for(int i=0;i<m[4].size();i++)
                {
                    if(xin<1){
                    m[8].push_back(m[4][i]+4);
                    }
                    else{
                        cout<<-1<<endl;
                    }
                }
                for(int i=0;i<m[6].size();i++)
                {
                    m[8].push_back(m[6][i]+12);
                }
                map<int,int>tf;
                vector<int>vf;
                for(int i=0;i<m[8].size();i++)
                {
                    if(tf[m[8][i]]==0)
                    {
                        tf[m[8][i]]++;
                        vf.push_back(m[8][i]);
                    }
                }
                sort(vf.begin(),vf.end());
                int check=0;
                for(int i=1;i<vf.size();i++)
                {
                    if(vf[i]!=vf[i-1]+20)
                    check=1;
                }
                if(check){
                    if(xin<1){
                    cout<<"No"<<endl;
                }
                else{
                    cout<<-1<<endl;
                }
                }
                else{
                    if(xin<1){
                    cout<<"Yes"<<endl;
                }
                else{
                    cout<<-1<<endl;
                }
                }
            }
        }
        else if(f==1&&z==0)
        cout<<"Yes"<<endl;
        else if(f==0&&z==1)
        {
            if(m0.size()==1){
                if(xin<1){
                    cout<<"Yes"<<endl;
                }
                else{
                    cout<<-1<<endl;
                }
            }
            else{
                if(xin<1){
                    cout<<"No"<<endl;
                }
                else{
                    cout<<-1<<endl;
                }
            }
        }
        else if(f==1&&z==1)
        {
            if(m0.size()>1)
            cout<<"No"<<endl;
            else 
            {
                if(*m0.begin()>=*m5.rbegin()){
                    if(xin<1){
                    cout<<"Yes"<<endl;
                    }
                    else{
                        cout<<-1<<endl;
                    }
                }
                else{
                    if(xin<1){
                    cout<<"No"<<endl;
                    }
                    else{
                        cout<<-1<<endl;
                    }
                }
            }
        }
    }
}