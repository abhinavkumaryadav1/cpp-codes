//optimised solution for all prime numbers from 2 to <n.

    int countPrimes(int n) {
    int cnt=0;
    vector <bool> prime(n,true);
    for(int i=2;i<n;i++)
    {
        if(prime[i])
        {
        cnt++;
        

        for(int j=i*2;j<n;j=j+i)
        {
            prime[j]=0;
        }
    }}
    return cnt;
    }
