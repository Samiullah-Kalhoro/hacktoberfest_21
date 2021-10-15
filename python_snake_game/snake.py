from turtle import Turtle
import random

STARTING_POS = [(0, 0), (-20, 0), (-40, 0)]
DISTANCE = 20

UP = 90
DOWN = 270
LEFT = 180
RIGHT = 0


class Snake():
    def __init__(self):
        self.all_parts = []
        self.create_snake()
        self.head = self.all_parts[0]

    def create_snake(self):
        for parts in STARTING_POS:
            self.snakeGrowth(parts)

    def snakeGrowth(self, position):
        new_part = Turtle('square')
        new_part.color('white')
        new_part.penup()
        new_part.goto(position)
        self.all_parts.append(new_part)

    def addSnakeParts(self):
        self.snakeGrowth(self.all_parts[-1].position())

    def move(self):
        for i in range(len(self.all_parts) - 1, 0, -1):
            x = self.all_parts[i - 1].xcor()
            y = self.all_parts[i - 1].ycor()
            self.all_parts[i].goto(x, y)

        self.head.forward(DISTANCE)

    def up(self):
        if self.head.heading() != DOWN:
            self.head.setheading(UP)

    def down(self):
        if self.head.heading() != UP:
            self.head.setheading(DOWN)

    def left(self):
        if self.head.heading() != RIGHT:
            self.head.setheading(LEFT)

    def right(self):
        if self.head.heading() != LEFT:
            self.head.setheading(RIGHT)
