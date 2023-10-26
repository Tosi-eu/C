#include <stdio.h>
#include <time.h>

void welcome();
void interval(int last_station, int next_station);
void station_record(int st0_inps, int st0_outs, int st1_inps, int st1_outs, int st2_inps, int st2_outs, int st3_inps, int st3_outs, int st4_inps, int st4_outs, int total);
void diference(int diff0_1, int diff1_2, int diff2_3, int total_left);
void sum_stations(int in_1, int in_2, int in_3, int in_4);

typedef struct{

  int pass_inps;
  int pass_outs;

}st0;

typedef struct{

  int pass_inps;
  int pass_outs;
  st0 pass0;

}st1;

typedef struct{

   int pass_inps;
   int pass_outs;
   st1 pass1;

}st2;

typedef struct{

   int pass_inps;
   int pass_outs;
   st2 pass2;

}st3;

typedef struct{

  int pass_inps;
  int pass_outs;
  st3 pass3;
}st4;

int main(){

  st4 pass;

  pass.pass3.pass2.pass1.pass_outs = 0;
  pass.pass3.pass2.pass1.pass_outs = 0;
  pass.pass3.pass2.pass_outs = 0;
  pass.pass3.pass_outs = 0;
  pass.pass_outs = 0;

  int total_in = 0, total_pass = 0, total_diff = 0;
  welcome();

  printf("\nSation 0: \n");

  scanf("%d", &pass.pass3.pass2.pass1.pass0.pass_inps);

  while(pass.pass3.pass2.pass1.pass0.pass_inps < 0){
    printf("\n[ERROR] Input is no longer available at this moment...\nType again: ");
    scanf("%d", &pass.pass3.pass2.pass1.pass0.pass_inps);
  }

  total_in += pass.pass3.pass2.pass1.pass0.pass_inps;

  interval(0, 1);

  scanf("%d %d", &pass.pass3.pass2.pass1.pass_inps, &pass.pass3.pass2.pass1.pass_outs);

  while(pass.pass3.pass2.pass1.pass_outs > total_in){
    printf("\n[ERROR] Outs are bigger than the inputs in the last station...\nType again: ");
    scanf("%d", &pass.pass3.pass2.pass1.pass_outs);
  }

  total_in += pass.pass3.pass2.pass1.pass_inps;
  total_in -= pass.pass3.pass2.pass1.pass_outs;
  
  interval(1, 2);

  scanf("%d %d", &pass.pass3.pass2.pass_inps, &pass.pass3.pass2.pass_outs);

   while(pass.pass3.pass2.pass_outs > total_in){
    printf("\n[ERROR] Outs are bigger than the inputs in the last station...\nType again: ");
    scanf("%d", &pass.pass3.pass2.pass_outs);
  }

  total_in += pass.pass3.pass2.pass_inps;
  total_in -= pass.pass3.pass2.pass_outs;
  
  interval(2, 3);

  scanf("%d %d", &pass.pass3.pass_inps, &pass.pass3.pass_outs);

  while(pass.pass3.pass_outs > total_in){
    printf("\n[ERROR] Outs are bigger than the inputs in the last station...\nType again: ");
    scanf("%d", &pass.pass3.pass_outs);
  }

  total_in += pass.pass3.pass_inps;
  total_in -= pass.pass3.pass_outs;
  total_pass += (pass.pass3.pass2.pass1.pass0.pass_inps + pass.pass3.pass2.pass1.pass_inps + pass.pass3.pass2.pass_inps + pass.pass3.pass_inps);
  total_diff += (pass.pass3.pass2.pass1.pass_outs + pass.pass3.pass2.pass_outs + pass.pass3.pass_outs + pass.pass_outs);

  interval(3, 4);

  printf("Generating report...\n");
  for(int i = 3; i > 0; i--){
    printf("%d\n", i);
    sleep(1);
  }

  station_record(pass.pass3.pass2.pass1.pass0.pass_inps, 0, pass.pass3.pass2.pass1.pass_inps, pass.pass3.pass2.pass1.pass_outs, pass.pass3.pass2.pass_inps, pass.pass3.pass2.pass_outs, pass.pass3.pass_inps, pass.pass3.pass_outs, 0, total_in, total_pass);
  diference((pass.pass3.pass2.pass1.pass_outs - 0), (pass.pass3.pass2.pass_inps - (pass.pass3.pass2.pass1.pass_inps - pass.pass3.pass2.pass1.pass_outs)), (pass.pass3.pass_inps - (pass.pass3.pass2.pass_inps - pass.pass3.pass2.pass_outs)), total_diff);
  sum_stations(pass.pass3.pass2.pass1.pass0.pass_inps, (pass.pass3.pass2.pass1.pass0.pass_inps + pass.pass3.pass2.pass1.pass_inps) - pass.pass3.pass2.pass1.pass_outs, (pass.pass3.pass2.pass1.pass0.pass_inps + pass.pass3.pass2.pass1.pass_inps + pass.pass3.pass2.pass_inps) - (pass.pass3.pass2.pass1.pass_outs + pass.pass3.pass2.pass_outs + pass.pass3.pass_outs), total_in);
}

void welcome(){

printf("\nWelcome to the station system!\n");
sleep(3);
printf("Loading...\n");
sleep(1);
for(int i = 3; i > 0; i--){
  printf("%d\n", i);
  sleep(1);
}
printf("Starting system...\n");
sleep(3);
system("cls");
}

void interval(int last_station, int next_station){

  printf("\nLeft: station %d --> Destiny: Station %d\n", last_station, next_station);
  sleep(1);
  printf("\nAmount of passengers leaving and boarding: ");
}

void station_record(int st0_inps, int st0_outs, int st1_inps, int st1_outs, int st2_inps, int st2_outs, int st3_inps, int st3_outs, int st4_inps, int st4_outs, int total){

  printf("\n===============================================================\n");
  printf("\nStation 0: Inputs: %d Outputs: 0\n", st0_inps);
  printf("Station 1: Inputs: %d Outputs: %d\n", st1_inps, st1_outs);
  printf("Station 2: Inputs: %d Outputs: %d\n", st2_inps, st2_outs);
  printf("Station 3: Inputs: %d Outputs: %d\n", st3_inps, st3_outs);
  printf("Station 4: Inputs: %d Outputs: %d\n", st4_inps, st4_outs);
  printf("\n[Total passengers]: %d\n", total);
  
}

void diference(int diff0_1, int diff1_2, int diff2_3, int total_left){

  printf("\n[Diference between stations, about evasion of passengers]\n\n");
  printf("Difference of station 0 and 1: %d\n", diff0_1);
  printf("Difference of station 1 and 2: %d\n", diff1_2);
  printf("Difference of station 2 and 3: %d\n", diff2_3);
  printf("\n[Total Evasion]: %d\n", total_left);

}

void sum_stations(int in_1, int in_2, int in_3, int in_4){

  printf("\n[Relation of input and output of passengers between stations]\n\n");
  printf("Passengers in Station 1: %d\n", in_1);
  printf("Passengers in Station 2: %d\n", in_2);
  printf("Passengers in Station 3: %d\n", in_3);
  printf("Passengers in Station 4: %d\n\n", in_4);

printf("\n===============================================================\n");
}
