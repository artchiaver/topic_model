#include "ran3.h"

typedef struct rsm
{
    double *w;  // weights array
    double *b;  // biases array
    int *v;     // visible layer 
    int *h;     // hidden layer
    int nw;     // number of weights 
    int nb;     // number of biases
    int nv;     // number of visible units
    int nh;     // number of hidden units
    int d;
} RSM_t;

RSM_t *rsm_build(const int nv, const int nh, const int doc_size);
void rsm_save(const RSM_t *rsm_nn, const char * path);
RSM_t *rsm_load(const char * path);
void rsm_print(const double * arr, int size);
void rsm_free(RSM_t *rsm_nn);

int * rsm_train(RSM_t *rsm_nn, const int * in);
int * rsm_predict(RSM_t *rsm_nn, const int * in);
