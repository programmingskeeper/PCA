#include<stdio.h>
#include<stdlib.h>
#include"AVL.h"


int main()
{
    NodeAVL *input_node=NULL; int value; char decision;
	while(true){
        printf("Please select your operation. \n A-Add node \n D-Delete note \n S-Stop operation selection \n");
        scanf(" %c", &decision);
        if(decision=='A'){
            printf("Please insert node value:\n");
            scanf("%d",&value);
            input_node= insertAVLNode(input_node, value);
        } else if (decision=='D'){
            printf("Please insert node value that gets deleted:\n");
            scanf("%d", &value);
            input_node= deleteAVLNode(input_node, value);
        } else if (decision=='S'){
            displayAVLTree(input_node,0);
            break;
        } else {continue;}
        
    }
	
	return 0;	
}