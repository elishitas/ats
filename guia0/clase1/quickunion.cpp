#include <iostream>
using namespace std;

const int CANTIDAD_INGRESOS = 9;
const int TOPE = 8;

void InicializarConexiones(int conexiones[TOPE]);
bool EstanConectados(int conexiones[TOPE], int p, int q);
void Conectar(int conexiones[TOPE], int p, int q);
bool ElementosInvalidos(int p, int q);

int main()
{
    int conexiones[TOPE];
    InicializarConexiones(conexiones);
    for (int numeroIngreso = 1; numeroIngreso < CANTIDAD_INGRESOS; numeroIngreso++)
    {
        int p, q;

        cin >>p;
        cin >> q;

        if (ElementosInvalidos(p, q))
        {
            cout << "El numero ingresado esta fuera del rango permitido, vuelva a ingresar los numeros." << endl;
        }
        else
        {
            if (EstanConectados(conexiones, p, q))
            {
                cout << "-" << endl;
            }
            else
            {
                Conectar(conexiones, p, q);
                cout << p << "-" << q << endl;
            }
        }
    }
    return 0;
}

void InicializarConexiones(int conexiones[TOPE]){
    for (int i = 0; i < TOPE; i++)
    {
        conexiones[i] = i;
    }
}

bool ElementosInvalidos(int p, int q){
    return (p > TOPE - 1 || q > TOPE - 1);
}

bool EstanConectados(int conexiones[TOPE], int p, int q){
    return conexiones[p] == conexiones[q];
}

void Conectar(int conexiones[TOPE], int p, int q){
    int pid = conexiones[p];
    int qid = conexiones[q];
    for (int i = 0; i < TOPE; i++){
        if (conexiones[i] == pid)
        {
            conexiones[i] = qid;
        }
    }
}

