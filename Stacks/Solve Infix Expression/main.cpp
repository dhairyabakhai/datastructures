#include <iostream>


using namespace std;
int num[100];
char op[100];
int top1=-1;
int size1=0;
int top2=-1;
int size2=0;

void push1 (int e)
{
    top1++;
    num[top1]=e;
    size1++;

}

void push2 (char e)
{
    top2++;
    op[top2]=e;
    size2++;
}

int pop1()
{
    int x=num[top1];
    top1--;
    size1--;
    return x;
}

char pop2()
{
    char x=op[top2];
    top2--;
    size2--;
    return x;
}
int priority(char op)
{
    if (op=='*' || op=='/') return 3;
    else if( op=='+' || op=='-')return 2;
    else return 1;
}
int solve(int num1, int num2, char op)
{
    switch(op)
    {
        case '+': return (num1 + num2);
        case '-': return (num1 - num2);
        case '*': return (num1 * num2);
        case '/': return (num1 / num2);
        default: return 0;
    }
}

int main()
{
    char e[100];
    cout<<"Enter your expression\n";
    cin>>e;
    for(int i=0; e[i]!='\0';i++)
    {
        if (e[i]>48 && e[i]<=57)
        {
            push1(int(e[i])-48);
        }
        else if(e[i]=='+' || e[i]=='-' || e[i]=='*' || e[i]=='/')
        {
            if(priority(e[i])>=priority(op[top2]))
                {
                    push2(e[i]);
                }
            else
            {
                while(priority(e[i])<priority(op[top2]))
                {
                    push1(solve(pop1(),pop1(),pop2()));
                }
                push2(e[i]);
            }
        }
    }



    while (size2!= 0)
    {
        push1(solve(pop1(),pop1(),pop2()));

    }
    cout<<num[top1];

}
