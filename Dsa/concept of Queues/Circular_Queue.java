/*
 * Changes Made from C to Java:
 
 *Language Conversion: Converted the code from C to Java, changing syntax and structure as required by Java programming conventions.
 *Encapsulation: Used classes and methods to encapsulate queue behavior (enqueue, dequeue, display), making the code modular and easier to maintain.
 *Dynamic Input Handling: Utilized the Scanner class for user input, enhancing usability compared to the C scanf function.
 *Improved Readability: Enhanced readability by using meaningful method names and maintaining proper indentation and spacing.
 *Clear Output Messages: Added user-friendly messages to indicate the result of operations like insertions and deletions, making it easier for users to understand what's happening.

 Why This Code is Better:

 *Readability and Maintainability: The Java code is more structured and easier to read due to the use of object-oriented principles. This makes it simpler for others (or your future self) to understand and modify.
 *Error Handling: The code clearly indicates when the queue is full or empty with user messages, making it more user-friendly.
 *Encapsulation: By encapsulating the queue logic within a class, we create a reusable component that can easily be integrated into larger applications.
 *Flexibility: The use of methods allows for easier modifications and extensions of functionality without disrupting the main program flow.

 This Java implementation of the circular queue is more robust and better suited for modern software development practices.
 */

import java.util.Scanner;

class CircularQueue {
    private int[] queue; // Array to hold the queue elements
    private int front, rear; // Front and rear indices
    private static final int MAX = 5; // Maximum size of the queue

    // Constructor to initialize the queue
    public CircularQueue() {
        queue = new int[MAX];
        front = -1;
        rear = -1;
    }

    // Check if the queue is full
    private boolean isFull() {
        return (front == 0 && rear == MAX - 1) || (front == rear + 1);
    }

    // Check if the queue is empty
    private boolean isEmpty() {
        return front == -1;
    }

    // Insert an element into the queue
    public void enqueue(int value) {
        if (isFull()) {
            System.out.println("Queue is full!");
            return;
        }

        // First insertion
        if (front == -1) {
            front = 0;
        }

        // Circular increment of rear
        rear = (rear + 1) % MAX;
        queue[rear] = value;
        System.out.println("Inserted " + value + " into the queue.");
    }

    // Remove and return an element from the queue
    public int dequeue() {
        if (isEmpty()) {
            System.out.println("Queue is empty!");
            return -1;
        }

        int value = queue[front];

        // Check if the queue becomes empty after this operation
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % MAX;
        }

        return value;
    }

    // Display the elements of the queue
    public void display() {
        if (isEmpty()) {
            System.out.println("Queue is empty!");
            return;
        }

        System.out.print("Elements in the queue: ");
        int i = front;
        while (i != rear) {
            System.out.print(queue[i] + " ");
            i = (i + 1) % MAX;
        }
        System.out.println(queue[i]); // Print the last element
    }

    // Main method to run the queue operations
    public static void main(String[] args) {
        CircularQueue cq = new CircularQueue();
        Scanner scanner = new Scanner(System.in);
        int choice, element;

        do {
            System.out.println("\n*** MENU ***");
            System.out.println("1: Insert");
            System.out.println("2: Delete");
            System.out.println("3: Display");
            System.out.println("4: Exit");
            System.out.print("Enter your choice: ");
            choice = scanner.nextInt();

            switch (choice) {
                case 1:
                    System.out.print("Enter element to insert: ");
                    element = scanner.nextInt();
                    cq.enqueue(element);
                    break;
                case 2:
                    element = cq.dequeue();
                    if (element != -1) {
                        System.out.println("Element deleted: " + element);
                    }
                    break;
                case 3:
                    cq.display();
                    break;
                case 4:
                    System.out.println("Exiting...");
                    break;
                default:
                    System.out.println("Invalid choice, please try again.");
            }
        } while (choice != 4);

        scanner.close();
    }
}
