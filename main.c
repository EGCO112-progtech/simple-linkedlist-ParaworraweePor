//
//  main.c
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.
//

#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(int argc, const char * argv[]) {
    int c=5;
    struct node a,b,d,e,*head ;
    a.value = c;
    a.next = &b;
    head = &e;
    e.value = 2;
    e.next = &a; 
    b.value = head->next->value+3;
    b.next = &d;
    d.value = head->next->next->value+3;
    d.next = NULL;

    printf("%d\n", head ->value ); //print a.value = 2
    printf("%d\n", head ->next->value ); //print a.value = 5
    printf("%d\n", head ->next->next->value ); //print b.value = 8
    printf("%d\n", head ->next->next->next->value ); //print e.value = 11
/*  Exercise I
    1. Add 1 more than at the end
    2. Add value(11)
    3. Make next become NULL
    4. printf with *head
 */

    
/*  Exercise II
        1. Add 1 more than at the begining!!!!
        2. Add value (2)
        
*/
    typedef struct node* NodePtr;
    NodePtr tmp=head; //add temp value to faciliate
        
    // /*  Exercise III Use loop to print everything
        int i,n=4;
        for(i=0;i<n;i++)
        {
            printf("%3d", tmp->value);
          tmp = tmp->next;
        }
        printf("\n");
    
//    /*  Exercise IV change to while loop!! (you can use NULL to help)
        tmp=head;
        while(tmp!=NULL)
        {
            printf("%3d", tmp->value);
           tmp = tmp->next;
        }
        printf("\n");
    
//  /*  Exercise V Use malloc to create all nodes, instead of create a struct!!
         //use a loop to help
    typedef struct node* NodePtr;
        NodePtr temp;
        head = (NodePtr)malloc(sizeof(struct node));
        temp = head;
        for(i=2;i<=11;i=i+3)
        {
        temp -> value = i;
        if(i==11) temp -> next =NULL;   
        else temp -> next = (NodePtr)malloc(sizeof(struct node));
        printf("%3d", temp->value);
        temp = temp -> next;
        }
        printf("\n");
        
    // /*  Exercise VI Free all node !!
         //use a loop to help
        while(head!=NULL)
        {
            temp=head;
            printf("%3d", temp->value);
            head=head->next;
            free(temp);
        }
        printf("\n");  
    
    return 0;
}        
