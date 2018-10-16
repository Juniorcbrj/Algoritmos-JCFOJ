#include <iostream>
#include <stdlib.h>

using namespace std;



class Matriz
{

private:

    int **matriz;

    int linha;

    int coluna;

public:

    Matriz(int m, int n)

    {

        linha = m;

        coluna = n;

        this->matriz = new int* [linha];

        for(int j=0; j<linha; j++)

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

    Matriz operator+(Matriz A)
    {
        /* Soma de Matrizes*/
        Matriz M=Matriz(linha,coluna);
        if(this->linha==A.linha&&this->coluna==A.coluna)
        {
            cout<<"As matrizes apresentam mesmo tamanho, portanto, a soma pode ser efetuada"<<endl;


            for(int i=0; i<linha; i++)
            {
                for (int j=0; j<coluna; j++)
                {
                    M.matriz[i][j]=matriz[i][j]+A.matriz[i][j];
                }
            }
        }
        else
        {
            cout<<"A soma nao pode ocorrer devido ao tamanho incompativel das matrizes"<<endl;
            exit(1);
        }
        return M;

    }


    Matriz operator-(Matriz A)
    {

        /* Subtração de Matrizes*/
        Matriz M=Matriz(linha,coluna);
        if(this->linha==A.linha&&this->coluna==A.coluna)
        {
            cout<<"As matrizes apresentam mesmo tamanho, portanto, a subtracao pode ser efetuada"<<endl;


            for(int i=0; i<linha; i++)
            {
                for (int j=0; j<coluna; j++)
                {
                    M.matriz[i][j]=matriz[i][j]-A.matriz[i][j];
                }
            }
        }
        else
        {
            cout<<"A subtracao nao pode ocorrer devido ao tamanho incompativel das matrizes"<<endl;
            exit(1);
        }
        return M;
    }

    Matriz operator*(Matriz A)
    {

        /* Multiplicação de Matrizes*/
        Matriz M=Matriz(linha,A.coluna);

        if(this->coluna==A.linha)
        {
            cout<<"O numero de colunas da primeira matriz = ao numero de linhas da segunda, portanto, a multiplicacao pode ser efetuada"<<endl;


            for(int i=0; i<linha; i++)
            {
                for (int j=0; j<A.coluna; j++)
                {

                    int aux=0;
                    for (int k=0; k<coluna; k++)
                    {
                        aux=aux+(matriz[i][k]*A.matriz[k][j]);
                    }
                    M.matriz[i][j]=aux;
                }
            }
        }
        else
        {
            cout<<"A multiplicacao nao pode ocorrer devido ao tamanho incompativel das matrizes"<<endl;
            exit(1);
        }
        return M;
    }

    void operator<<(Matriz A)
    {

        for (int i=0; i<A.linha; i++)
        {
            for(int j=0; j<A.coluna; j++)
            {
                cout<<"\t "<<A.matriz[i][j]<<"";

            }
            cout<<endl;

        }
    }

    void PreencheMatriz()
    {
        int k=0;

        for(int i=0; i<linha; i++)

        {

            for(int j=0; j<coluna; j++)

            {

                matriz[i][j] = k;

                k++;

            }

        }

    }

    void teste1(Matriz B, Matriz C)
    {

        B.PreencheMatriz();
        C.PreencheMatriz();
        Matriz D=Matriz(B.linha,B.coluna);
        D=B.operator+(C);
        operator<<(D);

    }

    void teste2(Matriz B, Matriz C)
    {
        B.PreencheMatriz();
        C.PreencheMatriz();
        Matriz D=Matriz(B.linha,B.coluna);
        D=B.operator-(C);
        operator<<(D);

    }


    void teste3(Matriz B, Matriz C)
    {
        B.PreencheMatriz();
        C.PreencheMatriz();
        Matriz D=Matriz(B.linha,B.coluna);
        D=B.operator*(C);
        operator<<(D);
    }


    int getlinha()

    {
        return this->linha;
    }


    int getcoluna()
    {
        return this->coluna;
    }

};



int main()
{

    Matriz m = Matriz(3,3);
    Matriz a = Matriz(3,3);
    Matriz b = Matriz(3,3);
    m.teste1(a,b);
    m.teste2(a,b);
    m.teste3(a,b);

    return 0;
}
