#include<iostream>
using namespace std;
 int Knapsack(int w[],int v[],int W,int n)
 {
   int t[n][W];
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<W;j++)
        t[i][j]=-1;
    }
    
   if(n==0 || W==0)
   return t[n][W]=0;
     if(t[n][W]!=-1)
      return t[n][W];
   if(w[n-1]>=W)
    return t[n][W]= max(v[n-1]+Knapsack(w,v,W-w[n-1],n-1),Knapsack(w,v,W,n-1));
    else
        return t[n][W]=Knapsack(w,v,W,n-1);
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
    cout<<Knapsack(w,val,wt,n)<<endl;
    return 0;
}