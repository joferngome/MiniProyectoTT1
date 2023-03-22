//
// Created by joferngome on 15/03/2023.
//


#include "vector.h"
#include "cmath"

using namespace std;


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

double crossProduct(double v_A[], double v_B[], double c_P[], int n1, int n2, int n3) {

    if (n1 != n2 && n2 != n3 && n3 != 3)
        throw "different dimension vectors";

    c_P[0] = v_A[1] * v_B[2] - v_A[2] * v_B[1];
    c_P[1] = -(v_A[0] * v_B[2] - v_A[2] * v_B[0]);
    c_P[2] = v_A[0] * v_B[1] - v_A[1] * v_B[0];
    return c_P[0] + c_P[1] + c_P[2];




}
