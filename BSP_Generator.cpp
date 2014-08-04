#include "BSP_Generator.h"


BSP_Generator::BSP_Generator()
{
}


BSP_Generator::~BSP_Generator()
{
}

void BSP_Generator::Init(int n, int k, int p)
{
    this->size = n;
    this->order = k;
    this->pathlength = p;
    this->number = 0;
}

void BSP_Generator::Generate()
{
    top = new NODE;
    bottom = new NODE;
    Recursion(0, top);
}

void BSP_Generator::Recursion(int deep, NODE* t)
{
    NODE* p = t;
    int n = 0;
    if (n < size)
    {
        if (p != bottom)
        {
            if (p->nEdge == 0)
            {
                // This is the first edge added into the bSP
                p->sEdge = new EDGE;
                p->sEdge->uNODE = p;
                p->sEdge->dNODE = bottom;
                (p->nEdge) = 1;
                Recursion(deep++, p->mChild);
            }
            else if (p->mChild != NULL)
            {
                p->lChild = p->mChild;
                p->rChild = p->mChild;
                p->mChild = NULL;
                (p->nChild) = 2;
                Recursion(deep++, )
            }
        }
        else
        {
            p = p->parent;

        }
    }
}


int main(int argc, char* argv[])
{
    BSP_Generator generator;
    if (argc < 3)
    {
        cout << "usage: generator.exe size order pathlength" << endl;
        exit(-1);
    }
    generator.Init(atoi(argv[0]), atoi(argv[1]), atoi(argv[2]));
    generator.Generate();
    return 0;
}