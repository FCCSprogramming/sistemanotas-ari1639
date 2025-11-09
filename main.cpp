#include <iostream>
#include <iomanip>
// Autor Ari Acero Alva-20250108H
using namespace std;
const int alumnos_max = 100;
struct Notas
{
    float EP;
    float EF;
    float PP;
    float promediofinal()
    {
        return EP * 0.30 + EF * 0.5 + PP * 0.20;
    }
    string obtestado()
    {
        if (promediofinal() >= 10.5)
        {
            return "Aprobado";
        }
        else
        {
            return "Desaprobado";
        }
    }
};
struct Curso
{
    string codigo;
    string nombre;
    int creditos;
    string profesor;
    Notas notas;
    void mostrarinformacion()
    {
        cout << left << setw(5) << "Codigo" << setw(30) << "Curso" << setw(4) << "Creditos" << "EP" << "EF" << "PP" << "Promedio" << "Estado";
        cout << left << setw(5) << codigo << setw(30) << nombre << setw(4) << creditos << notas.EP << notas.EF << notas.PP << notas.promediofinal() << notas.obtestado();
    }
};
struct Estudiante
{
    string codigo;
    string nombre;
    string carrera;
    int ciclo;
};
struct matricularCurso
{
    string codCurso;
    string curso;
    string nombrecurso;
    int creditos;
    string profesor;
};
// Prototipos1
void mainmenu(Estudiante estudiantes[], int &cantidad);
void registrarEstudiante(Estudiante estudiantes[], int cantidad);
void mostrarEstudiante(const Estudiante estudiantes[], int cantidad);
Estudiante *buscarEstudiante(Estudiante estudiantes[], int cantidad, string codigo);
//------------------------------------------------------------------------------------
void registrarEstudiante(Estudiante estudiantes[], int cantidad)
{
    cin.ignore();
    for (int i = 0; i < cantidad; i++)
    {
        cout << "Codigo: ";
        getline(cin, estudiantes[i].codigo);
        cout << "Nombre: ";
        getline(cin, estudiantes[i].nombre);
        cout << "Carrera: ";
        getline(cin, estudiantes[i].carrera);
        cout << "Ciclo: ";
        cin >> estudiantes[i].ciclo;
        cin.ignore();
    }
}
void mostrarEstudiante(const Estudiante estudiantes[], int cantidad)
{
    cout << left << setw(10) << "Codigo" << setw(20) << "Nombre" << setw(15) << "Carrera" << setw(6) << "Ciclo" << endl;
    for (int i = 0; i < cantidad; i++)
    {
        cout << left << setw(10) << (estudiantes + i)->codigo << setw(20) << (estudiantes + i)->nombre << setw(15) << (estudiantes + i)->carrera << setw(6) << (estudiantes + i)->ciclo;
    }
}
void mainmenu(Estudiante estudiantes[], int &cantidad)
{
    int op = 0;
    do
    {
        cout << "===SISTEMA DE GESTION ACADEMICA UNI===" << endl;
        cout << "1. Registrar estudiante" << endl;
        cout << "2. Matricular estudiante" << endl;
        cout << "3. Ingresar notas del curso" << endl;
        cout << "4. Mostrar informacion de estudiante" << endl;
        cout << "5. Generar boleta de notas" << endl;
        cout << "6. Mostrar mejor promedio" << endl;
        cout << "7. Estudiantes aprobados por curso" << endl;
        cout << "8. Salir" << endl;
        cin >> op;
        cin.ignore();
        if (op == 1)
        {
            int cantidadr = 0;
            cout << "Ingrese la cantidad de estudiantes: ";
            cin >> cantidadr;
            registrarEstudiante(estudiantes + cantidad, cantidadr);
            cantidad = cantidad + cantidadr;
        }
        else if (op == 2)
        {
        }
        else if (op == 3)
        {
        }
        else if (op == 4)
        {
        }
        else if (op == 5)
        {
        }
        else if (op == 6)
        {
        }
        else if (op == 7)
        {
        }
        else if (op == 8)
        {
        }
        else
        {
            cout << "Opcion invalida";
        }
    } while (op != 8);
}
int main()
{
    Estudiante estudiantes[alumnos_max];
    int cantidad = 0;
    mainmenu(estudiantes, cantidad);
    return 0;
}