#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N;
    int Q;
    int lastAns=0;
    int mode;
    cin>>N>>Q;
    vector< vector<int> > seqlist(N,vector<int>());
    vector<int > row(N);
    for(int i=0;i<Q;i++){
        int x,y;
        cin>>mode>>x>>y;
       // cout<<mode<<"   "<<x<<"   "<<y<<endl;
        if(mode==1){
            int seq=(x^lastAns)%N;
            row=seqlist[seq];
           // cout<<"mode1 push"<<seq<<"  "<<"y="<<y<<endl; 
            seqlist[seq].push_back(y);
            
        }
        if(mode==2){
            //cout<<"mode 2";
            int seq=(x^lastAns)%N;
           // cout<<"seq="<<seq<<"   size="<<seqlist[seq].size()<<endl;
            int yy=y%(seqlist[seq].size());
           // cout<<"yy="<<yy<<"seqlist[seq][yy]"<<seqlist[seq][yy]<<endl;
            lastAns=seqlist[seq][yy];
            cout<<lastAns<<endl;
            
        }
        
    }
   // cout<<seqlist[0][0]<<"  "<<seqlist[0][1];
    return 0;
}