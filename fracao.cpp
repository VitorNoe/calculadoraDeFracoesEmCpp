#include <iostream>
#include <string>
using namespace std;
int n1, d1, n2, d2, r1, r2;
    char operador;
void somaf() {
    
    int soma;
    if (d1 == d2) {
        cout << "entrou\n";
        soma = n1 + n2; 
        r1 = soma;
        r2 = d1;
        
    }else{
        
        r2 = d1 * d2;
        r1 = (n1 * d2) + (n2 * d1);

    }
} 

void substracaof() {
    int substracao;
    if (d1 == d2) {

        substracao = n1 - n2; 
        r1 = substracao;
        r2 = d1;
        
    }
    else {
        r2 = d1 * d2;
        r1 = (n1 * d2) - (n2 * d1);
    }


}

void multiplicacaof() {
    r1 = n1 * n2;
    r2 = d1 * d2;
}

void divisaof() {
    r1 = n1 * d2;
    r2 = d1 * n2;
}

void simplifica(){
    int i = 0;
    while (i != 1)
    {
        if(r1 % 2 == 0 && r2 % 2 == 0){
            r1 =  r1 /2;
            r2 = r2 /2;
        }else if(r1 % 3 == 0 && r2 % 3 == 0){
            r1 =  r1 /3;
            r2 = r2 /3;
        }else if(r1 % 5 == 0 && r2 % 5 == 0){
            r1 =  r1 /5;
            r2 = r2 /5;
        }else{
            i++;
        }
    }
    
}

int main() {
    
    
    cout << "Digite o numerador da primeira fração:\n";
    cin >> n1;
    cout << "Digite o numerador da primeira fração:\n";
    cin >> d1;
    cout << "Digite o numerador da segunda fração:\n";
    cin >> n2;
    cout << "Digite o denominador da segunda fração:\n";
    cin >> d2;
    cout << "Escolha a operação (+, -, *, /):\n";
    cin >> operador;
    switch (operador)
    {
    case '+':
        somaf();
        simplifica();
        cout << r1 << "/" << r2 << endl;
        break;

    case '-':
        substracaof();
        simplifica();
        cout << r1 << "/" << r2 << endl;
        break;

    case '*':
        multiplicacaof();
        simplifica();
        cout << r1 << "/" << r2 << endl;
        break;

    case '/':
        divisaof();
        simplifica();
        cout << r1 << "/" << r2 << endl;
        break;

    default:
        break;
    }
}