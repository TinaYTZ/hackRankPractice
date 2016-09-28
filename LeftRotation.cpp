#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,d;
    cin>>n>>d;
    if(d>n){d=d%n;}
    vector <int> arr(n);
    vector <int> D(d);
    
    for(int i=0; i<n;i++)
        { cin>>arr[i];
         if(i<d)
         {D[i]=arr[i];}
    }
    
/*    for(int i=0;i<n-d;i++){
        arr[i]=arr[d];
    }
    int k=0;
    for(int j=n-d;j<n;j++){
         
            arr[j]=D[k];
            k++;
    }
  */  
    for(int i=d; i<n;i++)
        { cout<<arr[i]<<" ";
        
    }
    for(int i=0; i<d;i++)
        {cout<<D[i]<<" ";}
    
    return 0;
}
