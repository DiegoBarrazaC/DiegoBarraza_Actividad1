#include <iostream>
using namespace std;

int main() {
    int edad;
    cout<<"Ingrese un valor: ";
    cin>>edad;
    if(edad > 17)
    {
        cout<<"Es mayor de edad " << endl;
    }else{
        cout<<"Es menor de edad " << endl;
    }
    system("pause");
    return 0;
}