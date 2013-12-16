#include <stdio.h>
#include <stdlib.h>

struct geomine{
  int latitude;
  int longitude;
  int depth;
  int temp;
};

int main (int argc, char* argv[]){
  char const* const fileName = argv[1];
  FILE* file = fopen(fileName, "r");
  int i;
  int fileLength = atoi(argv[2]);
  int maxVal = 0;
  int maxIndex = 0;
  struct geomine robodata[fileLength]; //we'll use the command line tools to find the length of the file.
  
  if (file != NULL) {
    while (!feof(file)) {
      fscanf(file,"%d,%d,%d,%d", &robodata[i].latitude, &robodata[i].longitude, &robodata[i].depth, &robodata[i].temp);
        i++;
    }
    for(i = 0; i < fileLength; i++){
     //printf("%d\n", robodata[i].temp);
     if (robodata[i].temp > maxVal){
       maxVal = robodata[i].temp;
       maxIndex = i;
     }
   }
   printf("\n \n max temp was %d, \n located at lat: %d, long: %d, depth: %d meter \n \n", 
   maxVal,
   robodata[maxIndex].latitude,
   robodata[maxIndex].longitude,
   robodata[maxIndex].depth);
   } 
   else{
     perror("Error: file not found");
   }
 return 0;
}
