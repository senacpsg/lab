#include <stdio.h> 
#include <stdlib.h> 

int main () 
{ 
  
  int teste; 

  puts ("Espere...."); 

  teste = system ("/home/lab301pc03/teeworlds-0.6.2-source/teeworlds"); 
  if (teste == -1) 
      puts ("Não consegui executar seu comando."); 
  else 
      puts ("Comando executado com sucesso"); 
	
    return 0; 

}
