#include <stdio.h>

void temperature(char *temperature, char *detection);

int main (int argc, char* argv[]){
  char const* const fileName = argv[1];
  FILE* file = fopen(fileName, "r");
  char line[256];

 if (file != NULL) {
 while ( fgets(line, sizeof(line), file) != NULL )
     fputs( line, stdout);
 }
 else
 {
   perror( fileName );
 }

 return 0;
}

