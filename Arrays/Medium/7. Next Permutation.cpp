/*
A permutation of an array of integers is an arrangement of its members into a sequence or linear order.
For example, for arr = [1,2,3], the following are all the permutations of arr: [1,2,3], [1,3,2], [2, 1, 3], [2, 3, 1], [3,1,2], [3,2,1].
The next permutation of an array of integers is the next lexicographically greater permutation of its integer.
More formally, if all the permutations of the array are sorted in one container according to their lexicographical order, then the next permutation of that array is the permutation that follows it in the sorted container.
If such arrangement is not possible, the array must be rearranged as the lowest possible order (i.e., sorted in ascending order).

For example, the next permutation of arr = [1,2,3] is [1,3,2].
Similarly, the next permutation of arr = [2,3,1] is [3,1,2].
While the next permutation of arr = [3,2,1] is [1,2,3] because [3,2,1] does not have a lexicographical larger rearrangement.

Input: nums = [1,2,3]
Output: [1,3,2]

*/

 void nextPermutation(vector<int>& nums) {
    int pointer = -1;
    for(int i=nums.size()-2;i>=0;i--){
        if(nums[i] < nums[i+1]){
            pointer = i;
            break;
        }
    }
    if(pointer == -1){
        reverse(nums.begin(),nums.end());
        return;
    }
    for(int i=nums.size()-1;i>=0;i--){
        if(nums[i] > nums[pointer]){
            swap(nums[i],nums[pointer]);
            break;
        }
    }
    for(auto x : nums){
        cout<<x<<" ";
    }
    reverse(nums.begin()+pointer+1,nums.end());
    return;

    /*
    Steps - 
    1. take a variable index
    2. loop from backwards with nums.size() - 2
     if(nums[i] < num[i+1])
     index = i 
     break;
    3. if(index == -1) reverse array and return
    4.  loop from backwards with nums.size() - 1
    if(nums[i] > num[index])
     swap(nums[i],nums[index])
     break;
     revserse the array from index + 1 to end
    */
}
