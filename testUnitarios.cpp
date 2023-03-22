//
// Created by joferngome on 15/03/2023.
//

#include <iostream>
#include "cmath"
#include "vector.h"

using namespace std;



int main(){

    double v[]={1,1,1};
    if(norm(v,3)-sqrt(3.0)<pow(10,-12)) //Definiendo la igualdad mirando la precisión. Restando y mirando que sea menor a un numero muy pequeño
        cout<<"Test norm(): passed"<<endl;
    else
            cout<<"Test norm(): failed"<<endl;


    double v1[] ={1,1,2}, v2[]={1,2,3};
    if(dot(v1,v2,3,3)-9.0<pow(10,-12))
        cout<<"test dot() passed"<<endl;
    else
        cout<<"Test dot() failed";

    double v3[] ={1, 2, 3}, v4[]={4,9,2},v5[3];

    if(crossProduct(v3,v4,v5,3,3,3)==-12.0){
        cout<<"test cross() passed"<<endl;



    }






    return 0;

}

