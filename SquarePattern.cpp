#include <bits/stdc++.h>

using namespace std;



    void printSquare(int n) {
       int i=0;
        while(i<n){
            int j=0;
            while(j<n){
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
    printSquare(n);
    
    return 0;
}

