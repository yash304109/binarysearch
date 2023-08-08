# Attendance Management System

# Global dictionaries to store data
users = {}
students = {}
attendance_records = {}

# Task 1: User Authentication
def register_user(username, password):
    if username not in users:
        users[username] = password
        return True
    return False

def login_user(username, password):
    if username in users and users[username] == password:
        return True
    return False

# Task 2: Student Information Management
def add_student(student_id, name):
    students[student_id] = name

def view_students():
    print("Student ID \t Name")
    for student_id, name in students.items():
        print(f"{student_id} \t\t {name}")

def update_student(student_id, name):
    if student_id in students:
        students[student_id] = name
        return True
    return False

def delete_student(student_id):
    if student_id in students:
        del students[student_id]
        # Also remove associated attendance records
        for date, attendance_list in attendance_records.items():
            attendance_records[date] = [record for record in attendance_list if record['student_id'] != student_id]
        return True
    return False

# Task 3: Marking Attendance
def mark_attendance(date, student_ids):
    if date not in attendance_records:
        attendance_records[date] = []

    for student_id in student_ids:
        if student_id in students:
            attendance_records[date].append({'student_id': student_id, 'status': 'Present'})
        else:
            print(f"Student with ID {student_id} does not exist.")

def view_attendance(date):
    if date in attendance_records:
        print(f"Attendance for {date}:")
        for record in attendance_records[date]:
            student_id = record['student_id']
            status = record['status']
            name = students.get(student_id, "Unknown")
            print(f"Student ID: {student_id} \t Name: {name} \t Status: {status}")
    else:
        print("No attendance records for this date.")

# Task 4: Viewing Attendance Records
def view_student_attendance(student_id):
    print(f"Attendance records for Student ID: {student_id}")
    for date, attendance_list in attendance_records.items():
        for record in attendance_list:
            if record['student_id'] == student_id:
                status = record['status']
                print(f"Date: {date} \t Status: {status}")
                break
        else:
            print(f"No attendance record found for Student ID: {student_id}")

# Task 5: Generating Reports
def generate_report():
    print("Attendance Report:")
    print("Date \t\t Present Count")
    for date, attendance_list in attendance_records.items():
        present_count = sum(1 for record in attendance_list if record['status'] == 'Present')
        print(f"{date} \t {present_count}")

# Main function
def main():
    is_logged_in = False
    while True:
        print("\nAttendance Management System")
        if not is_logged_in:
            print("1. Register User")
            print("2. Login")
        else:
            print("3. Add Student")
            print("4. View Students")
            print("5. Update Student")
            print("6. Delete Student")
            print("7. Mark Attendance")
            print("8. View Attendance")
            print("9. View Student Attendance")
            print("10. Generate Report")
            print("11. Logout")
        
        print("12. Exit")

        choice = int(input("Enter your choice: "))

        if not is_logged_in:
            if choice == 1:
                username = input("Enter username: ")
                password = input("Enter password: ")
                if register_user(username, password):
                    print("User registration successful.")
                else:
                    print("Username already exists.")
            elif choice == 2:
                username = input("Enter username: ")
                password = input("Enter password: ")
                if login_user(username, password):
                    is_logged_in = True  # Set is_logged_in to True on successful login
                    print("Login successful.")
                else:
                    print("Invalid username or password.")
        else:
            if choice == 3:
                student_id = input("Enter student ID: ")
                name = input("Enter student name: ")
                add_student(student_id, name)
                print("Student added successfully.")
            elif choice == 4:
                view_students()
            elif choice == 5:
                student_id = input("Enter student ID to update: ")
                name = input("Enter new name: ")
                if update_student(student_id, name):
                    print("Student information updated successfully.")
                else:
                    print("Student with specified ID not found.")
            elif choice == 6:
                student_id = input("Enter student ID to delete: ")
                if delete_student(student_id):
                    print("Student deleted successfully.")
                else:
                    print("Student with specified ID not found.")
            elif choice == 7:
                date = input("Enter date (YYYY-MM-DD): ")
                student_ids = input("Enter comma-separated student IDs: ").split(',')
                mark_attendance(date, student_ids)
            elif choice == 8:
                date = input("Enter date (YYYY-MM-DD) to view attendance: ")
                view_attendance(date)
            elif choice == 9:
                student_id = input("Enter student ID to view attendance: ")
                view_student_attendance(student_id)
            elif choice == 10:
                generate_report()
            elif choice == 11:
                is_logged_in = False
                print("Logged out successfully.")
            elif choice == 12:
                print("Exiting the Attendance Management System.")
                break
            else:
                print("Invalid choice. Please try again.")


main()