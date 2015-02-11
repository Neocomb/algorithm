/*************************************************************************
	> File Name: tree.c
	> Author: 
	> Mail: 
	> Created Time: Tue 03 Feb 2015 01:41:57 PM PST
 ************************************************************************/

#include<stdio.h>
#include<errno.h>
#include<stdlib.h>

#define LOG(str,...) fprintf(stdout,str,##__VA_ARGS__)
#define LOGE(str) perror(str)

struct n{
    int value;
    struct n* lc;
    struct n* rc;
    struct n* parent;
}
typedef struct n node;
typedef struct{
    node* root;
    int nodeNum;
}tree;

int insert( tree* t , int value );
int delete( tree* t , int value );
int insert( tree* t , int value );
int insert( tree* t , int value );
