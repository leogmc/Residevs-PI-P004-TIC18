#include <iostream>
#include <limits>
#include <cmath>
#include <iomanip>
using namespace std;
int main(void){
    cout<<"a)" << endl
    << "Menor valor em float: "<<numeric_limits<float>::lowest() << endl
    << "Maior valor em float: "<<numeric_limits<float>::max() <<endl;

    float pif = M_PI;
    double pid = M_PI;
    
    cout<<"b)"<< endl
    << setprecision(50) << pif << endl
    << setprecision(50) << pid << endl;
    
    cout<<"c), d) e e)"<< endl
    <<"Pi: 3.14"<<endl
    <<"pif 2: "<< setprecision(3) << pif << endl
    <<"pid 2: "<< setprecision(3) << pid << endl
    <<"Pi: 3.1415"<<endl
    <<"pif 4: "<< setprecision(5) << pif << endl
    <<"pid 4: "<< setprecision(5) << pid << endl
    <<"Pi: 3.14159265"<<endl
    <<"pif 8: "<< setprecision(9) << pif << endl
    <<"pid 8: "<< setprecision(9) << pid << endl
    <<"Pi: 3.1415926535897932"<<endl
    <<"pif 16: "<<setprecision(17) << pif << endl
    <<"pid 16: "<<setprecision(17) << pid << endl
    <<"Pid manteve uma melhor precisao. "<< endl<< endl;

    cout<<"f)" << endl
    << "Menor valor em double: "<<numeric_limits<double>::lowest() << endl
    << "Maior valor em double: "<<numeric_limits<double>::max() <<endl
    << "Menor valor em long double: "<<numeric_limits<long double>::lowest() << endl
    << "Maior valor em long double: "<<numeric_limits<long double>::max() <<endl
    << "O tipo long double eh o tipo de ponto flutuante com maior precisao."<<endl;

    return 0;
}   
    

    


//}