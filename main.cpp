#include <iostream>

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
};

using namespace std;

int menu()
{
    int op = 0;
    cout << "O que gostaria de fazer?" << endl;
    cout << "1- add musica em uma playlist" << endl;
    cout << "2- remover musica da playlist" << endl;
    cout << "3- add playlist" << endl;
    cout << "4- imprimir playlist na tela" << endl;
    cout << "5- tempo total e medio da playlist" << endl;
    cout << "6- genero especifico" << endl;
    cout << "7- ordenar por ordem alfabetica" << endl;
    cout << "8- sair" << endl << endl;

    cout << "Escolha: ";
    cin >> op;
    return(op);
}

int main()
{
    int opcao = 0;
    opcao = menu();

    cout << "menu:" << opcao << endl;

    switch (opcao)
        case 1

            break;

        case 2

            break;

        case 3

            break;

        case 4

            break;

        case 5

            break;

        case 6

            break;

        case 7

            break;

        case 8

            break;

    return 0;
}
