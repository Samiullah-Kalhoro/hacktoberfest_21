import java.util.ArrayDeque;
import java.util.Queue;

/*
 * This Java program demonstrates the use of the Queue interface with ArrayDeque as the underlying data structure.
 * 
 * Advantages of this implementation:
 * 
 * 1. **Built-in Data Structure**: Using ArrayDeque provides a built-in, dynamic, and efficient implementation of a queue without needing to manually handle the size and operations.
 * 
 * 2. **Performance**: ArrayDeque offers better performance than other queue implementations like LinkedList for queue operations. Its resizeable array nature allows for efficient insertion and removal operations from both ends.
 * 
 * 3. **Clarity and Readability**: The code is clearer and more straightforward, with well-defined operations for adding, removing, and peeking at elements. This improves maintainability and ease of understanding for future developers.
 * 
 * 4. **Dynamic Sizing**: Unlike fixed-size arrays, ArrayDeque automatically resizes, making it suitable for scenarios where the number of elements is not known in advance.
 * 
 * Overall, this implementation makes it easy to utilize the queue structure while leveraging Java's built-in capabilities for better performance and simplicity.
 */

class Main {
    public static void main(String[] args) {
        // Creating a queue using ArrayDeque
        Queue<Integer> queue = new ArrayDeque<>();

        // Adding elements to the queue
        queue.add(10);
        queue.add(20);
        queue.add(30);
        queue.add(40);

        // Displaying the current state of the queue
        displayQueue(queue);

        // Removing elements from the queue
        while (!queue.isEmpty()) {
            System.out.println("Removing: " + queue.remove());
            displayQueue(queue);
        }
    }

    // Helper method to display the current state of the queue
    private static void displayQueue(Queue<Integer> queue) {
        System.out.print("Queue: " + queue + " | Front: " + queue.peek() + " | Size: " + queue.size() + "\n");
    }
}
