#ifndef PLAYLIST_H
#define PLAYLIST_H


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
        //array
};

#endif // PLAYLIST_H
