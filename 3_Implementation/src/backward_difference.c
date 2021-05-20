#include "anm.h"

float xnb[7],ynb[7][7];

void initialize_NB(){
    xnb[0] = 1.0; ynb[0][0] = 7.989;
    xnb[1] = 1.1; ynb[1][0] = 8.403;
    xnb[2] = 1.2; ynb[2][0] = 8.781;
    xnb[3] = 1.3; ynb[3][0] = 9.129;
    xnb[4] = 1.4; ynb[4][0] = 9.451;
    xnb[5] = 1.5; ynb[5][0] = 9.750;
    xnb[6] = 1.6; ynb[6][0] = 10.031;
}

float backward_difference(){
    float xp, h, sum = 0, result, limit = 0.0001;
    int i, j, n = 7, index, flag = 0;
    xp = 1.6;
    initialize_NB();
    for(i=0;i<n;i++){
        if(fabs(xp-xnb[i])<limit){
            index = i;
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        return FAILED_TO_CONVERGE;
    
    for(i = 1; i < n; i++)
        for(j = n-1; j > i-1; j--)
            ynb[j][i] = ynb[j][i-1] - ynb[j-1][i-1];
    
    h = xnb[1] - xnb[0];

    for(i=1; i<=index; i++){
        float term;
        term = pow(ynb[index][i],i)/i;
        sum += term;
    }

    result = sum/h;
    return result;
}