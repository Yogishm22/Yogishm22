print("Enter the marks of student in maths, eng, science, hindi, sst")
maths = int (input())
science = int (input())
eng = int (input())
hindi = int (input())
sst = int (input())

aggregate = maths + science + sst + eng + hindi;

print("Total marks = ",aggregate)

percentage = aggregate/5;

print(percentage ,"%")
