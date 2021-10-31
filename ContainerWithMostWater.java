

class Solution {
    // function to calculate container with most water
    public int maxArea(int[] height) {//array with heights of barriers is provided
        int maxwater = 0, left = 0, right = height.length - 1;
        while (left < right) {
            maxwater = Math.max(maxwater, Math.min(height[left], height[right]) * (right - left));
            if (height[left] < height[right])
            maxwater = Math.max(maxwater, Math.min(height[left], height[right]) * (right - left));//updating maximum water stored
            if (height[left] < height[right])//updating the left and right barrier values to store maximum water
                left++;
            else
                right--;
           }
        return maxwater;
    }
}
