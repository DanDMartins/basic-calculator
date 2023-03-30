#include <bits/stdc++.h>
using namespace std;

int main(){

int num1;
int num2;
int resultado;
char op;

cout << "Digite o primeiro numero: " << endl;
cin >> num1;
cout << "Digite a operacao ";
cin >> op;
cout << "Digite o segundo numero: " << endl;
cin >> num2;

if(op == '+'){
    cout << "O Resultado e = " << num1 + num2 << endl;
}

else if(op == '-'){
    cout << "O Resultado e = " << num1 - num2 << endl;
}

else if(op == '*'){
    cout << "O Resultado e = " << num1 * num2 << endl;
}

else if(op == '/'){
    cout << "O Resultado e = " << num1 / num2 << endl;
}
    return 0;


}
