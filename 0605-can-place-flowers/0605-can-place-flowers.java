class Solution {
    public boolean canPlaceFlowers(int[] flowerbed, int n) {
        int l=flowerbed.length;
        if(n==0){
            return true;

        }
        for(int i=0;i<l;i++){
            if(flowerbed[i]==0){
                boolean left=(i==0||flowerbed[i-1]==0);
                boolean right=(i==l-1||flowerbed[i+1]==0);
                if(right&&left){
                    flowerbed[i]=1;
                    n--;
                    if(n==0){
                        return true;
                    }
                }

            }
            
        }
        return false;
        
    }
}