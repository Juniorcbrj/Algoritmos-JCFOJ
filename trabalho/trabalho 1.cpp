#include <iostream>

using namespace std;

class Matriz{
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

    void teste()
    {
        int k=0;
        for(int i=0;i<linha;i++)
        {
            for(int j=0;j<coluna;j++)
            {
                matriz[i][j] = k;
                k++;
            }
        }
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

    int getlinha()
    {
        return this.linha
    }

    int getcoluna()
    {
        return this.coluna
    }

};

int main()
{
    Matriz m = Matriz(3,3);
    m.teste();
    cout << m[1][1] << endl;
    delete m;
    return 0;
}
