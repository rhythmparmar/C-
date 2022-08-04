#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

#define SIZE 100

int Stack[SIZE], top=-1;

int isFull()
{
  return top==(SIZE-1);
}

int isEmpty()
{
  return top==-1;
}

// Function to add an item to stack.  It increases top by 1
int push(char item)
{
  if (isFull())
  {
    return -1;
  }
  Stack[++top] = item;
}

// Function to remove an item from stack.  It decreases top by 1
char pop()
{
  char temp;
  temp=Stack[top--];
  return temp;
}
char peek()
{
  char temp;
  temp=Stack[top];
  return temp;
}
/*
int Stack[SIZE], top=-1;
int isFull();
int isEmpty();
int push(int item);
int pop();

Above variables are used for Stack, SIZE and top and all are global variables. Also above push and pop functions are provided. */
int getPriority(char op){
  int priority;
  if(op=='^')
    priority=2;
  else if(op=='/' || op=='*' || op=='%')
    priority=1;
  else if(op=='+' || op=='-')
    priority=0;
  return priority;

 }

int infixToPostfix(char exp[], char output[])
{
    char *s, *t;
    s=exp;
    t=output;
    while(*s){
        if((*s==' ')|| (*s=='\t')){
            s++;
            continue;
            }
            else if(*s=='('){
                push(*s);
                s++;
            }
            else if(*s==')'){
                while((!isEmpty())&& (peek()!='(')){
                    *t=pop();
                    t++;
                }
                if(isEmpty()){
                    cout<<endl<<"Error:Invalid Expression:";
                    //disposeStack(&top);
                    exit(1);
                }
                pop();
                s++;
            }
            else if(isdigit(*s) || isalpha(*s)){
                *t=*s;
                t++;
                *t=' ';
                t++;
                s++;
            }
            else if(*s=='+' || *s=='-' || *s=='*' || *s=='/' || *s=='%'){
                while((!isEmpty()) && (peek()!='(') && (getPriority(peek())>=getPriority(*s))){
                    *t=pop();
                    t++;
                    *t=' ';
                    t++;
                }
                push(*s);
                s++;
            }
            else{
                cout<<endl<<"Error:Incorrect Element in Expression:";
                //disposeStack(&top);
                exit(1);
            }

        }
        while((!isEmpty()) && (peek()!='(')){
            *t=pop();
            t++;
            *t=' ';
            t++;
        }
        if(peek()=='('){
            cout<<endl<<"Error:Incorrect Expression:";
            //disposeStack(&top);
            exit(1);
        }
        *t='\0';

    }



int main()
{
  int n;
  char *exp, input[100], output[100];
  cin>>n;
  exp = input;
  while(n--)
  {
    cin>>exp;
    infixToPostfix(exp, output);
    cout<<output<<endl;
  }
  return 0;
}
