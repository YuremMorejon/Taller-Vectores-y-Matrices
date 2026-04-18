#include <stdio.h>

int main(){
    int A=5;
    int B=3;
    float notas[A][B];
    int i,j;

printf("Sistema de Calificaciones \n");
printf("Estudiantes: %d\n", A);
printf("Asignaturas: %d\n", B);

for (i = 0; i < A; i++)
{
    printf("Estudiante %d \n", i+1);
    for (j = 0; j < B; j++){
       do{
        printf("Asignatura %d: ", j+1);
        scanf("%f", &notas[i][j]);
        if(notas[i][j]<0||notas[i][j]>10)
        {
            printf("Nota invalida, ingrese nota entre 0 y 10\n");
   
        }
        
       }while(notas[i][j]<0||notas[i][j]>10);
       {
    
       }
       
    }
    
}

return 0;
}