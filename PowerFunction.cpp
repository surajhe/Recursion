Implement pow(A, B) % C.
In other words, given A, B and C, Find (AB % C).

Note: The remainders on division cannot be negative. In other words, make sure the answer you return is non-negative.

int Solution::pow(int A, int B, int C) {

        if(B == 0)
    {
        return 1%C;
    }

    long long ans = 1, base = A;

    while(B>0)
    {
        if(B%2 == 1)
        {
            ans = (ans * base)%C;
            B--; 
        }
        else
        {
            base = (base * base)%C;
            B /= 2;
        }
    }

    if(ans < 0)
    {
        ans = (ans + C) % C;
    }

    return ans;

    // if(A == 0)
    // {
    //     return 0;
    // }

    // if(B == 0)
    // {
    //     return 1;
    // }

    // int hp = pow(A, B/2,C);
    // int ans = (hp%C * hp%C)%C;

    // if(ans < 0)
    // {
    //     ans = (ans + C) % C;
    // }

    // if(B%2 == 0)
    // {
    //     return ans;
    // }
    // else
    // {
    //     return (A%C * ans%C)%C;
    // }
}
