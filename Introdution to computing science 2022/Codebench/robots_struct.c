#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct robots{

    double weight, height, enginePower, resistance, power, series_number, result;
    char name[20];

}rb;


void PressEnter(){

    char aux[10];
    printf("\nPress ENTER to continue: ");
    setbuf(stdin, 0);
    fgets(aux,9,stdin);
    printf("\n");
}

void register_robot(struct robots p[100], int n){

    printf("\nRobot name:\n");
    setbuf(stdin, NULL);
    fgets(p[n].name, 20, stdin);

    printf("Robot's series number:\n");
    scanf("%lf", &p[n].series_number);

    printf("Robot's weight:\n");
    scanf("%lf", &p[n].weight);

    printf("Robot's height:\n");
    scanf("%lf", &p[n].height);

    printf("Robot's engine power:\n");
    scanf("%lf", &p[n].enginePower);

    printf("Robot's resistance:\n");
    scanf("%lf", &p[n].resistance);

    while(p[n].resistance != 1 && p[n].resistance != 2 && p[n].resistance != 3){
        printf("Invalid, so type an valid value:");
        scanf("%lf", &p[n].resistance);

        if(((p[n].resistance == 1 || p[n].resistance == 2 || p[n].resistance == 3))){
            break;
        }
    }

      p[n].power = (p[n].enginePower + p[n].resistance) * (p[n].weight - p[n].height);
      
      if(p[n].power < 0){
          p[n].power *= -1;
      }else if(p[n].power == 0){
          printf("Robot with insufficent power...");
      }

    PressEnter();

}

void preview(struct robots robots_list[], int registers){

    double sum = 0;

    for(int i = 0; i < registers; i++){
        sum += robots_list[i].power;
    }

    printf("\n=-=-=-=-=-=-=-=-=-=-=-= ROBOTS LIST =-=-=-=-=-=-=-=-=-=-=-=-\n");
    for(int i = 0; i<registers; i++){
        if(robots_list[i].series_number != 0){
            if(robots_list[i].series_number < 0)
                printf("\n                        ROBOT  %s\n",robots_list[i].name);
            else
                printf("\n                        ROBOT  %s\n",robots_list[i].name);
            printf("- Series Number: %.0lf",robots_list[i].series_number);
            printf("\n- Name: %s",robots_list[i].name);
            printf("- Weight: %.2lf kg",robots_list[i].weight);
            printf("\n- Height: %.2lf meters",robots_list[i].height);
            printf("\n- Engine Power: %.0lf",robots_list[i].enginePower);
            printf("\n- Resistance: %.0lf",robots_list[i].resistance);
            printf("\n- Power: %.2lf",robots_list[i].power);
            printf("\n- Result: %.2lf\n",sum);
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n"); 
        }
    }
    PressEnter();
}

void get_date(){

    time_t mytime;
    mytime = time(NULL);
    struct tm tm = *localtime(&mytime);
    printf("\n Date: %d/%d/%d\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);

}


int main(){

rb rb[100];
int howMany, op, registered = 0;

printf("How many robots do you want to register: \n");
scanf("%d", &howMany);

while(howMany < 3){
    printf("3 robots are the minimum for registering, type again: ");
    scanf("%d", &howMany);

    if(howMany >= 3){
        break;
    }

}


  while((howMany >= registered)){

        get_date();

        printf("\n* Robots registered: %d *\n\n", registered);

        printf("(1) - Register new robot\n(2) - List robots\n(3) - Exit\n");

        printf("\n Option: ");
        scanf("%d", &op);

switch(op){

    case 1:

        register_robot(rb, registered);
        registered++;
        break;

    case 2:

        preview(rb, registered);
        break;

    case 3:

        printf("Closing system in 3 seconds...\n");

        for(int i = 3; i > 0; i--){
            printf("%d\n", i);
            sleep(1);
        }
         printf("Bye :(\n");
         exit(1);
    }
  }

   system("pause");
   return 0;

}
