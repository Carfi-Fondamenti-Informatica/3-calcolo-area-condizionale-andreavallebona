#include <iostream>
using namespace std;
int main() {
    float a=0, b=0, area=0;
    int opzione=0;
    cin >> a >> b;
    cin >> opzione;

    switch (opzione){
        case 0:
            area=(a*b)/2;
            break;
        case 1:
            area=(a*a);
            break;
        case 2:
            area=(a*b);
            break;
        default:
            cout << "opzione non valida" << endl;
    }
    cout << area << endl;
    return 0;
}
