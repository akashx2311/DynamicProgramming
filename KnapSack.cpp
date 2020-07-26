#include<iostream>
using namespace std;

int Kanpsack(int w[],int val[],int wt,int n)
{
    
    if(wt==0 || n==0)
     {
        return 0;
     }
    if(w[n-1]<=wt)
     { 
        return  max(val[n-1]+Kanpsack(w,val,wt-w[n-1],n-1),Kanpsack(w,val,wt,n-1));
     }  
    else
    {
        return Kanpsack(w,val,wt,n-1);
    }
}

int main()
{
    int n;
        cin>>n;
    int w[n],val[n];
    for(int i=0;i<n;i++)
        cin>>w[i];
    for(int i=0;i<n;i++)
         cin>>val[i];
    int wt;
         cin>>wt;
    cout<<Kanpsack(w,val,wt,n)<<endl;
    return 0;
}