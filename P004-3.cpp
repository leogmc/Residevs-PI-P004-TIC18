#include <iostream>
#include <limits>
#include <iomanip>
using namespace std;
int main(void){
    cout<<"a)" << endl
    << "Menor valor em int: "<<numeric_limits<int>::lowest() << endl
    << "Maior valor em int: "<<numeric_limits<int>::max() <<endl;

    cout<<"b)" << endl;
    
    unsigned long int uli = numeric_limits<unsigned long>::max();

    cout<< "Menor valor em long int: "<<numeric_limits<unsigned long int>::lowest() << endl
        << "Maior valor em long int: "<<numeric_limits<unsigned long int>::max() <<endl;
    
    long int li = uli;
    
    uli=li;

    cout<<"uli: "<<uli<< endl;//imprime -> uli: 18446744073709551615
    cout<<"li: "<<li<< endl;//imprime -> li: -1
    cout<<"O valor de [li] náo imprime o valor esperado."<<endl
    <<"Isso ocorre porque o valor de [uli] é o maior que pode ser representado por um long int."<<endl;

    return 0;
}   