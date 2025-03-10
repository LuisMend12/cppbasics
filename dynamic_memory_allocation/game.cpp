#include <GL/glew.h>
#include <GLFW/glfw3.h>

void init() {
    glEnable(GL_DEPTH_TEST);
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    // Render the game scene here
    glfwSwapBuffers(window);
}

int main() {
    if (!glfwInit()) return -1;

    GLFWwindow* window = glfwCreateWindow(800, 600, "3D Bounce Ball", NULL, NULL);
    if (!window) return -1;

    glfwMakeContextCurrent(window);
    glewInit();
    init();

    while (!glfwWindowShouldClose(window)) {
        display();
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}
