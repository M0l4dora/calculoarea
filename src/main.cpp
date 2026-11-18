/*
====================================================================
Materia: Laboratorio de Programación (LPR)
E.E.S.T. N° 1 "Eduardo Ader" — Vicente López
Curso: 5° Año
Profesor: Prof. York
Estudiante: Julian Fricker
Archivo: main.cpp
Objetivo: Calcular el area de un circulo mediante funciones modulares
y simular una diana de tiro en ASCII.
====================================================================
*/
#include <iostream>
using namespace std;

// ====================================================================
// 1. PROTOTIPO DE LA FUNCIÓN (Firma de la función)
// Le avisamos al compilador la existencia del módulo de cálculo antes del main
// ====================================================================
double calcularAreaCirculo(double radio);

int main() {
    double radioEstudiante;

    // REGLA OBLIGATORIA (EVITA EL PLAGIO):
    // La salida identifica al estudiante con su nombre y apellido reales.
    cout << "=====================================================" << endl;
    cout << " CALCULADORA DE AREA MODULAR - ESTUDIANTE: Julian Fricker " << endl;
    cout << "=====================================================" << endl;
    cout << "=> Ingrese el radio del circulo/diana (en cm): ";
    cin >> radioEstudiante;

    // FILTRO DE CONSISTENCIA (Validación del dato geométrico)
    if (radioEstudiante <= 0) {
        cout << "[ERROR] El radio debe ser un valor positivo y mayor a cero." << endl;
        return 1; // Salida controlada del sistema indicando error en consola
    }

    // ====================================================================
    // 2. LLAMADA / INVOCACIÓN DE LA FUNCIÓN
    // Enviamos 'radioEstudiante' al módulo y guardamos su retorno en 'areaFinal'.
    // ====================================================================
    double areaFinal = calcularAreaCirculo(radioEstudiante);

    // ====================================================================
    // 3. SALIDA DE DATOS
    // Mostramos el área devuelta por la función con su unidad correspondiente.
    // ====================================================================
    cout << "El area del circulo con radio " << radioEstudiante
         << " cm es: " << areaFinal << " cm^2." << endl;

    // ====================================================================
    // BONUS GAMIFICACIÓN: RENDER DE LA DIANA EN CONSOLA
    // Dependiendo del radio que ingresaron, la consola simulará un blanco
    // de tiro correspondiente al tamaño calculado.
    // ====================================================================
    cout << "\n[SISTEMA] Dibujando escala de la Diana en la RAM..." << endl;
    if (radioEstudiante <= 5.0) {
        cout << " .---. " << endl;
        cout << " / X \\ -> [DIANA MINI / COMPACTA]" << endl;
        cout << " \\ * / " << endl;
        cout << " '---' " << endl;
    } else if (radioEstudiante <= 12.0) {
        cout << " .---. " << endl;
        cout << " / .---. \\ " << endl;
        cout << " | / O \\ | -> [DIANA ESTÁNDAR DE TIRO]" << endl;
        cout << " | \\ * / | " << endl;
        cout << " \\ '---' / " << endl;
        cout << " '---' " << endl;
    } else {
        cout << " .---. " << endl;
        cout << " / .---. \\ " << endl;
        cout << " | / .-. \\ | " << endl;
        cout << " | | X | | -> [DIANA GIGANTE DE COBERTURA]" << endl;
        cout << " | \\ '-' / | " << endl;
        cout << " \\ '---' / " << endl;
        cout << " '---' " << endl;
    }
    cout << "=====================================================" << endl;
    return 0; // Finalización exitosa de Windows (Código 0)
}

// ====================================================================
// 4. DEFINICIÓN / DESARROLLO DE LA FUNCIÓN
// Implementamos π = PI * r² con la constante PI bloqueada en memoria.
// ====================================================================
double calcularAreaCirculo(double r) {
    const double PI = 3.1415926535;
    double area = PI * r * r;
    return area;
}
