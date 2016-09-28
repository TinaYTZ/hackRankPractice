#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N;
    cin>>N;
    //cout<<N;
    vector <string> array(N);
    for(int i=0;i<N;i++){
        cin>>array[i];
    //    cout<<array[i]<<endl;
    }
    int n;
    cin>>n;
    //cout<<n<<endl;
    vector <string> q(n);
    vector <int> qr(n);
    for(int i=0;i<n;i++)
        {
        cin>>q[i];
     //   cout<<q[i]<<endl;
    }

    for (int i=0;i<n;i++){
        qr[i]=0;
        for(int j=0;j<N;j++)
            {if (array[j]==q[i])qr[i]++;}
        cout<<qr[i]<<endl;
    }
    
        return 0;

}