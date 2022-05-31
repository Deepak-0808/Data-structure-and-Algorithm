// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int factorial, test, num;
//     cin >> test;
//     while (test--)
//     {
//         factorial = 1;
//         cin >> num;
//         while (num > 0)
//         {
//             factorial = factorial * num;
//             num--;
//         }
//         cout << factorial;
//     }
//     return 0;
// }

#include <stdio.h>

int main(void) {
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int N,fact=1;
        scanf("%d",&N);
        for( int i=1;i<=N;i++)
        {
            fact=fact*i;
        }
        printf("%d",fact);
        printf("\n");
    }
	// your code goes here
	return 0;
}
