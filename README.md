# Calculadora de área modular (CALCULOAREA)

Proyecto de la asignatura **Laboratorio de Programación** (E.E.S.T. N.º 1
"Eduardo Ader", Vicente López). Actividad 3: *Enfoque modular y diseño
Top-Down*.

**Estudiante:** Julian Fricker · **Profesor:** Prof. York · **Año:** 2026

## Objetivo

Aplicar un enfoque estructurado **Top-Down** para dividir un problema en
módulos pequeños e independientes. El programa calcula el área de un círculo
mediante la función `calcularAreaCirculo(double radio)` y, como extra, dibuja
una diana en ASCII cuyo tamaño depende del radio ingresado.

## Estructura del repositorio

```
calculoarea/
├── .gitignore                              # Excluye .vscode/ y binarios
├── LICENSE                                 # Licencia MIT (uso escolar)
├── README.md                               # Este archivo
├── docs/
│   └── InformeProyectoCALCULOAREA.pdf      # Informe en Normas APA v7
├── src/
│   └── main.cpp                            # Código fuente modular en C++
└── capturas/
    ├── compilacion_area.png                # Terminal: compilación y ejecución
    └── diagrama_flujo.png                  # Diagrama de flujo del programa
```

## Compilación y ejecución (Windows con MSYS2 / MinGW)

Desde la raíz del repositorio:

```powershell
g++ src/main.cpp -o src/area.exe
.\src\area.exe
```

También es posible compilar con `g++` desde OnlineGDB si el equipo de laboratorio
no permite instalar compiladores.

## Ejemplo de ejecución

```
=> Ingrese el radio del circulo/diana (en cm): 8
El area del circulo con radio 8 cm es: 201.06192976 cm^2.

[SISTEMA] Dibujando escala de la Diana en la RAM...
 .---.
 / .---. \
 | / O \ | -> [DIANA ESTÁNDAR DE TIRO]
 | \ * / |
 \ '---' /
 '---'
```

## Módulos principales

| Elemento | Función |
| --- | --- |
| `double calcularAreaCirculo(double radio);` | Prototipo: declara la firma antes de `main()`. |
| `if (radioEstudiante <= 0)` | Filtro de consistencia: rechaza radios inválidos. |
| `double areaFinal = calcularAreaCirculo(...)` | Invocación: guarda el retorno del módulo. |
| `const double PI = 3.1415926535;` | Constante inmutable usada en `π · r²`. |

## Entregables

- Código fuente comentado en `src/main.cpp`.
- Informe con el cuestionario técnico en `docs/InformeProyectoCALCULOAREA.pdf`.
- Evidencias gráficas en `capturas/`.
