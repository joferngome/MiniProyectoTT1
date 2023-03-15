//
// Created by joferngome on 15/03/2023.
//


#include "vector.h"
#include "math.h"

double norm(double v[],int n){
    double suma;
    int i;

    if(n<=0)
        throw "Empty vector";

    for(i = 0; i< n;i++)
        suma+=v[i]*v[i];
    return(sqrt(suma));



}
//Los vectores tienen la misma dimension.
double dot(double v1[],double v2[],int n1,int n2){

    double suma=0;
    int i;

    if(n1!=n2)
        throw "different dimension vectors";

    for(i=0;i<n1;i++)
        suma+=v1[i]*v2[i];
    return suma;




}
