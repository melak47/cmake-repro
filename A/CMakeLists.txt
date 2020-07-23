add_subdirectory(B)
add_library(A STATIC a.cpp)
target_include_directories(A PUBLIC include)
target_link_libraries(A PRIVATE B)
