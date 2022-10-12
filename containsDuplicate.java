import java.util.*;
class Solution {
    public boolean containsDuplicate(int[] nums) {
        boolean ans = false;
        Set<Integer> set = new HashSet<>();
        for(int i=0;i<nums.length; i++)
        {
            if(set.contains(nums[i])){
                ans = true;
                break;
            }
            else{
                set.add(nums[i]);
            }
        }
        return ans;
    }
}
