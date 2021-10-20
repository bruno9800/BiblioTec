/*
 * INFORMATIZANDO UMA BLIBLIOTECA
 *          ESTRUTURANDO INFORMAÇÕES \/
 *
 *      Obra(numero do tombo, numero do exemplar, data compra)
 *      Tombo(numero do tombo, nome da obra, nome do autor, nome da editora, codigo da area)
 *
 *      DADOS OBTIDOS/
 *                   / N max de Tombos = 20;               |
 *                   / Cada tombo      = max 3 exemplares; |-> armazenar em vetores de structs;
 *                   / Criar um menu
 *                          1- Cadastrar tombo          -  loginT( tombo *X)
 *                          2- Cadastrar Obra           -  loginO( obra *X)
 *                          3- Mostrar Obra por área    -  showForArea( tombo *X)
 *                          4- Mostrar Obra por Autor   -  showForAutor( tombo *X)
 *                          5- Mostrar Obra por Editora -  showForEdit( tombo *X)
 *                          6- Encerrar Programa        -  FINISH
 */
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
//------------------------------------------------------------------------------
#ifdef WIN32
  #include <windows.h>
#endif
#ifdef linux
  #include <unistd.h>
#endif
//------------------------------------------------------------------------------
#define MAX    20
//------------------------------------------------------------------------------
#define BACKUP "biblioTec.bin"
//------------------------------------------------------------------------------

typedef struct livro{
    int   chave;
    unsigned char numExemp;
    char  nameObra[15];
    char  nameAutor[30];
    char  nameEditora[15];
    char  data[10];
    int   CodArea;
}livro;






