#include<iostream>
using namespace std;

int main(){
    int num =10;
    bool assending=false;
    cout << "Program start:" << endl;

    for(int i =1;i<=4;i++){
        if (assending)
        { 
            if(num>3){
            num=num-2;
            }
            for (int j = i; j <= 4; j++)
            {
                cout << num;
                num++;
                assending=false;
            }
           
            cout << endl;
          continue;
        }

            if(i==3){
                num=num-4;
            }
        for(int j=i;j<=4;j++){
            cout<<num;
            num--;
            assending = true;
        }
        cout<<endl;
    }

    cout << "Program end:" << endl;
    return 0;
}


// 10987
// 456
// 32
// 1