#include "biblioTec.h"
//------------------------------------------------------------------------------
void Backup( livro *X ){
     FILE *fs = fopen( BACKUP, "wb" );
     if( fs == NULL) Mensagem( "Erro no Backup!" );
     else{
           fwrite( X, sizeof(livro), MAX, fs );
           fclose(fs);
           Mensagem( "Backup realizado com Sucesso!" );
     }
}

