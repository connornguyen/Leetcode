int searchInsert(int* nums, int numsSize, int target){
    int left = 0, right = numsSize, mid;
    
    while(left < right) {
        mid = left + (right - left) / 2;
        
        if (nums[mid] >= target) 
            right = mid;            
        else
            left = mid + 1;
    }
    return left;
}