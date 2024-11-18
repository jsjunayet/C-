#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cout<<"enter your array lenght : ";
    cin>>n;
    int a[n];
    for(int i =0; i<n; i++){
        cout<<"this is your index : " << i << " : ";
        cin>>a[i];
    }
    for(int i =0; i<n; i++){
        cout<<"this is your index : " << i << " : "<< "and output : " << a[i] << endl;
    }
}
