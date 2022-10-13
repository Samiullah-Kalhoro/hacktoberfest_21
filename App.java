import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Random;

public class App {
    public static void main(String[] args) throws Exception {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        System.out.println("=====WELCOME TO SNAKE LADDER PROBLEM=====");
        System.out.println();
        System.out.println("1. Play with friends");
        System.out.println("2. Play with computer");
        System.out.println();
        System.out.println("q. To exit");
        System.out.println();
        System.out.print("Enter leading option character to choose: ");
        char query=br.readLine().charAt(0);
        Match match=new Match();
        switch (query) {
            case '1':   System.out.println();
                        System.out.print("Total players: ");
                        int n=Integer.parseInt(br.readLine());
                        for (int i=0; i<n; i++) {
                            System.out.print("Enter player "+(i+1)+" name: ");
                            match.addPlayer(br.readLine());
                        }
                        match.start();
                        break;
            case '2':   System.out.println();
                        System.out.print("Player name: ");
                        match.addPlayer(br.readLine());
                        match.addPlayer("Computer");
                        match.start();
                        break;
            case 'q':   System.out.println("Exiting...");
                        break;
            default:    System.out.println("Invalid option");
                        System.out.println("Exiting...");
                        break;
        }
        System.out.println("Solved by CRYP73R");
    }
}

class Match {
    private ArrayList<Player> players=new ArrayList<Player>();
    Machine machine;

    Match() {
        machine=new Machine();
    }

    void addPlayer(String name) {
        players.add(new Player(name));
    }

    void start() {
        while (true) {
            for (Player player : players) {
                int dieValue=machine.rollDie();
                int currentPosition=player.getPosition();
                System.out.println(player.getName()+" rolled die, got: "+dieValue);
                currentPosition=machine.movePlayer(currentPosition, dieValue);
                if (machine.isLadder(currentPosition)) {
                    currentPosition=machine.moveLadder(currentPosition);
                } else if (machine.isSnakeBite(currentPosition)) {
                    currentPosition=machine.moveSnakeBite(currentPosition);
                }
                player.setPosition(currentPosition);
                if (player.getPosition()==100) {
                    winner(player);
                    return;
                }
            }
            System.out.println();
            for (Player player : players) {
                System.out.println(player.getName()+" is at: "+player.getPosition());
            }
            System.out.println();
            System.out.println();
        }
    }

    private void winner(Player player) {
        System.out.println();
        System.out.println();
        System.out.println(player.getName()+" won the match.");
        System.out.println();
    }
}

class Machine {
    private HashMap<Integer, Integer> ladder=new HashMap<Integer, Integer>();
    private HashMap<Integer, Integer> snake=new HashMap<Integer, Integer>();

    Machine() {
        // ladder
        ladder.put(9, 50);
        ladder.put(13, 33);
        ladder.put(20, 58);
        ladder.put(27, 46);
        ladder.put(36, 64);
        ladder.put(48, 92);
        ladder.put(60, 81);
        ladder.put(63, 97);
        ladder.put(66, 86);

        // snake bite
        snake.put(23, 3);
        snake.put(37, 5);
        snake.put(52, 7);
        snake.put(55, 34);
        snake.put(79, 43);
        snake.put(85, 45);
        snake.put(89, 51);
        snake.put(95, 73);
        snake.put(98, 25);
    }

    boolean isLadder(int currentPosition) {
        return ladder.containsKey(currentPosition);
    }

    boolean isSnakeBite(int currentPosition) {
        return snake.containsKey(currentPosition);
    }

    int moveLadder(int currentPosition) {
        return ladder.get(currentPosition);
    }

    int moveSnakeBite(int currentPosition) {
        return snake.get(currentPosition);
    }

    int movePlayer(int currentPosition, int dieValue) {
        if ((currentPosition+dieValue)<=100) {
            return (currentPosition+dieValue);
        }
        return currentPosition;
    }

    int rollDie() {
        Random random=new Random();
        return (int) random.ints(1, 1, 7).toArray()[0];
    }
}

class Player {
    private String name;
    private int currentPosition;

    Player(String name) {
        this.name=name;
        currentPosition=0;
    }

    void setPosition(int newPosition) {
        currentPosition=newPosition;
    }

    int getPosition() {
        return currentPosition;
    }

    String getName() {
        return name;
    }
}