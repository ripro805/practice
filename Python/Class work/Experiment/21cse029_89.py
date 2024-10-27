def update_salary(employee_dict, emp_id, new_salary):
    if emp_id in employee_dict:
        employee_dict[emp_id]['salary'] = new_salary
        print(f"Salary for {employee_dict[emp_id]['name']} updated to {new_salary}.")
    else:
        print(f"Employee ID {emp_id} not found.")

employees = {
    "emp1": {
        "name": "Alice",
        "age": 30,
        "position": "Engineer",
        "salary": 70000
    },
    "emp2": {
        "name": "Bob",
        "age": 35,
        "position": "Manager",
        "salary": 85000
    },
    "emp3": {
        "name": "Charlie",
        "age": 28,
        "position": "Analyst",
        "salary": 60000
    }
}


emp_id = input("Enter the employee ID to update (e.g., 'emp1'): ")
new_salary = float(input("Enter the new salary: "))


update_salary(employees, emp_id, new_salary)


print("\nUpdated employee details:")
for emp, details in employees.items():
    print(f"{emp}: {details}")
