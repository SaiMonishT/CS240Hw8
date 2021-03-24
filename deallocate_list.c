#include <stdio.h>
#include <stdlib.h>
#include "deallocate_list.h"

int deallocate_list(Student_Record *linked_list) {
    if(linked_list == NULL) {
        return -1;
    } else {
        struct Student* temp;
        while (linked_list != NULL){
            temp = linked_list;
            linked_list = temp->next;
            free(temp -> name);
            free(temp);
            temp = NULL;
        } //while

       // free(temp);
        return 0;
    }//else
}//method 
