class Student:
    def set_student_details(self, student_id, name, marks):
        self.student_id = student_id
        self.name = name
        self.marks = marks

    def calculate_cgpa(self):
        total_quality_points = sum(self.marks) / len(self.marks)  
        cgpa = (total_quality_points / 25)  
        return cgpa

students = []

for i in range(2):
    student = Student()
    student_id = input("Enter student ID for student {}: ".format(i+1))
    name = input("Enter name for student {}: ".format(i+1))
    marks = []
    for j in range(11):  
        mark = float(input("Enter marks out of 100 for course {} for student {}: ".format(j+1, name)))
        marks.append(mark)
    student.set_student_details(student_id, name, marks)
    students.append(student)

total_cgpa = 0
print("\nIndividual CGPA for each student:")
for student in students:
    cgpa = student.calculate_cgpa()
    print("{}'s CGPA: {:.2f}".format(student.name, cgpa))
    total_cgpa += cgpa
