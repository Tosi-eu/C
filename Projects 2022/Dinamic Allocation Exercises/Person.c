#include <stdio.h>
#include <stdlib.h>

typedef struct {

	char name[50], adress[50];
	int age;

} SignUp;

SignUp* StartStruct(int n);

int main(){

	int n;
	SignUp *Sign;
	scanf("%d", &n); // Array size

	Sign = StartStruct(n); //Incialize struct

	free(Sign); //Free allocated memory
	Sign = NULL; //Pointer points to null

	return 0;
}

SignUp* StartStruct(int n){

	SignUp *aux;
  FILE *person = fopen("Person_ArrayAlloc.txt", "wa");
	aux = (SignUp *) malloc(n * sizeof(SignUp));

	if(aux == NULL){
		printf("Memory couldn't be allocated... \n");
		exit(1);
	}

	for(int i = 0; i < n; i++){

		setbuf(stdin, NULL); //Cleaning buffer
    printf("Name: ");
		fgets(aux[i].name, 50, stdin);

    printf("Age: ");
		scanf("%d", &aux[i].age);
    
		setbuf(stdin, NULL);
    printf("Adress: ");
		fgets(aux[i].adress, 50, stdin);

    fprintf(person, "%s", aux[i].name); //Print name on file // obs: fgets ends with \n, so don't need to put \n after %s
    fprintf(person, "%d\n", aux[i].age); // print age on file
    fprintf(person, "%s\n", aux[i].adress); //print adress on file
	}

  free(aux); //Free allocated memory
  fclose(person); // Close file

	return aux;
}
