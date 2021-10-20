#include "biblioTec.h"
//------------------------------------------------------------------------------

void Configura( livro *X ){
   int p;
   for( p = 0; p < MAX; p++ ){
        X[p].chave = -1;
        strcpy( X[p].nameObra    , "***********************" );
        strcpy( X[p].nameAutor,    "***********************" );
        strcpy( X[p].nameEditora,  "***********************" );
        strcpy( X[p].data,         "XX/XX/XXXX");
        X[p].numExemp  = 0;
   }
}
void Mensagem( char *msg ){
   puts("");
   puts("==============================================" );
   puts( msg );
   puts("----------------------------------------------" );
   puts("");
}

void Timer( int dt ){
#ifdef WIN32
   Sleep(dt*1000);
   system("cls");
#endif
#ifdef linux
   sleep(dt);
   system("clear");
#endif
}

