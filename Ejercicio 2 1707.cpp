#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
    vector<int> numeros;

    cout<<"ingresar 15 numeros:"<<endl;
    for (int i=0;i<15;i++){
        int numero;
        cin >> numero;
        numeros.push_back(numero);
    }

    sort(numeros.begin(), numeros.end(), greater<int>());

    cout << "los numeros de mayor a menor son: "<<endl;
    for (vector<int>::iterator it=numeros.begin(); it!=numeros.end(); ++it) {
        cout<<*it<<" ";
    }
    cout<<endl;

    sort(numeros.begin(), numeros.end());

    cout << "los numeros de menor a mayor son: "<<endl;
    for (vector<int>::iterator it = numeros.begin(); it!=numeros.end(); ++it) {
       cout<<*it<<" ";
    }
    cout<<endl;

    return 0;
}