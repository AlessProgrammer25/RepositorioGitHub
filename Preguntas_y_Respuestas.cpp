#include <iostream>
using namespace std;

int main() {
    int correctas = 0;
    int respuesta;

    cout << "Cuestionario de conocimiento general\n\n";

    cout << "1. ¿Cuál es la capital de Francia?\n";
    cout << "1) Berlín\n2) Madrid\n3) París\n";
    cin >> respuesta;
    if (respuesta == 3) {
        cout << "✅ ¡Correcto!\n\n";
        correctas++;
    } else {
        cout << "❌ Incorrecto. La respuesta correcta es París.\n\n";
    }


    cout << "2. ¿Cuántos planetas hay en el sistema solar?\n";
    cout << "1) 8\n2) 9\n3) 7\n";
    cin >> respuesta;
    if (respuesta == 1) {
        cout << "✅ ¡Correcto!\n\n";
        correctas++;
    } else {
        cout << "❌ Incorrecto. La respuesta correcta es 8.\n\n";
    }

    cout << "3. ¿Quién escribió 'Don Quijote de la Mancha'?\n";
    cout << "1) Gabriel García Márquez\n2) Miguel de Cervantes\n3) Shakespeare\n";
    cin >> respuesta;
    if (respuesta == 2) {
        cout << "✅ ¡Correcto!\n\n";
        correctas++;
    } else {
        cout << "❌ Incorrecto. La respuesta correcta es Miguel de Cervantes.\n\n";
    }

    cout << "4. ¿Cuál es el resultado de 9 x 7?\n";
    cout << "1) 56\n2) 63\n3) 72\n";
    cin >> respuesta;
    if (respuesta == 2) {
        cout << "✅ ¡Correcto!\n\n";
        correctas++;
    } else {
        cout << "❌ Incorrecto. La respuesta correcta es 63.\n\n";
    }

    cout << "5. ¿Cuál es el elemento químico H?\n";
    cout << "1) Helio\n2) Hidrógeno\n3) Hierro\n";
    cin >> respuesta;
    if (respuesta == 2) {
        cout << "✅ ¡Correcto!\n\n";
        correctas++;
    } else {
        cout << "❌ Incorrecto. La respuesta correcta es Hidrógeno.\n\n";
    }

    cout << "📊 Respuestas correctas: " << correctas << "/5\n";
    cout << "Promedio: " << (correctas * 100 / 5) << "%\n";

    return 0;
}
