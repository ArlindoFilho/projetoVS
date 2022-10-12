#include <iostream>   // biblioteca necessária para a função std::cout

using namespace std;   // declaração global do espaço de nomes

int main( int argc, char *argv[] )
{
   int arg;   // declara uma variável inteiro com o nome arg

   // atribui-se 1 a arg; enquanto arg for menor que argc, executa-se o bloco e arg é incrementado em cada iteração
   for( arg = 1; arg < argc; arg++ )
   {
      if( argv[arg][0] != '-' ) // não foi utilizado {} porque só tem um comando dentro do if, nesse caso as chaves são opcionais
         break;

      switch( argv[arg][1] )
      {
         case 'r':   // caso possua um r após o hífen
            cout << "Argumento -r usado\n\n";
            break;
         case 'v':   // caso possua um v após o hífen
            cout << "Argumento -v usado\n\n";
            break;
         default:    // este é o valor de escape e sua respectiva mensagem:
            cout << "Nenhum argumento foi usado\n\n";
            break;
      }
   }
}