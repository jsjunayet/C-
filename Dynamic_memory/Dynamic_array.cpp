#include<bits/stdc++.h>
using namespace std;

int * fun (){
    int *y = new int[5];
    for(int i =0; i<4; i++){
        cout<< "fun funcation array index and value assign : " << i << " : ";
        cin >> y[i];
    }
    return y;
   
}
int main (){
    int *x = fun();
    for(int i =0; i<4; i++){
        cout<< "main funcation array index and value show for fun funcation : " << i << " , " << x[i] <<endl;
    }
    return 0;
}