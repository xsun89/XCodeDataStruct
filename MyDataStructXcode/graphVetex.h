//
//  graphVetex.h
//  MyDataStructXcode
//
//  Created by Xin Sun on 2014-07-12.
//  Copyright (c) 2014 Xin Sun. All rights reserved.
//

#ifndef MyDataStructXcode_graphVetex_h
#define MyDataStructXcode_graphVetex_h

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

typedef int Status;
typedef int Boolen;

typedef char VertexType;
typedef int EdgeType;

#define MAXSIZE 9;
#define MAXEDGE 15;
#define MAXVEX 9;
#define INFINITY 65535;

typedef struct MGraph_
{
    VertexType vexs[MAXVEX];
    EdgeType arc[MAXVEX][MAXVEX];
    int numVertexes, numEdges;
}MGraph;

typedef struct Queue_
{
    int data[MAXSIZE];
    int front;
    int rear;
};

#endif
