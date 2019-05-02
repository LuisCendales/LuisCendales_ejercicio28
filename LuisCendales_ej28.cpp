#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
    int n_side=201;
    
    double deltax=0.01;
    double deltat=0.5;
    double t;
    
    double k=200;
    double c=900;
    double rho=2700;
    
    double old[n_side][n_side]={0};
    double nuevo[n_side][n_side]={0};
   
    double n;
    n= (deltat*k)/((deltax**2)*c*rho);
    for(int i=0;i<200;i++){
        nuevo[i]=old[i]+n
    }
    cout<<nuevo<<endl;
    return 0;
}