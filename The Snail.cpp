#include<iostream>
using namespace std;
int main(){
    double h,u,d,f;
    int i;

    double climb,factor;


    while(1){
            cin >> h >> u >> d >> f;
            climb = 0, i=1;
            factor = (f/100) * u;
            if(h==0)
                break;

            while(1){
                if(u<0)
                    u = 0;
                climb = climb + u;

                if(climb>h){
                    cout << "success on day " << i << endl;
                    break;
                }
                climb = climb - d;
                if(climb<0){
                    cout << "failure on day " << i << endl;
                    break;
                }
                u = u - factor;

                i++;
        }
    }
    return 0;

}
