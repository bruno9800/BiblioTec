#include "biblioTec.h"
//------------------------------------------------------------------------------
void CadObra( livro *X ){
    int p;
    Mensagem( "Informando Dados da obra ! " );

    printf("\n Digite o numero do tombo: " ); scanf( "%d", &p );

    if( 0 <= p && p < MAX ){
        printf( "\n\n\n Dados da Obra" );
        printf("\n      Data da compra: " ); scanf( "%s",  X[p].data     ); setbuf(stdin,NULL);
        //printf("\n     Nome da autor: " ); scanf( "%s",  X[p].nameAutor    );
        //printf("\n   Nome da editora: " ); scanf( "%s", &X[p].nameEditora  );
        printf("\nNumero do exemplar: " ); scanf( "%c", &X[p].numExemp     );
        //printf("\n    Codigo da area: " ); scanf( "%d", &X[p].CodArea      );


        Mensagem( "Obra cadastrada!" );
    }
    else Mensagem( "Tombo inválido!" );
}

