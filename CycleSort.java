import java.util.Arrays;

// We use cycle sort when we are asked to sort elements in a range, for example range 1 to n.
// Cycle sort basically sorts elements on the basis of their indexes
public class CycleSort {
    // Time Complexity of Cycle Sort: O(n)
    static void cycleSort(int[] arr){
        int pos = 0;
        while(pos < arr.length){
            int correctIndex = arr[pos] - 1; // If the numbers ranges from 1 to n
            // int correctIndex = arr[pos]; if the numbers ranges from 0 to n
            if(arr[pos] != arr[correctIndex]){
                swap(arr, pos, correctIndex); // swap if elements are not at their correct indexes
            }
            else {
                pos++; // otherwise check for other elements
            }
        }
    }

    static void swap(int[] arr, int first, int second){
        int temp = arr[first];
        arr[first] = arr[second];
        arr[second] = temp;
    }

    public static void main(String[] args) {
        int[] arr = {3,4,2,1,5};
        cycleSort(arr);
        System.out.println(Arrays.toString(arr));
    }
}
