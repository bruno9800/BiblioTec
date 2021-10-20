#include "biblioTec.h"
//------------------------------------------------------------------------------
void Restore( livro *X ){
     int p;
     FILE *fe = fopen( BACKUP, "rb" );
     if( fe == NULL) Mensagem( "Erro no Restore!" );
     else{
           fread( X, sizeof(livro), MAX, fe );
           fclose(fe);
           Mensagem( "Restore realizado com Sucesso!" );
     }
}
//------------------------------------------------------------------------------

