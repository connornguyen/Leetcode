int removeDuplicates(int* nums, int numsSize){
    int k = 0; 
    if (numsSize == 0){
        return k;
    
    }
    for(int i = 0; i < numsSize; i++){
        if(nums[i] != nums[k]){
            k++;
            nums[k] = nums[i];
       }
   }
    return k+1;
}