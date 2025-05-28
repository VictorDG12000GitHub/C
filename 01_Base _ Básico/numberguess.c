#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int result;
    result = rand() %10+1;
    /*int count=0;
      while(count<10){
          result = rand() %10+1;
          printf("%d   ",result);
          count++;
    }*/
    int answer;
    do{
        printf("Introduce el número: ");
        scanf("%d", &answer);
        if(result!=answer){
            printf("La respuesta no era esa.");
        }else{
            printf("Respuesta correcta.");
        }
    }while(result!=answer);
    return 0;

    
}
