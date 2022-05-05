#include<iostream>
#include"lib.h"

using namespace std;

float Numeri (const float array[], int dim){

    float num=0;

    for(int i=0;i<dim; i++){
        if(array[i]>num)
            num=array[i];
    }

   return num;
}
