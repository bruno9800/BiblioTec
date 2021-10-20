#include "biblioTec.h"
//------------------------------------------------------------------------------
void Cadastro( livro *X ){
    bool cheio = true;
    int  p;

    Mensagem( "Incluir Dados do livro!" );

    for( p = 0; p < MAX; p++ ){
         if( X[p].chave == -1 ){
             X[p].chave = 0;
             printf( "\n\n\n Dados da Pessoa " ); setbuf(stdin,NULL);
             printf("\n Nome da Obra: "       ); gets( X[p].nameObra        ); setbuf(stdin,NULL);
             printf("\n Nome do autor:   "    ); gets( X[p].nameAutor       ); setbuf(stdin,NULL);
             printf("\n Nome da editora: "    ); gets( X[p].nameEditora     ); setbuf(stdin,NULL);
             //printf("\n numero do exemplar: " ); scanf( "%d", &X[p].numExemp);
             printf("\n Codigo de area: "     ); scanf( "%d", &X[p].CodArea );
             cheio = false;
             setbuf(stdin,NULL);
             break;
         }
    }
    if( cheio ) Mensagem( " >> O Banco de Dados está cheio!");
}

