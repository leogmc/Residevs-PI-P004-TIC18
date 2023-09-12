#include <iostream>
#include <limits>
#include <iomanip>
using namespace std;
int main(void){

    cout<<"Inteiros podem representar booleanos"<<endl;    
    if(1)
        cout<<"No caso desse if o numero 1 indica=true"<<endl;
    if(2)
        cout<<"No caso desse if o numero 2 indica=true"<<endl;
    if(100)
        cout<<"Numeros diferentes de 0 indicam=true"<<endl;
    if(!0)
        cout<<"No caso desse if o numero 0 indica=false"<<endl;

    cout<<"Chars podem representar booleanos"<<endl;    
    if('1')
        cout<<"No caso desse if o char '1' indica=true"<<endl;
    if('2')
        cout<<"No caso desse if o char '2' indica=true"<<endl;
    if('f')
        cout<<"No caso desse if o char 'f' indica=true"<<endl;
    if('t')
        cout<<"No caso desse if o char 't' indica=true"<<endl;
    if('q')
        cout<<"Char diferente de '0' indica=true"<<endl;
    if(!'0')
        cout<<"No caso desse if o char '0' indica=false"<<endl;

    cout<<"Floats podem representar booleanos."<<endl;    
    if(1.0)
        cout<<"No caso desse if o float 1.0 indica=true"<<endl;
    if(0.1)
        cout<<"No caso desse if o float 0.1 indica=true"<<endl;
    if(!0.0)
        cout<<"No caso desse if o float 0.0 indica=false"<<endl;

    cout<<"Pode-se concluir que Zero equivale a false e enquanto que valores diferentes de zero equivale a true"<<endl;
    return 0;
}   