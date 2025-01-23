#include <stdio.h>
#include <stdlib.h>

// Define the linked list
    StructNode{
        int data;
        struct Node* next; 
    };
// Create a new node
    void display(StructNode* CreateNode(int data)){
        struct Node* new_Node=(struct Node*)malloc(sizeof(struct Node));
        new_Node->data = data;
        new_Node->next = NULL;
    }    

// Create function to merge two sorted linked link
     void merge(struct Node*list1,struct Node*list2,struct Node**head_ref){
        struct Node*head;
        head_ref=NULL;
             if(!list1) return list2;
             if(!list2) return list1;
             if(list1-> data <list2-> data){
                tail->next = list1
                list1 = list1 ->next;
                tail = tail ->next;
             } else{
                tail->next = list2;
                list2 = list2 ->next;
                tail = tail ->next;
             }
     }

 // Function to print the elements of a linked list    
    void printlist(StructNode*node){
        while(node!=NULL){
            printif("%d->,"node->data);
            node= node-> next;
        }
        printf("NULL\n");
    }

    printf("Enter elements for list1:"):
    struct Node*new_Node=(struct Node*)malloc(sizeof(struct Node));
    new_Node-> data
    new_Node-> next= NULL;
        if(list==NULL){
            list 1= new_Node;
        } else{
            list 1->next=new_Node;
        }
    }
    printf("Enter elements for list2:");
    struct Node*new_Node=(struct Node)malloc(sizeof(struct Node));
    new_Node-> data;
    new_Node-> next= NULL;
         if(list2==NULL){
            list 2=new_Node;
        } else {
            list2->next=new_Node;
        }
    }

    struct Node*merge list = merge(list1,list2);
    printf("Merge List:\n");
    printList(mergeList);
     
    return o;
    }