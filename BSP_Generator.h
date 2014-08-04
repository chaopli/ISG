#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;

typedef struct NODE;

typedef struct EDGE
{
    NODE* uNODE = NULL;
    NODE* dNODE = NULL;
} EDGE;
typedef struct NODE
{
    EDGE* uEdge = NULL;
    EDGE* lEdge = NULL;
    EDGE* rEdge = NULL;
    EDGE* sEdge = NULL;
    int nEdge = 0;
} NODE;

class BSP_Generator
{
public:
    BSP_Generator();
    ~BSP_Generator();
    void Init(int n, int k, int p);
    void Generate();
private:
    void Recursion(int deep, NODE* t);
    int size;
    int order;
    int pathlength;
    int number;
    vector<NODE*> vNode;
    vector<int> vOrder;
    NODE* top;
    NODE* bottom;
};

