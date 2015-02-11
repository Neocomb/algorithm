/*************************************************************************
	> File Name: graph.c
	> Author: 
	> Mail: 
	> Created Time: Thu 05 Feb 2015 08:07:52 AM PST
 ************************************************************************/

#include<stdio.h>
#include<errno.h>
#include<stdlib.h>
#include "graph.h"
#ifndef LOG
#define LOG(str,...) fprintf(stdout,str,##__VA_ARGS__)
#define LOGE(str) perror(str)
#endif


int readGraph(Matrix mt){
    assert( mt->vec && mt->width >= 0 && mt->height >= 0 );

    int i , j ;
    for( i=0;i<mt->width;i++ )
    {
        for(j=0;j<mt->height;j++){

        }
    }
}
int insertNode(  );
int bfs( graph g  );
int dfs( graph g  );
