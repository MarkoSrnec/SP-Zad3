#include <iostream>
using namespace std;
struct klijent{
       int ai, bi, ci, di;
       char ime[30], prezime[30];
       int dan, mj, god;
       char spol;     
};
struct q {
       klijent klijenti;
       q *sljedeci;
};
struct que {
       q *front, *rear;       
};
typedef struct que red;
 
klijent FrontQ(red *Q){
        if ( Q->front != Q->rear) 
             return( Q->front->sljedeci->klijenti);
                            
};
void EnQueueQ(klijent x,red *Q){
     q *novi = new q;
     novi->klijenti = x;
     novi->sljedeci = NULL;
     Q->rear->sljedeci = novi;
     Q->rear = novi;
};
 
bool IsEmptyQ(red *Q){
     if(Q->front == Q->rear) 
     return true;
     else 
     return false;
     }
void DeQueueQ(red *Q){
     if(IsEmptyQ(Q)){
              return;
              }
     q *pom = Q->front;
     Q->front = (Q->front)->sljedeci;
     delete pom;
}
red *InitQ(red *Q){
    Q=new red;
    q *novi=new q;
    novi->sljedeci=NULL;
    Q->front=novi;
    Q->rear=novi;
    return Q;   
}
