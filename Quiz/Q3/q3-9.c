/*Quiz3 Decision Making
By: Suphitsara Cheevanantaporn 61070230*/
#include <stdio.h>
int main()
{
    int v_in, p1, p2;
    v_in = 0;
    if(v_in > 5)
        p1 = 12;
    else
        if(v_in > 3)
            p1 = 6;
        else
            if(v_in > 1)
                p1 = 2;
            else
                p1 = -3;
    return 0;
}