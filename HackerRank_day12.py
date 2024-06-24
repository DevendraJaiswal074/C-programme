#You are given two classes, Person and Student, where Person is the base class and Student is the derived class. Completed code for Person and a declaration for Student are provided for you in the editor. Observe that Student inherits all the properties of Person.

# Complete the Student class by writing the following:

# A Student class constructor, which has 4 parameters:
# A string, firstName.
# A string, lastName.
# An integer, idNumber.
# An integer array (or vector) of test scores, scores.
# A char calculate() method that calculates a Student object’s average and returns the grade character representative of their calculated average:

class Person:
    def __init__(self, firstName, lastName, idNumber):
        self.firstName = firstName
        self.lastName = lastName
        self.idNumber = idNumber
    def printPerson(self):
        print("Name:", self.lastName + ",", self.firstName)
        print("ID:", self.idNumber)
class Student(Person):
    def __init__(self, firstName, lastName, idNumber, Scores):
        super().__init__(firstName, lastName, idNumber)
        self.Scores = Scores

    def calculate(self):
        total = 0

        for Score in self.Scores:
            total += Score

        avg = total / len(self.Scores)

        if 90 <= avg <= 100:
            return 'O'
        if 80 <= avg < 90:
            return 'E'
        if 70 <= avg < 80:
            return 'A'
        if 55 <= avg < 70:
            return 'P'
        if 40 <= avg < 55:
            return 'D'
        return 'T'
line = input().split()
firstName = line[0]
lastName = line[1]
idNum = line[2]
Scores = int(input()) # not needed for Python
final = list( map(int, input().split()) )
s = Student(firstName, lastName, idNum, final)
s.printPerson()
print("Grade:", s.calculate())