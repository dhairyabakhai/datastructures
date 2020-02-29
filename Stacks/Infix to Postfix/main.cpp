#include <iostream>

using namespace std;
char num[100];
char op[100];
int top1=-1;
int top2=-1;
int size1=0;
int size2=0;
void push1(char i)
{
    top1++;
    num[top1]=i;
    size1++;
}
void push2(char e)
{
    top2++;
    op[top2]=e;
    size2++;
}
void pop1()
{
    top1--;
    size1--;
}
void pop2()
{
    top2--;
    size2--;
}
int precedence(char x)
{
    if (x=='*' || x=='/') return 3;
    else if (x=='+'|| x=='-') return 2;
    else return 1;

}
int main()
{
    char e[100];
    cout<<"Enter your expression"<<endl;
    cin>>e;
    for(int i=0;e[i]!='\0'; i++)
    {

        if (e[i] >=48 && e[i] <=57)
            {push1(e[i]);}
        else
        {
            if (precedence(op[top2])<=precedence(e[i])) {push2(e[i]);}
            else
            {
                while(precedence(op[top2])>precedence(e[i]))
                {
                    push1(op[top2]);
                    pop2();
                }
                push2(e[i]);
            }
        }

    }
    while(top2!=-1)
    {
        push1(op[top2]);
        pop2();
    }
    for(int i=0;i<size1;i++)
    {
        cout<<num[i];
    }
    return 0;
}
