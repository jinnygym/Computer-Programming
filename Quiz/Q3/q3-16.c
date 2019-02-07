/*Quiz3 Decision Making
By: Suphitsara Cheevanantaporn 61070230*/
#include <stdio.h>
int main()
{
    int v_in, p1, p2;
    v_in = 5;
    if(v_in > 5){
        if( v_in < 10 ){
            p1 = 12;
            p2 = -3;
        }else {
            p1 = p2 = 15;
        }
    }
    else{
        p1 = -3;
        p2 = 12;
    }
    return 0;
}