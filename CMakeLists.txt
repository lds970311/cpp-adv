cmake_minimum_required(VERSION 3.20)
project(cpp_adv)

set(CMAKE_CXX_STANDARD 17)

#add_executable(cpp_adv main.cpp)

add_executable(DataStructures.LinerList.Array DataStructures/LinerList/Array.cpp)
add_executable(Algorithm.FibFibonacci Algorithm/Fib/Fibonacci.cpp)
add_executable(Algorithm.Math.QuestionOne Algorithm/Math/QuestionOne.cpp)
add_executable(Exercise.luogu.partOneBuyStationery Exercise/luogu/partOne/BuyStationery.cpp)