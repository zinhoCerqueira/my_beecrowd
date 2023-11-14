#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    
    float n1, n2, n3, n4;
    
    cin >> n1;
    cin >> n2;
    cin >> n3;
    cin >> n4;

    float media = ((n1*2)+(n2*3)+(n3*4)+(n4))/10;
    
    cout << fixed << setprecision(1);
    cout << "Media: " << media << endl;
    if(media >= 7.0){
        cout << "Aluno aprovado." << endl;
    }
    else if (media < 5.0){
        cout << "Aluno reprovado." << endl;
    }
    else{
        cout << "Aluno em exame." << endl;
        float exame;
        cin >> exame;
        cout << "Nota do exame: "<< exame << endl;
        if((media + exame)/2 >= 5.0 ){
            cout << "Aluno aprovado." << endl;
            cout << "Media final: " << (media + exame)/2 << endl;
        }
        else{
            cout << "Aluno reprovado." << endl;
            cout << "Media final: " << (media + exame)/2 << endl;
        }
    }
    
    
    
    return 0;
}