#include <bits/stdc++.h>

using namespace std;



    void printTriangle(int n) {
        int i=1;
        while(i<=n){
            int j=0;
            while(j<i){
                cout<<"*"<<" ";
                j++;
            }
            cout<<endl;
            i++;
        } 
     
    }



int main() {
    int n;
    cin>>n;
    printTriangle(n);
    
    return 0;
}

