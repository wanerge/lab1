#include <iostream>

using namespace std;

int main()
{
    char let;
    int elec = 1, num1, num2,num3,num4;
    double num5;
    while (elec != 0) {
        cout << "Que problema desea ver (1-17), para salir ingrese 0: ";
        cin >> elec;
        switch (elec) {
            case 1:
                cout << endl << "Ingrese un caracter: ";
                cin >> let;
                if ((let >=65 && let <= 90) || (let >= 97 && let <=122)) {
                    if (let == 'A' || let == 'E' || let == 'I' || let == 'O' || let == 'U' || let == 'a' || let == 'e' || let == 'i' || let == 'o' || let == 'u') {
                        cout << let << " es una vocal" << endl;
                    }
                    else {
                        cout << let << " es una consonante" << endl;
                    }
                }
                else {
                    cout << "no es una letra" << endl;
                }
            break;

            case 2:
                cout << endl << "Ingrese un valor: ";
                cin >> num1;
                for (int num=50000, i=0; i < 10; i++) {
                    if (i == 1 || i == 4 || i == 7) {
                        num = (num*2)/(5);
                    }
                    else if(i != 0){
                        num /= 2;
                    }
                    cout << num << ": " << (num1/num) << endl;
                    num1 -= ((num1/num)*num);
                }
                cout << "Faltante: " << num1 << endl;
            break;

            case 3:
                cout << endl << "Ingrese un mes: ";
                cin >> num1;
                cout << "Ingrese un dia del mes: ";
                cin >> num2;
                if (num1 == 1 || num1 == 3 || num1 == 5 || num1 == 7 || num1 == 8 || num1 == 10 || num1 == 12) {
                    if (num2 >=1 && num2 <= 31) {
                        cout << num2 << "/" << num1 << " es una fecha valida." << endl;
                    }
                    else {
                        cout << num2 << "/" << num1 << " es una fecha invalida." << endl;
                    }
                }
                else if(num1 == 4 || num1 == 6 || num1 == 9 || num1 == 11) {
                    if (num2 >=1 && num2 <= 30) {
                        cout << num2 << "/" << num1 << " es una fecha valida." << endl;
                    }
                    else {
                        cout << num2 << "/" << num1 << " es una fecha invalida." << endl;
                    }
                }
                else if (num1 == 2) {
                    if (num2 >=1 && num2 <= 29) {
                        if (num2 == 29) {
                            cout << num2 << "/" << num1 << " es valida en bisiesto." << endl;
                        }
                        else {
                            cout << num2 << "/" << num1 << " es una fecha valida." << endl;
                        }
                    }
                    else {
                        cout << num2 << "/" << num1 << " es una fecha invalida." << endl;
                    }
                }
                else {
                    cout << num1 << " es un mes invalido." << endl;
                }
            break;

            case 4:
                cout << endl << "Ingrese numero: ";
                cin >> num1;
                cout << "Ingrese otro numero: ";
                cin >> num2;
                num3 = num1%100;
                num4 = num2%100;
                num1 -= num3;
                num2 -= num4;
                if (!((num1 >= 0 && num1 < 2400) &&  (num3 >= 0 && num3 < 60))) {
                    cout << num1+num3 << " es un tiempo invalido." << endl;
                }
                else if (!((num2 >= 0 && num2 < 2400) && (num4 >= 0 && num4 < 60))) {
                    cout << num2+num4 << " es un tiempo invalido." << endl;
                }
                else {
                    cout << "La hora es ";
                    if ((num3+num4) >= 60) {
                        num3 += num4-60;
                        num1 += 100;
                    }
                    else {
                        num3 += num4;
                    }
                    if ((num1+num2) >= 2400) {
                        num1 += num2-2400;
                    }
                    else {
                        num1 += num2;
                    }
                    cout << (num1+num3) << endl;
                }
            break;

            case 5:
                cout << endl << "Ingrese numero: ";
                cin >> num1;
                if ((num1%2) == 0) {
                    num1--;
                }
                num2 = ((num1-1)/2);
                for (int i = 0, k = 0 ; i < num1 ; i++ ) {
                    for (int j = 0; j <= num1 ; j++ ) {
                        if (j < (num2-k) || j > (num2+k)) {
                            cout << ' ';
                        }
                        else {
                            cout << '*';
                        }
                    }
                    cout << endl;
                    if (i < (num2)) {
                        k++;
                    }
                    else {
                        k--;
                    }
                }
            break;

            case 6:
                cout << endl << "Ingrese numero: ";
                cin >> num1;
                num5 = 1.0;
                for (int i = 1, acum = 1; i < num1 ;i++ ) {
                    acum *= i;
                    num5 += (1/double(acum));
                }
                cout << "e es aproximadamente: " << num5 << endl;
            break;

            case 7:
                cout << endl << "Ingrese numero: ";
                cin >> num1;
                num2 = 0;
                for (int sum = 0, ant = 0, nuevo = 1; sum < num1 ; ) {
                    if ((sum%2) == 0) {
                        num2 += sum;
                    }
                    sum = (ant+nuevo);
                    ant = nuevo;
                    nuevo = sum;
                }
                cout << "El resultado de la suma es: " << num2 << endl;
            break;

            default:
                if (elec != 0) {
                    cout << "Ingrese un valor correcto" << endl;
                }
        }
    }
    return 0;
}
