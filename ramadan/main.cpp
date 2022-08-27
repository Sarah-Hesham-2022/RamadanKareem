#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    cout<<"Happy Ramadan to you , enter the phanos size..."<<endl;
    int x,f;
    cin>>x;
    int y=x/2;
    int k=0;
    for(int i=0;i<y;i++){
        for(int j=0;j<((2*y)-1);j++){
            if(j<(y-(i-1))|| j>(y+(i-1))){
               if(k==0)
               cout<<setw(y+1)<<'0';
               cout<<" ";
               k=k+1;
            }
            else
                    cout<<"*";
        }
        cout<<endl;
    }
    for(int m=0;m<y-4;m++){
        for(int n=0;n<2*(y)-1;n++){
            if(n==m && n<y+1 )
                cout<<setw(4)<<'\\';
            else if(m+(n)==(x-6))
                cout<<'/';
            else
                cout<<" ";

        }
        if(m==0)
            cout<<setw(3*y-10)<<"Ramadan Kareem everybody";
            if(m<y-5)
              cout<<endl;
    }
int q=y/2;
if(q%2==0)
    f=q+1;
else if(q==5)
    f=6;
else
    f=q+2;
for(int a=1;a<q;a++){
    for(int b=0;b<2*(q)-1;b++){
        if((b<(q-(a-1)) || b>(q+(a-1))))
            cout<<" ";
            else{
              if(a>1)
              cout<<"*";
            }
    }
     cout<<setw(f);
    cout<<endl;
}
    return 0;
}
