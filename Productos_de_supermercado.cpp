#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    int opcion, cantidad;
    double total = 0.0;

    cout << "🛍️ Bienvenido al supermercado\n";
    cout << "1) Leche ($150)\n";
    cout << "2) Pan ($100)\n";
    cout << "3) Queso ($300)\n";
    cout << "4) Fideos ($200)\n";
    cout << "5) Terminar compra\n";

    do {
        cout << "\nSeleccioná un producto (1-5): ";
        cin >> opcion;

        switch(opcion) 
        {
            case 1:
                cout << "¿Cuántas unidades de leche? ";
                cin >> cantidad;
                total += cantidad * 150;
                break;
            case 2:
                cout << "¿Cuántas unidades de pan? ";
                cin >> cantidad;
                total += cantidad * 100;
                break;
            case 3:
                cout << "¿Cuántas unidades de queso? ";
                cin >> cantidad;
                total += cantidad * 300;
                break;
            case 4:
                cout << "¿Cuántas unidades de fideos? ";
                cin >> cantidad;
                total += cantidad * 200;
                break;
            case 5:
                cout << "\n🧾 Finalizando compra...\n";
                break;
            default:
                cout << "Opción inválida.\n";
        }

    } while(opcion != 5);

    cout << fixed << setprecision(2);
    cout << "Total a pagar: $" << total << endl;
    cout << "¡Gracias por tu compra!\n";

    return 0;
}
