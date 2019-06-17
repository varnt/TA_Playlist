#ifndef MUSICA_H
#define MUSICA_H


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

#endif // MUSICA_H
