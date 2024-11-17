bool simulate(int* nums, int numsSize, int start, int direction) {
    int numsCopy[numsSize];
    memcpy(numsCopy, nums, numsSize * sizeof(int));

    int curr = start;

    while (curr >= 0 && curr < numsSize) {
        if (numsCopy[curr] == 0) {
            curr += (direction == 1) ? 1 : -1;
        } else if (numsCopy[curr] > 0) {
            numsCopy[curr] -= 1; 
            direction = (direction == 1) ? -1 : 1;
            curr += (direction == 1) ? 1 : -1;
        }
    }

    // Check if all elements became zero
    for (int i = 0; i < numsSize; i++) {
        if (numsCopy[i] != 0) {
            return false;
        }
    }
    return true;
}
int countValidSelections(int* nums, int numsSize) {
    int validCount = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == 0) { 
            if (simulate(nums, numsSize, i, 1)) { 
                validCount++;
            }
            if (simulate(nums, numsSize, i, -1)) {
                validCount++;
            }
        }
    }

    return validCount;
}
