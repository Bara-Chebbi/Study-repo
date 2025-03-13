import random

# Function to get student names
def get_student_info():
    num_students = int(input("Enter the number of students: "))  # Ask for the number of students
    students = []  # Initialize an empty list to store student names
    for i in range(num_students):  # Loop through the number of students
        name = input(f"Enter the name of student {i+1}: ")  # Get each student's name
        students.append(name)  # Add the name to the list
    return students  # Return the list of students

# Function to get course names
def get_courses():
    num_courses = int(input("Enter the number of courses: "))  # Ask for the number of courses
    courses = []  # Initialize an empty list to store course names
    for i in range(num_courses):  # Loop through the number of courses
        course = input(f"Enter the name of course {i+1}: ")  # Get each course name
        courses.append(course)  # Add the course name to the list
    return courses  # Return the list of courses

# Function to get student scores
def add_student_score(student_marks, students, courses):
    while True:  # Infinite loop until the user chooses to exit
        student = input("Enter the student's name to add a score (or type 'done' to finish): ")  # Ask for student name
        if student.lower() == 'done':  # If user types 'done', break the loop
            break
        if student not in students:  # Check if the student exists
            print("Student not found!")  # Display error message
            continue  # Continue to the next iteration
        
        course = input("Enter the course name: ")  # Ask for course name
        if course not in courses:  # Check if the course exists
            print("Course not found!")  # Display error message
            continue  # Continue to the next iteration
        
        midterm = int(input(f"Enter {student}'s midterm score for {course}: "))  # Get midterm score
        final_exam = int(input(f"Enter {student}'s final exam score for {course}: "))  # Get final exam score
        final_score = (midterm * 0.3) + (final_exam * 0.7)  # Calculate final score
        
        if student not in student_marks:  # If student is not in dictionary, add them
            student_marks[student] = {}
        
        student_marks[student][course] = final_score  # Store the final score
        print("Score added successfully!")  # Confirm score addition
    
    return student_marks  # Return updated scores

# Function to calculate and display statistics
def display_statistics(student_marks):
    student_averages = {}  # Dictionary to store student averages
    total_scores = []  # List to store all scores
    
    for student, courses in student_marks.items():  # Iterate over students and their courses
        avg_score = sum(courses.values()) / len(courses) if courses else 0  # Calculate average score
        student_averages[student] = avg_score  # Store average score
        total_scores.extend(courses.values())  # Add scores to total list
    
    best_student = max(student_averages, key=student_averages.get, default="No students")  # Find best student
    lowest_student = min(student_averages, key=student_averages.get, default="No students")  # Find lowest student
    class_avg = sum(total_scores) / len(total_scores) if total_scores else 0  # Calculate class average
    
    print("\nClass Statistics:")  # Print statistics header
    print(f"🏆 Best-performing student: {best_student} with an average score of {student_averages.get(best_student, 0):.2f}")  # Print best student
    print(f"📉 Lowest-performing student: {lowest_student} with an average score of {student_averages.get(lowest_student, 0):.2f}")  # Print lowest student
    print(f"🎯 Class average: {class_avg:.2f}")  # Print class average

# Function to display student scores
def display_scores(student_marks):
    print("\nStudent Scores:")  # Print header
    for student, marks in student_marks.items():  # Loop through students
        print(f"\n{student}:")  # Print student name
        for course, final_score in marks.items():  # Loop through courses and scores
            print(f"  {course}: Final Score {final_score:.2f}")  # Print course score

# Running the program
students = get_student_info()  # Get student names
courses = get_courses()  # Get course names
student_marks = {}  # Initialize dictionary to store student scores
student_marks = add_student_score(student_marks, students, courses)  # Collect scores
display_scores(student_marks)  # Display scores
display_statistics(student_marks)  # Display statistics
