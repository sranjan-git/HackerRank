#include<iostream>
using namespace std;

void changer(int &a, int &b)
{
    int Olda = a;
    a = a+b;
    if (Olda > b){
        b = Olda  - b;
    }
    else{
        b = b - Olda;
    }
    
}

int main(){
    int a, b;
    cin >> a >> b;
    int *aPointer = &a;
    int *bPointer = &b;
    changer(a,b);
    cout << a << "\n" << b;

return 0;
}
