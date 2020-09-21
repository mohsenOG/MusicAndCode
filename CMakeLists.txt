cmake_minimum_required (VERSION 3.8)

project ("NoteAndCode")
# activate c++11
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

# Add source to this project's executable.
add_executable (NoteAndCode "Main.cpp"
    "NoteFrequencyTable/FrequencyTable.h" "NoteFrequencyTable/FrequencyTable.cpp"
    "Encryption/Encryption.h" "Encryption/Encryption.cpp")
