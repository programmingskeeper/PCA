#include <stdio.h>
#include "AVL.H"

int max(int a, int b){
    return (a>b ? a:b);
}

int find_maxlen(NodeAVL *node){
   if(node==NULL) return 0;
   find_maxlen(node->left);
   find_maxlen(node->right);
}
int compute_BF(NodeAVL *node){
    int left_len, right_len;
}