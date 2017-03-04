cmake_minimum_required(VERSION 2.8)


file(GLOB PARTICLES_SRC
	"src/main.cpp"
    "src/headers/*"
    "src/cpp/*"
)

project(particleTest)
add_executable(particleTest  ${PARTICLES_SRC})
find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)
include_directories( ${OPENGL_INCLUDE_DIRS}  ${GLUT_INCLUDE_DIRS} )
set(EXECUTABLE_OUTPUT_PATH "bin")

target_link_libraries(particleTest ${OPENGL_LIBRARIES} ${GLUT_LIBRARY} )