from turtle import Turtle
import random


class Food(Turtle):
    """docstring for Food"""

    def __init__(self):
        super().__init__()
        self.shape('turtle')
        self.color('green')
        self.penup()
        self.randomFood()

    def randomFood(self):
        x = random.randint(-280, 280)
        y = random.randint(-280, 280)
        self.goto(x, y)
