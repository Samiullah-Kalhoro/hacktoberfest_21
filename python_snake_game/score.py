from turtle import Turtle


class Score(Turtle):
    """docstring for Score"""

    def __init__(self):
        super().__init__()
        self.score = 0
        self.color('white')
        self.hideturtle()
        self.penup()
        self.goto(0, 280)
        self.currentScore()

    def currentScore(self):
        self.write(f"Score : {self.score}")

    def updateScore(self):
        self.score += 1
        self.clear()
        self.currentScore()

    def gameOver(self):
        self.home()
        self.write(f"Game Over")
