#include <stdio.h>
#include "interface.h"
/* typedef enum {a, b , c}need;*/

 /*int trun_on(char onset) ;
 int main(char needed);
 int set_color(char chose_color);
 int set_room_temp(char chose_room_temp); 
 int set_engine_temp(char chose_engine_temp);*/
char chose_color,chose_room_temp,chose_engine_temp,onset,needed;


// structure to varables 
typedef struct {
    char *state_engine;
    char *state_AC;
    int speed;
    int temp_room;
    char *temp_controler;
    int temp_engine;
}set_menu;


// function trun on and print chooses to set in the vehicle
int trun_on(char onset) {
//   char onset ;
printf("\n\na.Turn off the engine.\n");
printf("b. Set the traffic light color.\n");
printf("c. Set the room temperature (Temperature Sensor).\n");
printf("d. Set the engine temperature (Engine Temperature Sensor).\n");
    scanf("%s",&onset);
        switch (onset){
          case 'a' :main(needed); break;
          case 'b' :set_color(chose_color); break;
          case 'c' :set_room_temp(chose_room_temp); break;
          case 'd' :set_engine_temp(chose_engine_temp); break;

        }
return 0;

}
 
// function to ask user about engine temperature
int set_engine_temp (char chose_engine_temp){
    //get input from user
  printf("enter the engine temperature.\n");
    scanf("%s",&chose_engine_temp);
// if user entered engine temperature less than 100
        if(chose_engine_temp<100){
    set_menu setETemp100 ={"ON","ON",100,125,"ON",125};
              printf("\nEngine is %s",setETemp100.state_engine);
              printf("\nAC is %s",setETemp100.state_AC);
              printf("\nvehicle speed : %d km/Hr",setETemp100.speed);
              printf("\nroom temperature : %d c",setETemp100.temp_room);
              printf("\nEngine temperature controler : %s",setETemp100.temp_controler);
              printf("\nEngine temperature %d c",setETemp100.temp_engine);
              trun_on(onset);
            
        }
        // temperature is greater than 150
        if(chose_engine_temp>150){

    set_menu setETemp150 ={"ON","ON",100,125,"ON",125};
              printf("\nEngine is %s",setETemp150.state_engine);
              printf("\nAC is %s",setETemp150.state_AC);
              printf("\nvehicle speed : %d km/Hr",setETemp150.speed);
              printf("\nroom temperature : %d c",setETemp150.temp_room);
              printf("\nEngine temperature controler : %s",setETemp150.temp_controler);
              printf("\nEngine temperature %d c",setETemp150.temp_engine);
              trun_on(onset);
        }     
          //otherwise 
        else{

    set_menu setETempother ={"ON","ON",100,125,"OFF",125};
              printf("\nEngine is %s",setETempother.state_engine);
              printf("\nAC is %s",setETempother.state_AC);
              printf("\nvehicle speed : %d km/Hr",setETempother.speed);
              printf("\nroom temperature : %d c",setETempother.temp_room);
              printf("\nEngine temperature controler : %s",setETempother.temp_controler);
              printf("\nEngine temperature %d c",setETempother.temp_engine);
              trun_on(onset);
        }
return 0;
}
// function to ask user about room temperature
int set_room_temp(char chose_room_temp){
// get input from user
  printf("enter the room temperature.\n");
    scanf("%s",&chose_room_temp);
    //if room temperature less than 10
    if(chose_room_temp<10){
      set_menu setTemp10 ={"ON","ON",100,20,"OFF",90};
              printf("\nEngine is %s",setTemp10.state_engine);
              printf("\nAC is %s",setTemp10.state_AC);
              printf("\nvehicle speed : %d km/Hr",setTemp10.speed);
              printf("\nroom temperature : %d c",setTemp10.temp_room);
              printf("\nEngine temperature controler : %s",setTemp10.temp_controler);
              printf("\nEngine temperature %d c",setTemp10.temp_engine);
              trun_on(onset);
    }
    // temperature is greater than 30
    else if (chose_room_temp>30){
      set_menu setTemp30 ={"ON","ON",100,20,"OFF",90};
              printf("\nEngine is %s",setTemp30.state_engine);
              printf("\nAC is %s",setTemp30.state_AC);
              printf("\nvehicle speed : %d km/Hr",setTemp30.speed);
              printf("\nroom temperature : %d c",setTemp30.temp_room);
              printf("\nEngine temperature controler : %s",setTemp30.temp_controler);
              printf("\nEngine temperature %d c",setTemp30.temp_engine);
              trun_on(onset);
    }
    // otherwise
    else {
       set_menu setTemp_other ={"ON","OFF",100,20,"OFF",90};
              printf("\nEngine is %s",setTemp_other.state_engine);
              printf("\nAC is %s",setTemp_other.state_AC);
              printf("\nvehicle speed : %d km/Hr",setTemp_other.speed);
              printf("\nroom temperature : %d c",setTemp_other.temp_room);
              printf("\nEngine temperature controler : %s",setTemp_other.temp_controler);
              printf("\nEngine temperature %d c",setTemp_other.temp_engine);
              trun_on(onset);
           }

    
return 0;
}
// function to ask user about color
int set_color(char chose_color){
  // get input from user
  printf("enter the required color.\n");
    printf("enter R to Red,enter Y to Yellow or enter G to Green.\n");
    scanf("%s",&chose_color);
    // if user entered G
            switch (chose_color){
              case 'G' :
              set_menu setg ={"ON","OFF",100,35,"OFF",90};
              printf("\nEngine is %s",setg.state_engine);
              printf("\nAC is %s",setg.state_AC);
              printf("\nvehicle speed : %d km/Hr",setg.speed);
              printf("\nroom temperature : %d c",setg.temp_room);
              printf("\nEngine temperature controler : %s",setg.temp_controler);
              printf("\nEngine temperature %d c",setg.temp_engine);
              trun_on(onset);
              break;
    // if user entered Y

              case 'Y' :
              set_menu sety ={"ON","OFF",30,35,"OFF",90};
              printf("\nEngine is %s",sety.state_engine);
              printf("\nAC is %s",sety.state_AC);
              printf("\nvehicle speed : %d km/Hr",sety.speed);
              printf("\nroom temperature : %d c",sety.temp_room);
              printf("\nEngine temperature controler : %s",sety.temp_controler);
              printf("\nEngine temperature %d c",sety.temp_engine);
              trun_on(onset);
              break;
    // if user entered R

              case 'R' :
              set_menu setr ={"ON","OFF",0,35,"OFF",90};
              printf("\nEngine is %s",setr.state_engine);
              printf("\nAC is %s",setr.state_AC);
              printf("\nvehicle speed : %d km/Hr",setr.speed);
              printf("\nroom temperature : %d c",setr.temp_room);
              printf("\nEngine temperature controler : %s",setr.temp_controler);
              printf("\nEngine temperature %d c",setr.temp_engine);
              trun_on(onset);
              break;

            }

return 0;
}


// function to ask user what he need to do
int main(char needed){ 
  // get input from user
    printf("\n\nwrite what you need\n");
    printf("a.Trun on the vehicle\n");
    printf("b.Trun off the vehicle\n");
    printf("c.Quit the system\n");
    scanf("%s",&needed);
    switch (needed){
      // if user entered a
    case 'a':
        printf("Trun on the vehicle\n");
        trun_on(onset);
    return 0;
       break;
   // if user entered b
    case 'b':
    main( needed);
      break;
    // if user entered c
    case 'c':
    printf("Quit the system\n");
      return 0;
      break;
    }
    return 0;
}
