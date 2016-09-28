#ifndef IMPORTADOR_H
#define IMPORTADOR_H

class Importador
{
private:
    ListaVertice *listaVertice;
    ListaFace *listaFace;
    FILE * arquivo;
public:
    Importador();
    ~Importador();
    ListaVertice *getListaVertice();
    ListaFace *getListaFace();
    FILE *getFile();
    void setListaVertice(ListaVertice *lista);
    void setListaFace(ListaFace *lista);
    void setFile(FILE *file);
    void ler(std::string nome_arquivo);
    void printa();
    
};

#endif
