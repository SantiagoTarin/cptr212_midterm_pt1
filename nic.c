#include <stdlib.h>
#include <stdio.h>

typedef struct nic_class;{
    char Full_Name;
    int id;
    int Age;
    char Email_address;
    char Job_description;

} nic_class;

nic_class* nic_ctor(){
    nic_class* ab = malloc(sizeof(nic_class));

    strcpy(ab->Full_Name,"Nicholas Longoria")
    ab->id = '28';
    ab->Age = '21';
    strcpy(ab->Email_address,"Nicholas.longoria@sckans.edu")
    strcpy(ab->Job_description,"Janitor")

}
nic_class nic_get(nic_class* ab);{
    return ab->Age;

}

void nic_set(nic_class* ab){
   ab->Age = 21;
} 
void* nic_custom(nic_class* ab) {
    ab->Age *= 22;
    return NULL;

} 

void nic_print(nic_class* ab){
    print("Full Name: ", sc->Full_Name);
    print("Job Description: ",sc->Job_description);


}
void nic_dtor(nic_class* ab){
    free(ab)
}
