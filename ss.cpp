#include<bits/stdc++.h>
using namespace std;
 void ssort(int a[],int n)
 {
    int i,j,c=0,s=0;
    for(i=0;i<n-1;i++)
    {
        int min=i;
        for(j=i+1;j<n;j++)
        {
            c++;
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        swap(a[min],a[i]);
        s++;
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"swaps required :"<<s<<endl;
    cout<<"comparison req :"<<c<<endl;
}
 int main()
 {
    int n,a[100],i,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ssort(a,n);

}

