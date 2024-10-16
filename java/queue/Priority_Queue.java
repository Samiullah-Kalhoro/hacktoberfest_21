import java.util.PriorityQueue;
import java.util.Comparator;

class Task {
    String name;
    int priority;

    public Task(String name, int priority) {
        this.name = name;
        this.priority = priority;
    }

    @Override
    public String toString() {
        return "Task: " + name + ", Priority: " + priority;
    }
}

class TaskComparator implements Comparator<Task> {
    @Override
    public int compare(Task t1, Task t2) {
        return t1.priority - t2.priority;
    }
}

public class Priority_Queue {
    public static void main(String[] args) {
        PriorityQueue<Task> taskQueue = new PriorityQueue<>(new TaskComparator());

        taskQueue.add(new Task("Complete Java assignment", 3));
        taskQueue.add(new Task("Prepare for AI exam", 1));
        taskQueue.add(new Task("Watch ML tutorial", 5));
        taskQueue.add(new Task("Buy groceries", 2));

        System.out.println("Processing tasks by priority:");

        while (!taskQueue.isEmpty()) {
            Task currentTask = taskQueue.poll();
            System.out.println(currentTask);
        }
    }
}
