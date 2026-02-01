#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MaxSize 100

typedef struct{
    int data[MaxSize];
    int top;
}SqStack;


void InitStack(SqStack *S){
    S->top = -1;
}

bool IsEmpty(SqStack S){
    return S.top == -1;
}

bool Push(SqStack *S, int x){
    if (S->top == MaxSize - 1) return false;
    S->data[++(S->top)] = x;
    return true;
}

bool Pop(SqStack *S, int *x){
    if (S->top == -1) return false;
    *x = S->data[(S->top)--];
    return true;
}

bool GetTop(SqStack S, int *x){
    if (S.top == -1) return false;
    *x = S.data[S.top];
    return true;
}

int main(){
    SqStack S;
    int value;

    InitStack(&S);
    Push(&S, 20);
    Push(&S, 30);
    Push(&S, 40);
    GetTop(S, &value);
    printf("the stack top = %d\n", value);
    return 0;
}
