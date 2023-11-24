#include<iostream>
#include<stdio.h>

using namespace std;

double rec( int marcador, int chegada){
    double response;

    cout << "Marcador -> " << marcador << endl; 
    if(marcador != chegada){
        
        double value = marcador;
        marcador++;
        response =  value + (1 / (rec(marcador, chegada)));
        
    }
    else{
        response = marcador + (1 / marcador);
    }

    cout << "Response -> " << response << endl;
    return response;
}

int main(){
    int chegada;
    double resp = 0;
    int marcador = 1;

    cin >> chegada;



    resp = rec(marcador, chegada);

    printf("%.10lf\n",resp);


}

