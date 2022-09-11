On the first row, we write a 0. Now in every subsequent row, we look at the previous row and replace each occurrence of 0 with 01, 
and each occurrence of 1 with 10. Given row number A and index B, return the Bth indexed symbol in row A. 
(The values of B are 1-indexed.)
  
  
  int kthGrammar(int N, int K) 
{
    if (N == 1) 
    {
        return 0;
    }

    int n = pow(2, N - 1);
    int flag;

    if (K <= n / 2) 
    {
        flag = 0;
    } 
    else 
    {
        flag = 1;
        K = K - (n / 2);
    }

    int ans = kthGrammar(N - 1, K);

    return (flag == 0) ? ans : !(ans);
}

int Solution::solve(int A, int B) {

    return kthGrammar(A,B);

}

  
