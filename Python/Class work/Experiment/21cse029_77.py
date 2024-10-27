student_scores = {
    "Hasan": 85,
    "Noman": 90,
    "Tasir": 78
}


def add_student(student_dict, name, score):
    student_dict[name] = score


def update_score(student_dict, name, new_score):
    if name in student_dict:
        student_dict[name] = new_score
    else:
        print(f"Student {name} not found in the dictionary.")


new_student_name = input("Enter the name of the new student: ")
new_student_score = int(input(f"Enter the score for {new_student_name}: "))
add_student(student_scores, new_student_name, new_student_score)


existing_student_name = input("Enter the name of the student to update the score: ")
updated_score = int(input(f"Enter the new score for {existing_student_name}: "))
update_score(student_scores, existing_student_name, updated_score)


print("Updated student scores:")
for name, score in student_scores.items():
    print(f"{name}: {score}")
