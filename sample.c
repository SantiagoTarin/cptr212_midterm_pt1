#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct sample_class {
    int significant_property; 
    char id; 
    int random; 
    char name[128]; 
    char* last_name; 
    float f; 
    int asdf; 
} sample_class; 

sample_class* sample_ctor() {
    sample_class* sc = malloc(sizeof(sample_class)); 

    sc->significant_property = 100; 
    sc->id = 'l'; 
    sc->random = 237; 
    strcpy(sc->name, "evan"); 
    sc->last_name = malloc(sizeof(char) * 128); 
    strcpy(sc->last_name, "daniel"); 
    sc->f = 0; 
    sc->asdf = 0; 

    return sc; 
} 

int sample_get(sample_class* sc) {
    return sc->random; 
}

// Method to set value in a class.  
void sample_set(sample_class* sc, float f) {
    sc->f = f; 
}

// void* sample_custom(); 
void* sample_custom(sample_class* sc) {
    sc->random *= 2; 
    return NULL; 
}

// Function to print values of the object.  
void sample_print(sample_class* sc) {
    printf("Significant property: \033[38;2;0;255;255m%d\033[0m\n", sc->significant_property); 
    printf("ID: %c\n", sc->id); 
    // . . . 
}

void sample_dtor(sample_class* sc) {
    free(sc->last_name); 
    free(sc); 
}