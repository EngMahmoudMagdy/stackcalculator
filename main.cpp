#include <bits/stdc++.h>

using namespace std;

int main()
{

    char  y[1000] ;
//    scanf("%s",y) ;
    char yx =0;
    int ylen = strlen(y);
    stack <int>stk ;
    int num =0 , sum = 0;
    char temp = '+';


//    for(int i = 0 ; i <ylen ; i++)
//    {
        while(yx!='=')
        {
            cin>>yx;

        if(yx>47 && yx<59)//122*5
        {

          num= num*10 +(yx-'0');//-55*1=

        }
        else
        {
        if(temp=='-')
            {
//                printf("%d \n",num);
                num*=-1 ;
            }
            else if(temp =='*')
            {
                num = stk.top()*num ;
                stk.pop();

            }
            else if (temp=='/')
            {
                num = stk.top()/num ;
                stk.pop();
            }
            stk.push(num);

            temp = yx;
            num= 0 ;
        }

    }
    while(!stk.empty())
    {
        sum+=stk.top();
        stk.pop();

    }
    cout<<sum ;


    return 0;
        }
