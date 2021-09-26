#include <iostream>

using namespace std;


void contador(int i, int n){
    
        cout << i << endl;
        i = i + 1;
        if(i<=n){
        	contador(i, n);
        	i = i - 1;
        	cout << i << endl;
    	}

}

int main(){
    int cant;
    
    cout << "Ingrese un numero entero: ";
    cin >> cant;
    
    contador(1, cant);

return 0;

}
