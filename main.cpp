#include <iostream>

#define Nm 100
#define Np 5

class Musica
{
    public:
        Musica();
        virtual ~Musica();
        char GetNomeMusica() { return NomeMusica; }
        void SetNomeMusica(char val) { NomeMusica = val; }
        char GetNomeArtista() { return NomeArtista; }
        void SetNomeArtista(char val) { NomeArtista = val; }
        char GetNomeGenero() { return NomeGenero; }
        void SetNomeGenero(char val) { NomeGenero = val; }
        float GetDuracaoTempo() { return DuracaoTempo; }
        void SetDuracaoTempo(float val) { DuracaoTempo = val; }
    protected:
    private:
        char NomeMusica;
        char NomeArtista;
        char NomeGenero;
        float DuracaoTempo;
};

class Playlist
{
    public:
        Playlist();
        virtual ~Playlist();
        char GetNomePlaylist() { return NomePlaylist; }
        void SetNomePlaylist(char val) { NomePlaylist = val; }
    protected:

    private:
        char NomePlaylist;
        Musica vet[Nm];
};

using namespace std;

void addMusica()
{

}

void remMusica()
{

}

void remMusica(int)
{

}

void criaPlaylist()
{


}

void addPlaylist()
{

}

void impPlaylist()
{

}

void tempPlaylist()
{

}

void generoList()
{

}

void ordAlf()
{

}

int menu()
{
    int op = 0;
    cout << "O que gostaria de fazer?" << endl << endl;
    cout << "1- Add musica em uma playlist" << endl;
    cout << "2- Remover musica da playlist" << endl;
    cout << "3- Criar playlist" << endl;
    cout << "4- Add playlist" << endl;
    cout << "5- Imprimir playlist na tela" << endl;
    cout << "6- Tempo total e medio da playlist" << endl;
    cout << "7- Genero especifico" << endl;
    cout << "8- Ordenar por ordem alfabetica" << endl;
    cout << "9- Sair" << endl << endl;

    cout << "Escolha: ";
    cin >> op;
    return(op);
}
int menu2()
{
    cout << "Qual forma deseja remover musica da playlist?" << endl << endl;
    cout << "1- Remover musica da playlist" << endl;
    cout << "2- Remover musica pelo numero dela na playlist" << endl;

    cout << "Escolha: ";
    cin >> op;
    return(op);
}

int main()
{
    Playlist p[Np];
    while()
    {

    int opcao = 0;
    opcao = menu();

    //cout << "menu:" << opcao << endl;

    switch (opcao)
    {
        case 1:
                addMusica();
            break;

        case 2:
                char i = 0;
                i = menu2();
                if (i == 1) remMusica()
                else if (i == 2)
                {
                    int p = 0;
                    count << "Qual musica que deseja remover?  ";
                    cin >> p
                    remMusica(p);
                }
                else cout << "EROOOUUUU!!!!!"
            break;

        case 3:
                criaPlaylist();
            break;

        case 4:
                addPlaylist();
            break;

        case 5:
                impPlaylist();
            break;

        case 6:
                tempPlaylist();
            break;

        case 7:
                generoList();
            break;

        case 8:
                ordAlf();
            break;

        case 9:
            break;
    }
    }
    return 0;
}
