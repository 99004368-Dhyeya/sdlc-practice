#include "anm.h"

float xnf[7],ynfd[7][7];

void initialize_NF(){
    xnf[0] = 1.0; ynfd[0][0] = 7.989;
    xnf[1] = 1.1; ynfd[1][0] = 8.403;
    xnf[2] = 1.2; ynfd[2][0] = 8.781;
    xnf[3] = 1.3; ynfd[3][0] = 9.129;
    xnf[4] = 1.4; ynfd[4][0] = 9.451;
    xnf[5] = 1.5; ynfd[5][0] = 9.750;
    xnf[6] = 1.6; ynfd[6][0] = 10.031;
}

float forward_difference(){
    float xp, h, sum = 0, result, limit = 0.0001;
    int i, j, n = 7, index, flag = 0, sign = 1;
    xp = 1.1;
    initialize_NF();
    for(i=0;i<n;i++){
        if(fabs(xp-xnf[i])<limit){
            index = i;
            flag = 1;
            break;
        }
    }
    if(flag==0)
        return FAILED_TO_CONVERGE;
    
    for(i=1;i<n;i++)
        for(j=0;j<n-i;j++)
            ynfd[j][i] = ynfd[j+1][i-1] - ynfd[j][i-1]; 

    h = xnf[1] - xnf[0];    

    for(i=1;i<n-index;i++){
        float term;
        term = pow(ynfd[index][i],i)/i;
        sum += sign*term;
        sign = -sign;
    }
    result = sum/h;
    return result;        
}