class Student:
    def __init__(self, name, student_id):
        self.name = name
        self.student_id = student_id
        self.grades = {}

    def add_grade(self, subject, grade):
        self.grades[subject] = grade

    def get_grade(self, subject):
        return self.grades[subject]


    def get_all_grades(self):
        return self.grades

    def __str__(self):
        grades_str = '\n'.join([f"{subject}: {grade}" for subject, grade in self.grades.items()])
        return f"Student Name: {self.name}\nStudent ID: {self.student_id}\nGrades:\n{grades_str}"


student = Student("张三", "2024308310104")
student.add_grade("数学", 90)
student.add_grade("英语", 85)
print(student.get_grade("数学"))
print(student)