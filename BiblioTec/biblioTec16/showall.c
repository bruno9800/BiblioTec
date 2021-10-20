
#include "biblioTec.h"
//------------------------------------------------------------------------------
void ShowforArea( livro *X ){
    int p,i;
    Mensagem("Listagem de livros por Area");

    puts( "1 - Exatas");
    puts( "2 - Humanas e sociais");
    puts( "3 - Biomédicas");
    puts( "------------------------------------------------------------" );
    printf("insira o Codigo da area: "); scanf("%d",&i);
    puts("");
    puts( "---------------------------------------------------------------------------------------------------" );
    puts( "Tombo    Nome Da Obra          Nome do Autor       Nome da editora        Nexemplares      data "  );
    puts( "---------------------------------------------------------------------------------------------------" );
    for( p = 0; p < MAX; p++ ){
         if( X[p].chave == -1 ) continue;

         if(X[p].CodArea == i){
         printf( "%3d" , p                   );
         printf( "%16s" , X[p].nameObra      );
         printf( "%24s" , X[p].nameAutor     );
         printf( "%21s" , X[p].nameEditora   );
         printf( "%16c" , X[p].numExemp      );
         //printf( "%11d" , X[p].CodArea       );
         printf("%18s"  , X[p].data          );
         printf( "\n" );
         }
    }
    puts( "---------------------------------------------------------------------------------------------------" );
}

void ShowforAutor( livro *X ){
    int p;
    char autor[30];
    Mensagem("Listagem de livros por Autor");

    puts( "------------------------------------------------------------" );
    puts("");
    printf("insira o Nome do Autor desejado: "); setbuf( stdin, NULL); gets( autor );
    printf ( " \tlivros do autor %s\n", autor);
    puts( "-------------------------------------------------------------------------------------" );
    puts( "Tombo    Nome Da Obra         Nome da editora      Nexemplares   Area      data "  );
    puts( "-------------------------------------------------------------------------------------" );
    for( p = 0; p < MAX; p++ ){
         if( X[p].chave == -1 ) continue;

         if(strcmp( autor, X[p].nameAutor)==0){
         printf( "%3d" , p                   );
         printf( "%16s" , X[p].nameObra      );
         //printf( "%24s" , X[p].nameAutor     );
         printf( "%21s" , X[p].nameEditora   );
         printf( "%16c" , X[p].numExemp      );
         printf( "%12d" , X[p].CodArea       );
         printf("%15s"  , X[p].data          );
         printf( "\n" );
         }
    }
    puts( "--------------------------------------------------------------------------------" );
}

void ShowforEdit( livro *X ){
    int p;
    char edit[15];
    Mensagem("Listagem de livros por Editora");

    puts( "------------------------------------------------------------" );
    printf("insira o Nome da Editora desejada: "); setbuf(stdin,NULL); gets( edit );
    puts("");
    printf("\tLivros da editora  %s\n", edit );
    puts( "----------------------------------------------------------------------------------------" );
    puts( "Tombo    Nome Da Obra         Nome do Autor         Nexemplares       Area     data "  );
    puts( "----------------------------------------------------------------------------------------" );
    for( p = 0; p < MAX; p++ ){
         if( X[p].chave == -1 ) continue;

         if(strcmp( edit, X[p].nameEditora)==0){
         printf( "%3d" , p                   );
         printf( "%16s" , X[p].nameObra      );
         printf( "%24s" , X[p].nameAutor     );
         //printf( "%21s" , X[p].nameEditora   );
         printf( "%16c" , X[p].numExemp      );
         printf( "%13d" , X[p].CodArea       );
         printf("%15s"  , X[p].data          );
         printf( "\n" );
         }
    }
    puts( "----------------------------------------------------------------------------------------" );
}




