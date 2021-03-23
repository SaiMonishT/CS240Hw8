#include <stdio.h>
#include <stdlib.h>
#include "deallocate_list.h"

int deallocate_list(Student_Record *linked_list) {
    //struct Student* next;
    //struct Student* headAdd = malloc(sizeof(struct Student));
   // struct Student* node = malloc(sizeof(struct Student));

    if(linked_list == NULL) {
        return -1;
    } else {
        struct Student* tmp;

    while (linked_list != NULL)
    {
       //tmp = linked_list;
       linked_list = linked_list->next;
      // free(tmp);
    } //while 
     /*   for(struct Student *temp = linked_list; temp != NULL; temp = temp -> next) {
           
          //  struct Student* new_node = malloc(sizeof(struct Student));

          //  new_node->next = NULL; // Link the address field of newNode with NULL

              //  temp2->next = new_node; // Link previous node to the newNode
              //  temp2 = temp2->next; 
              next = temp -> next;
                free(next);
        }//for iteration 
        */
        return 0;
    }//else
}//method 
