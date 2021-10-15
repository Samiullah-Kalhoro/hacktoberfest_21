from turtle import Screen, Turtle
from snake import Snake
from food import Food
from score import Score
import time
import random

screen = Screen()
screen.setup(width=600, height=600)
screen.bgcolor('black')
screen.title('classic Snake')
screen.tracer(0)

snake = Snake()
food = Food()
score = Score()
screen.listen()
screen.onkey(snake.up, 'Up')
screen.onkey(snake.down, 'Down')
screen.onkey(snake.left, 'Left')
screen.onkey(snake.right, 'Right')

game_on = True
while game_on:
    screen.update()
    time.sleep(0.1)

    snake.move()

    # Detecting Collisions with Food and Updating score board

    if snake.head.distance(food) < 20:
        food.randomFood()
        snake.addSnakeParts()
        score.updateScore()

    # Detecting Collisions with the walls

    if snake.head.xcor() > 295 or snake.head.xcor() < -295 or snake.head.ycor() > 295 or snake.head.ycor() < -295:
        game_on = False
        score.gameOver()

    # Detecting Collisions with the tail

    for part in snake.all_parts[1:]:
        if snake.head.distance(part) < 10:
            game_on = False
            score.gameOver()

screen.exitonclick()
