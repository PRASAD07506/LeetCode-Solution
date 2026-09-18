class Solution {
    public boolean isPalindrome(int x) {
        if(x < 0 ) return false;

        int org = x;
        int revPali = 0;
        while(x > 0){
            revPali = revPali * 10 + x % 10;
            x = x / 10;
        }
        return org == revPali;
    }
}