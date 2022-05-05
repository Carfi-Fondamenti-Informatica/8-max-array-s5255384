#include<iostream>
#include"lib.h"

using namespace std;

int main(){

    int x;
    float y,result;
    cin>>x;
    float array[x];

    for(int i=0; i<x; i++){
        cin>>y;
        array[i]=y;
    }
    
    result=Numeri(array, x);
    cout<<result<<endl;
    
    
    return 0;
}
