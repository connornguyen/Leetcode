int removeElement(int* nums, int numsSize, int val){
    int k = 0;
    if(numsSize == 0){
        return k;
    }
    if(numsSize == 1){
        if(nums[0] != val){
            return k+1;
        }
        else{
            
            return k;
        }
    }
    for(int i = 0; i < numsSize; i++){
        if(nums[i] != val){
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}