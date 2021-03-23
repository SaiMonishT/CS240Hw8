#include <stdio.h>
#include <stdlib.h>
#include "deallocate_list.h"

int deallocate_list(Student_Record *linked_list) {
    if(linked_list == NULL) {
        return -1;
    } else {
        struct Student* tmp;
        while (linked_list != NULL){
        //tmp = linked_list
            tmp = linked_list;
            linked_list = linked_list->next;
            //free(tmp);
            free(tmp -> name);
            free(tmp);
        } //while
        
        return 0;
    }//else
}//method 
