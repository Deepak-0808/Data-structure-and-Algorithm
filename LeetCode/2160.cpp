class Solution {
public:
    int minimumSum(int num) {
         int arr[4];
        for(int i = 0; i < 4; i++)
          {
             arr[i] = num%10;
             num /= 10;
          }
        sort(arr, arr + 4);
        int num1 = arr[0] * 10 + arr[2];
        int num2 = arr[1] * 10 + arr[3];
        
        return num1+num2;
    }
};
