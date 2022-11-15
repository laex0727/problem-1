#include <iostream>
#include <math.h>
using namespace std;
void ham_phuong_trinh_bat_nhat(float a, float b){
 if (a == 0){
    if (b == 0){
        cout << "vo so nghiem" << endl;
    }
    else{
        cout <<" vo nghiem" << endl;
    }
 }
 else{
    cout <<"nghiem cua pt la " << -b/a << endl;
 }
}
//phuong trinh bat 2
void ham_phuong_trinh_bat_hai(float a, float b){

if(a!=0){
float vi_et;
 vi_et = a*a-4*(a*b);
 if (vi_et < 0){
    cout << "phuong trinh bat 2 vo nghiem "<<endl;
     }
    else{
        if(vi_et == 0){
        cout <<"phuong trinh co nghiem kep " << -b/(2*a)<<endl;
        }
        else{
            float _vi_et = sqrt(vi_et);
            cout << "phuong trinh 2 nghiem phan biet" << (-b - _vi_et)/(2*a) << endl;
            cout << (-b + _vi_et)/(2*a)<<endl;
        }
    }
}
else{
    ham_phuong_trinh_bat_nhat(b, c);
}
 }
int main()
{
    float x,y, z;
    cin >> x >> y;
    cin >> z;
//    ham_phuong_trinh_bat_nhat(x, y, z);
    ham_phuong_trinh_bat_hai(x, y, z);
    return 0;
}
