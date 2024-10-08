package queue;

import java.util.ArrayDeque;
import java.util.Deque;

/*
 * This Java program demonstrates the use of the Deque interface with ArrayDeque as the underlying data structure.
 *
 * Advantages of this implementation:
 *
 * 1. **Double-Ended Functionality**: Deque allows insertion and deletion of elements at both the front and rear, making it more flexible than a standard queue.
 *
 * 2. **Performance**: ArrayDeque provides efficient O(1) time complexity for insertions and deletions from both ends, ensuring good performance for various operations.
 *
 * 3. **Dynamic Sizing**: Unlike fixed-size arrays, ArrayDeque automatically resizes, making it suitable for scenarios where the number of elements is not known in advance.
 *
 * 4. **Clear and Maintainable**: The code is organized with well-defined methods for each operation, enhancing readability and maintainability.
 *
 * Overall, this implementation showcases the power of the Deque interface while leveraging Java's built-in capabilities for better performance and flexibility.
 */

class DequeOperations {
    private Deque<Integer> deque;

    public DequeOperations() {
        deque = new ArrayDeque<>();
    }

    // Method to add an element at the front
    public void addFront(int value) {
        deque.addFirst(value);
        System.out.println("Added to front: " + value);
    }

    // Method to add an element at the rear
    public void addRear(int value) {
        deque.addLast(value);
        System.out.println("Added to rear: " + value);
    }

    // Method to remove an element from the front
    public Integer removeFront() {
        if (deque.isEmpty()) {
            System.out.println("Deque is empty. Cannot remove from front.");
            return null;
        }
        int value = deque.removeFirst();
        System.out.println("Removed from front: " + value);
        return value;
    }

    // Method to remove an element from the rear
    public Integer removeRear() {
        if (deque.isEmpty()) {
            System.out.println("Deque is empty. Cannot remove from rear.");
            return null;
        }
        int value = deque.removeLast();
        System.out.println("Removed from rear: " + value);
        return value;
    }

    // Method to display the current state of the deque
    public void display() {
        System.out.print("Deque: " + deque + " | Size: " + deque.size() + "\n");
    }

    public static void main(String[] args) {
        DequeOperations dequeOperations = new DequeOperations();

        // Adding elements to the deque
        dequeOperations.addFront(10);
        dequeOperations.addRear(20);
        dequeOperations.addFront(30);
        dequeOperations.addRear(40);

        // Displaying the current state of the deque
        dequeOperations.display();

        // Removing elements from the front and rear
        dequeOperations.removeFront();
        dequeOperations.display();
        dequeOperations.removeRear();
        dequeOperations.display();

        // Trying to remove from an empty deque
        dequeOperations.removeFront();
        dequeOperations.removeRear();
        dequeOperations.removeFront(); // Attempt to remove from empty deque
    }
}
