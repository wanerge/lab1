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

            case 8:
                cout << endl << "Ingrese numero: ";
                cin >> num1;
                cout << endl << "Ingrese numero: ";
                cin >> num2;
                cout << endl << "Ingrese numero: ";
                cin >> num3;
                num4 = 0;
                for (int i = num1; i < num3 ; i += num1) {
                    num4 += i;
                    cout << i;
                    if ((i+num1) < num3) {
                        cout << "+";
                    }
                }
                for (int j = num2; j < num3 ; ) {
                    if ((j%num1) != 0) {
                        num4 += j;
                        cout << "+" << j;
                    }
                    j += num2;
                }
                cout << " = " << num4 << endl;
            break;

            case 9:
                cout << endl << "Ingrese numero: ";
                cin >> num1;
                num2 = 0;
                for (int k; num1 > 0 ; num1 /= 10) {
                    k = (num1%10);
                    for (int i = 1, j = k ; i < j; i++ ) {
                        k *= j;
                    }
                    num2 += k;
                }
                cout << "El resultado de la suma es: " << num2 << endl;
            break;

            case 10:
                cout << endl << "Ingrese numero: ";
                cin >> num1;
                num2 = 0;
                for (int i=0, n_esimo=2, contador; i < num1 ; n_esimo++) {
                    contador = 1;
                    for (int divisor = 1; divisor <= (n_esimo/2) ;divisor++ ) {
                        if ((n_esimo%divisor) == 0) {
                            contador++;
                        }
                        if (contador>2) {
                            break;
                        }
                    }
                    num2 = n_esimo;
                    if (contador == 2) {
                        i++;
                    }
                }
                cout << "El primo numero " << num1 << " es: " << num2 << endl;
            break;

            case 11:
                cout << endl << "Ingrese numero: ";
                cin >> num1;
                num2=1; //num2 -> M.C.M(acumulado)
                for (int i = 2, cont; i <= num1 ;) {
                    cont = 2; //cont -> Divisor
                    if ((num2%i) != 0) {
                        for (; cont <= i ; cont++ ) {
                            if ((i%cont) == 0) {
                                num2 *= cont;
                                break;
                            }
                        }
                    }
                    else {
                        i++;
                    }
                }
                cout << "El minimo comun multiplo es: " << num2 << endl;
            break;

            case 12:
                cout << endl << "Ingrese numero: ";
                cin >> num1;
                num2 = 1;
                for (int i = (num1/2); i > 0 ; i--) {
                    if ((num1%i) == 0) {
                        num2 = 1;
                        for (int divisor = 2; divisor <= (i/2) ; divisor++ ) {
                            if ((i%divisor) == 0) {
                                num2 = 0;
                                break;
                            }
                        }
                        if (num2 != 0) {
                            num2 = i;
                            break;
                        }
                    }
                }
                cout << "El mayor factor primo de " << num1 << " es: " << num2 << endl;
            break;

            case 13:
                cout << endl << "Ingrese numero: ";
                cin >> num1;
                num2=0;
                for (int i = 2, j; i < num1 ; i++) {
                    j = 1;
                    for (int divisor = 2; divisor <= (i/2) ; divisor++ ) {
                        if ((i%divisor) == 0) {
                            j = 0;
                            break;
                        }
                    }
                    if (j != 0) {
                        num2 += i;
                    }
                }
                cout << "El resultado de la suma es: " << num2 << endl;
            break;

            case 14:
                num1=0;
                num2=0;
                for (int i = 999; i > 100 ; i--) {
                    for (int j = i; j > 100 ; j-- ) {
                        num1 = 0;
                        for (int k = (i*j); k>0 ; k/=10 ) {
                            num1 += (k%10);
                            if (k>9) {
                                num1 *= 10;
                            }
                        }
                        if ((i*j) == num1) {
                            if (num1 >= num2) {
                                num2 = num1;
                                num3 = i;
                                num4 = j;
                            }
                        }
                    }
                }
                cout << endl << num3 << "*" << num4 << "=" << num2 << endl;
            break;

            case 15:
                cout << endl << "Ingrese numero impar: ";
                cin >> num1;
                num2=0;
                for (int i=1, j=0,k=2; i <= (num1*num1) ;) {
                    num2 += i;
                    if (j == 4) {
                        j=0;
                        k+=2;
                    }
                    i += k;
                    j++;
                }
                cout << "En una espiral de " << num1 << "x" << num1 << ", la suma es: " << num2 << endl;
            break;

            case 16:
                cout << endl << "Ingrese numero: ";
                cin >> num1;
                num2=0;
                num3=0;
                for (int i = 2, cont; i < num1 ; i++ ) {
                    cont = 1;
                    for (int j = i; j > 1 ; ) {
                        if ((j%2) == 0) {
                            j /= 2;
                        }
                        else {
                            j = (3*j)+1;
                        }
                        cont++;
                    }
                    if (cont > num3) {
                        num2 = i;
                        num3 = cont;
                    }
                }
                cout << "La serie mas larga es con la semilla: " << num2 << ", teniendo " << num3 << " terminos" << endl;
                cout << num2 << ",";
                for (int i = num2; i > 1 ; ) {
                    if ((i%2) == 0) {
                        i /= 2;
                    }
                    else {
                        i = (3*i)+1;
                    }
                    if (i != 1) {
                        cout << i << ",";
                    }
                    else {
                        cout << i << endl;
                    }
                }
            break;

            case 17:
                cout << endl << "Ingrese numero: ";
                cin >> num1;
                num2 = 0;
                num3 = 0;
                num4 = 0;
                while (true) {
                    num2++;
                    num3 = ((num2*(num2+1))/2);
                    num4 = 1;
                    for (int i = 1; i <= (num3/2) ;i++ ) {
                        if ((num3%i) == 0) {
                            num4++;
                        }
                    }
                    if (num4 > num1) {
                        break;
                    }
                }
                cout << "El numero es: " << num3 << " que tiene " << num4 << " divisores" << endl;
            break;

            default:
                if (elec != 0) {
                    cout << "Ingrese un valor correcto" << endl;
                }
        }
    }
    return 0;
}
