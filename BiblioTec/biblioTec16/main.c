// -- BiblioTec- informatizando Bibliotecas

#include "biblioTec.h"
//------------------------------------------------------------------------------



livro *Aloca( void ){
   livro *X;
   X = (livro*) malloc( MAX*sizeof(livro) );
   if( X == NULL){ puts("erro de alocação"); exit(1); }
   return X;
}
int main( void ){
    int     opcao;
    char       ch;
    livro *Obra = Aloca();
    Configura(Obra);
    Restore(Obra);

    do{
         Mensagem("BiblioTec - informatizando bibliotecas");

         puts( "1 - Cadastrar Tombo"           );
         puts( "2 - Cadastrar Obra"            );
         puts( "3 - Mostrar Obra por área"     );
         puts( "4 - Mostrar Obra por Autor"    );
         puts( "5 - Mostrar Obra por Editora " );
         puts( "6 - Encerrar programa"         );
         puts( "-----------------------------" );
         printf( "Informe uma opção: ");
         scanf( "%d", &opcao );

         switch( opcao ){
            case  1: { Cadastro    (Obra); break; }
            case  2: { CadObra     (Obra); break; }
            case  3: { ShowforArea (Obra); break; }
            case  4: { ShowforAutor(Obra); break; }
            case  5: { ShowforEdit (Obra); break; }
            case  6:  break;
            default: Mensagem(" >> Opcão inválida! ");
         }
    }while( opcao!=6 );


    puts("");
    puts(" >> Deseja salvar as alterações ? 's' ou 'n' ");
    setbuf(stdin,NULL);
    scanf("%c", &ch);
    if(ch == 's') Backup(Obra);
    free(Obra);

    Mensagem("Espero que tenha ajudado !! :)\n\n\t !!BiblioTec - Informatizando bibliotecas !!" );

    return 0;
}
