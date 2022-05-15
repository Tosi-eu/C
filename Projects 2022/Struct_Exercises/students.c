#include <stdio.h>
#include <stdlib.h>

typedef struct students{

    int stud_register;
    float grades[3];
    char name[50];


}stud;

int main(){

  stud st[5];
  float biggest_grade, grades[5];
  int index_exemplar;

  for(int i = 0; i < 5; i++){
    scanf("%d", &st[i].stud_register);
    setbuf(stdin, NULL);
    fgets(st[i].name, 50, stdin);
    scanf("%f %f %f", &st[i].grades[0], &st[i].grades[1], &st[i].grades[2]);
    setbuf(stdin, NULL);
  }

  for(int i = 0; i < 5; i++){
        grades[i] = st[i].grades[0] + st[i].grades[1] + st[i].grades[2];
        grades[i] /= 3;
    }

  biggest_grade = grades[0];
    for(int i = 1; i < 5; i++){
        if(biggest_grade < grades[i]){
            biggest_grade = grades[i];
            index_exemplar = i;
        }
    }

    printf("\nStudent with the biggest mean: %sBiggest grade of him %.2f\n",
        st[index_exemplar].name, biggest_grade);
        
    printf("All grades of him: ");
    for(int i = 0; i <  3; i++)
    {
       printf(" %.2f ",st[index_exemplar].grades[i]);
  
    }
    printf("\n\n");
 
  return 0;
}
