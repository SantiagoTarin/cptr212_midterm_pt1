  
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "contrib.h"


int main(int argc,char** argv){

typedef struct santiago_class{
    char ship_name[200];
    char* former_owner;
    int max_speed;
    char record_speed;
    char ship_dimensions;
    int pilots;



} santiago_class; 

santiago_class* santiago_ctor() {
    santiago_class* sc = malloc(sizeof(santiago_class)); 

    strcpy(sc->ship_name,"Millennium Falcon");
    strcpy(sc->former_owner = "Han Solo");
    sc->max_speed = 1050; 
    strcpy(sc->record_speed = "Kessel Run in Less than Twelve Parsecs");
    strcpy(sc->ship_dimensions = "L = 34.75 metres H=7.8 Metres");
    sc->pilots = 2;

    return sc; 
} 

int santiago_get(santiago_class* sc) {
    return sc->max_speed;

}

// Method to set value in a class.  
void santiago_set(santiago_class* sc, char record_speed) {
    sc->record_speed = record_speed; 
}

// void* sample_custom(); 
void* santiago_custom(santiago_class* sc, int pilots) {
    sc->former_owner = 6; 
    return NULL; 
}

// Function to print values of the object.  
void santiago_print(santiago_class* sc) {
    printf("ship name: %s\n", sc->ship_name);
    printf("former owner: %s\n",sc->former_owner);
    printf("max speed:%d\n", sc->max_speed);
    printf("record speed:%s\n", sc->record_speed);
    printf("ship dimesnions:%s\n",sc->ship_dimensions);
    printf("pilots:%d\n", sc->pilots);
}

void santiago_dtor(santiago_class* sc) {
   
    free(sc); 
    

    return EXIT_SUCCESS;
}