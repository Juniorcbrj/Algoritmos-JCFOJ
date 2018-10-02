#include <iostream>

using namespace std;

class Matriz{
private:
    int **matriz;
    int linha;
    int coluna;
    float integral_linear(float parametros[], float x)
    {
        return (parametros[0]*x + parametros[1]);
    }

public:
    Matriz(int m, int n)
    {
        linha = m;
        coluna = n;
        this->matriz = new int* [linha];
        for(int j=0;j<linha;j++)
        {
            this->matriz[j] = new int[coluna];
        }
    }


    ~Matriz()
    {
        for(int j=0;j<coluna;j++)
        {
            delete[] matriz[j];
        }
        delete matriz;
    }

    int* operator[](int coluna)
    {
        int *temp = new int[linha];
        for(int i=0;i<linha;i++)
        {
            temp[i] = matriz[i][coluna];
        }
        return temp;
    }

    int* operator= (Matriz m)
    {
        int *temp = new int[linha];
        for(int i=0;i<linha;i++)
        {
            for(int j=0;j<coluna;j++)
            {
                temp[i] = m[i][j];
            }
        }
        return temp;
    }


    double integral(float parametros[], float a, float b, int qtd_rect)
    {
        if(b<a)
        {
            cout << "b nao pode ser menor que a!" << endl;
            return -1;
        }

        int opc;
        cout << "1 - integral linear" << endl;
        cin >> opc;
        double soma = 0;
        double passo = a;
        double delta = (b-a)/qtd_rect;
        switch(opc)
        {
            case 1:
                for(int i=1;i<=qtd_rect;i++)
                    {
                        soma += (delta)*integral_linear(parametros, passo);
                        passo = passo + delta;
                    }
                break;
            default:
                cout << "opcao invalida!" << endl;
                break;
        }
        return soma;

    }

    int getlinha()
    {
        return linha;
    }

    int getcoluna()
    {
        return coluna;
    }
};

int main()
{
    Matriz m = Matriz(3,3);
    float p[] = {1,0};
    // Esta dando um erro onde a reposta está dando sempre metade do valor. Ainda não consegue identificar a causa disso.
    float r = m.integral(p, 0, 10, 100000000);
    cout << r << endl;
    return 0;
}
