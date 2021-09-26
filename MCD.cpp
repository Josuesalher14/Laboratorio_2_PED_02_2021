#include <iostream>
#include <stdlib.h>

using namespace std;

int euclides(int a, int b){
    
    if(a==0){
        return b;
    }
    return euclides(b % a, a);
}

int main(){
    int a, b;
    
    cout << "		" << "M.C.D. POR METODO DE EUCLIDES" << endl << endl;
    
    cout << "ingrese el primer numero entero: ";
    cin >> a;
    
    cout << "ingrese el segundo numero entero: ";
    cin >> b;
    
    system("CLS");
    
    cout << "El M.C.D. es: " << euclides (a, b) << endl;
    
    return 0;
}
