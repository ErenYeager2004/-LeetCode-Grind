class Solution {
    public int rob(int[] arr) {
        int n = arr.length;
        if(n==0) return 0;
        if(n==1) return arr[0];
        if(n==2) return Math.max(arr[0],arr[1]);

        int first = arr[0];
        int second = 0;

        for(int i=1;i<=n-2;i++){
            int pick = arr[i];
            if(i > 1) pick += second;
            int notPick = first;
            int curr = Math.max(pick,notPick);
            second = first;
            first = curr;
        }

        int third = arr[1];
        int forth = 0;

        for(int i=2;i<=n-1;i++){
            int pick = arr[i];
            if(i > 2) pick += forth;
            int notPick = third;
            int curr = Math.max(pick,notPick);
            forth = third;
            third = curr;
        }

        return Math.max(first,third);
    }
}