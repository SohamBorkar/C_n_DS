# In R language indexing starts with value 1 and not from 0

# The only difference between vectors, matrices, and arrays are:
# Vectors are uni-dimensional arrays
# Matrices are two-dimensional arrays
# Arrays can have more than two dimensions

message <-"Hello World!"
print(message)  
print("Fuck You")
print("")
print("Fuck you again")
x = 23.32
y = 33
z = 'a'
a = 'soham'
b = "borkar"
c = TRUE
print(x)
print(class(x))
print(class(y))
print(class(z))
print(class(a))
print(class(b))
print(class(c))

# Changing value of variables
b = "Borkar"
print(b)
message <- "Fuck you again and again"
print(message)





#The five types of R constants - numeric, integer, complex, logical, string.
#In addition to these, there are 4 specific types of R constants - Null, NA, Inf, NaN.

# below is integer constant, at end it is L
x <- 15L    
x <- 0x15L  # hexadecimal value
print(x)

x <- 1e5L   # exponential value
print(x)    # 21

# below is numeric constants
z <- 3e-3
print(z)  # 0.003
print(class(z))  # "numeric"

y <- 3.4
print(y)  # 3.4
print(class(z))  # "numeric"

# below are logical constants
x <- T      # we can use T or F for true and false respectively

# below is string constant
msg <- "Welcome to Programiz!!"

# below are complex constants
y <- 3.2e-1i
print(y)            # 0+0.32i
print(typeof(y))    # "complex"




#special 4 R consants
# 1. NULL - to declare an empty R object
x <- NULL
print(x)  # NULL
print(typeof(x))  # "NULL"

# 2. Inf/-Inf - represents positive and negative infinity
a <- 2^2020        # result is too big so it represents positive infinity
print(a)   # Inf
b <- -2^2020        # represents negative infinity
print(b)    # -Inf

# 3. NaN (Not a Number) - represents undefined numerical value
print(0/0)      # NaN
print(Inf/Inf)  # NaN

# 4. NA - represents value which is not available
print(NA + 20) # NA





# Pre defined constants in R:
# print list of uppercase letters
print(LETTERS)

# print list of lowercase letters
print(letters)

# print 3 letters abbreviation of English months
print(month.abb)

# print numerical value of constant pi
print(pi)




# raw data type in R:
# convert character to raw
raw_variable <- charToRaw("Welcome to Programiz")

print(raw_variable)         # 57 65 6c 63 6f 6d 65 20 74 6f 20 50 72 6f 67 72 61 6d 69 7a
print(class(raw_variable))  # "raw"

# convert raw to character
char_variable <- rawToChar(raw_variable)

print(char_variable)        # "Welcome to Programiz"
print(class(char_variable)) # "character"






# cat() : use if you don't want double quotes in output and note that you have to use \n here
cat("R Tutorials\n")        # R Tutorials

message <- "Programiz"
cat("Welcome to ", message)    # Welcome to  Programiz


# or you may use paste function


# Printing string and variable together using 'paste' function:
company <- "Programiz"
print(paste("Welcome to", company))     # print string and variable together, taking 2 arguments i.e. string and variable

#if you don't want default separator between string and variable, then:
print(paste0("Welcome to", company))    # "Welcome toProgramiz"






# sprintf()
myString <- "Welcome to Programiz"

sprintf("String: %s is string", myString)     # print formatted string





# ifelse() :
ifelse(test_expression, x, y)
# The output vector has the element x if the output of the test_expression is TRUE. If the output is FALSE,
# then the element in the output vector will be y.



# input vector
x <- c(12, 9, 23, 14, 20, 1, 5)

# ifelse() function to determine odd/even numbers
ifelse(x %% 2 == 0, "EVEN", "ODD")
# output: "EVEN" "ODD"  "ODD"  "EVEN" "EVEN" "ODD"  "ODD" 



# to skip going on iteration in loop (while, for, etc):
# while(){
#     if(){
#         next
#     }
# }




# example of for loop with next statement:
# vector to be iterated over
x = c(1, 2, 3, 4, 5, 6, 7, 8)

# for loop with next statement
for(i in x) {
    
    # if condition with next
    if(i %% 2 != 0) {
        next
    }
    
    print(i)
}






# repeat statement : it repeated uptil break statement in not occured: //infinite/ while(0) loop
repeat {
      # statements
      if(stop_condition) {
          break
      }
  }





  # function decleration:
  # define a function to compute power
power <- function(a, b) {
    print(paste("a raised to the power b is: ", a^b))
}

# call the power function with arguments
power(2, 3)


# nested function call:
# define a function to compute addition
add <- function(a, b) {
    return (a + b)
}

# nested call of the add function 
print(add(add(1, 2), add(3, 4)))        # 10







# Strings and its oprations:
# 1. To find length of string
message1 <- "Programiz"
nchar(message1) # 9

message2 <- "dlkj"
# join strings together
paste(message1, message2)

# compare 2 strings:
print(message1 == message2)     #T or F






# changing cases:
message <- "R Programming"
# change string to uppercase
message_upper <- toupper(message)
cat("Uppercase:", message_upper)
# change string to lowercase
message_lower <- tolower(message)
cat("\nLowercase:", message_lower)




# escape sequences:
example1 = "This is \"R\" programming"
# \b for backspace



# creating vector of integer type:
numbers <- c(1, 2, 3, 4, 5)
# or
numbers <- 1:5

# repeat sequence of vector 2 times
numbers <- rep(c(2,4,6), times = 2)
cat("Using times argument:", numbers)     # Using times argument: 2 4 6 2 4 6

# repeat each element of vector 2 times
numbers <- rep(c(2,4,6), each = 2)
cat("\nUsing each argument:", numbers)    # Using each argument: 2 2 4 4 6 6

# length of vector:
languages <- c("R", "Swift", "Python", "Java")
cat("Total Elements:", length(languages))





      
# create a 2 by 3 matrix
matrix1 <- matrix(c(1, 2, 3, 4, 5, 6), nrow = 2, ncol = 3, byrow = TRUE)
# if you denote byrow = T, then it will fill matrix row wise, which is optional
print(matrix1)  # row wise
#      [,1]  [,2] [,3]
# [1,]    1    3    5
# [2,]    2    4    6

matrix2 <- matrix(c(6,5,4,3,2,1), nrow = 2, ncol = 3)   
print(matrix2)      # prints matrix column wise
#     [,1] [,2] [,3]
# [1,]    1    2    3
# [2,]    4    5    6






# we can access all elements of matrix row wise or column wise:
matrix1 <- matrix(c("Sabby", "Cathy", "Larry", "Harry"), nrow = 2, ncol = 2)
print(matrix1)

cat("\n1st Row:", matrix1[1, ])     # access entire element at 1st row
cat("\n2nd Column:", matrix1[, 2])  # access entire element at 2nd column

#      [,1]     [,2]   
# [1,] "Sabby" "Larry"
# [2,] "Cathy" "Harry"
# 1st Row: Sabby Larry
# 2nd Column: Larry Harry


# to checking if element is present in matrix or not:
"Larry" %in% matrix1 # TRUE



# using cbind() and rbind() functions we can combine matrices using 2 variables and store them in new variable
# total1 <- cbind(even_numbers, odd_numbers)
# total2 <- rbind(even_numbers, odd_numbers)





# lists in R:
list2 <- list("Ranjy", 38, TRUE)        # list with different type of data

append(list1, 3.14)     # using append() function we can add elements in R

print(list1[-4]) # Nepal    # to remove 4th item from the list

for (item in list2){        # iterate through each elements of numbers
    print(item)
}

38 %in% list1 # TRUE        Check if element exist in list







# Arrays in R
array1 <- array(c(1:12), dim = c(2,3,2))        # we created array of 2 by 3 having values from 1 to 12 in 2 parts
print(array1)
#      [,1] [,2] [,3]
# [1,]    1    3    5
# [2,]    2    4    6

# , , 2

#      [,1] [,2] [,3]
# [1,]    7    9   11
# [2,]    8   10   12

cat("\nDesired Element:", array[1, 3, 2])      # access element, we use vector index operator [] for accesing elements

cat(array[ ,c(2),1])    # access entire elements at 2nd column of 1st matrix
cat(array[c(1), ,2])  # access entire elements at 1st row of 2nd matrix

11 %in% array1 # TRUE       Checking for element in array







# Data frame in R:
# is a two-dimensional data structure which can store data in tabular format.
# Data frames have rows and columns and each column can be a different vector and
# different vectors can be of different data types.

# Create a data frame
dataframe1 <- data.frame (
  Name = c("Juan", "Alcaraz", "Simantha"),
  Age = c(22, 15, 19),
  Vote = c(TRUE, FALSE, TRUE)
)

print(dataframe1)

#       Name   Age       Vote
# 1     Juan    22       TRUE
# 2  Alcaraz    15      FALSE
# 3 Simantha    19       TRUE

print(dataframe1[1])    # pass index number inside [ ] 
print(dataframe1[["Name"]]) # pass column name inside [[  ]] 
print(dataframe1$Name)  # use $ operator and column name 

#      Name
# 1     Juan
# 2  Alcaraz
# 3 Simantha

# [1] "Juan"     "Alcaraz"  "Simantha"
# [1] "Juan"     "Alcaraz"  "Simantha"




# Combining 2 data frames vertically using rbind()
dataframe1 <- data.frame (      # create a data frame
  Name = c("Juan", "Alcaraz"),
  Age = c(22, 15)
)

dataframe2 <- data.frame (      # create another data frame
  Name = c("Yiruma", "Bach"),
  Age = c(46, 89)
)

updated <- rbind(dataframe1, dataframe2)        # combine two data frames vertically 
print(updated)

#        Name   Age
# 1       Juan    22
# 2    Alcaraz    15
# 3     Yiruma    46
# 4       Bach    89

# Combining 2 data frames horizontally using cbind()
dataframe1 <- data.frame (      # create a data frame
  Name = c("Juan", "Alcaraz"),
  Age = c(22, 15)
)

dataframe2 <- data.frame (      # create another data frame
  Hobby = c("Tennis", "Piano")
)

updated <- cbind(dataframe1, dataframe2)        # combine two data frames horizontally 
print(updated)

#       Name   Age   Hobby
# 1     Juan    22  Tennis
# 2 Alcaraz     15   Piano






# factors in R:
# A Factor is a data structure that is used to work with categorizable datas

students_gender <- factor(c("male", "female", "male", "transgender", "female")) # create a factor
print(students_gender)

# [1] male   female   male   transgender    female     
# Levels: female male transgender

students_gender[1] <- "other"       # Modifying element in factor

for (status in marital_status) {        # loop over factor
    print(status)
}
