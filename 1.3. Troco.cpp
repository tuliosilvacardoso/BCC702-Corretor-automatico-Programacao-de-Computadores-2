#include <iostream>
using namespace std;
int main(){
    int n, n100, n20, n5, n1;
    cin >> n;
    n100 = n/100;
    n20 = (n%100)/20;
    n5 = ((n%100)%20)/5;
    n1 = (((n%100)%20)%5)/1;

cout << "Notas de 100: " << n100 << endl;
cout << "Notas de 20: " << n20 << endl;
cout << "Notas de 5: " << n5 << endl;
cout << "Notas de 1: " << n1 << endl;
return 0;

}
