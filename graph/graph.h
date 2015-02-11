/*************************************************************************
	> File Name: graph.h
	> Author: 
	> Mail: 
	> Created Time: Thu 05 Feb 2015 08:08:15 AM PST
 ************************************************************************/

#ifndef _GRAPH_H
#define _GRAPH_H
enum vcolor{
    WHITE = 1,
    GRAY,
    BLACK
}

typedef struct _tnode{
    int value;
    struct _node * lc;
    struct _node * rc;
    struct _node * parent;
}*tnode;

typedef struct _Matrix{
    int width;
    int height;
    int ** vec;
}*Matrix;

typedef struct _gedge{
    int weight;
    struct _gedge * next;
}*gedge;

typedef struct _gvertex{
    int value;
    vcolor color;
    int startTime;
    int finishTime;
    gedge edgelist;

}*gvetex;

typedef struct _graph{
    int gsize;
    gvetex vlist; 
}*graph;

gvetex createdvectex()

int readGraph(Matrix mt);
int insertNode(  );
int bfs( graph g  );
int dfs( graph g  );

#endif
