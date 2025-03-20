#include "Renderer3D.h"
#include <vector>
#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>
using namespace std;

vector<Point3D> points{ Point3D{ -1.0f, -1.0f, -1.0f }, Point3D{ -1.0f, -1.0f, -1.0f }, 
                        Point3D{ -1.0f, -1.0f, -1.0f }, Point3D{ -1.0f, -1.0f, -1.0f }, 
                        Point3D{ -1.0f, -1.0f, -1.0f }, Point3D{ -1.0f, -1.0f, -1.0f }, 
                        Point3D{ -1.0f, -1.0f, -1.0f }, Point3D{ -1.0f, -1.0f, -1.0f } };

vector<Vertex> points{ Vertex{ 0, 1 }, Vertex{ 0, 2 }, Vertex{ 0, 3 },
                        Vertex{ 2, 5 }, Vertex{ 3, 6 }, Vertex{ 3, 4 },
                        Vertex{ 4, 7 }, Vertex{ 6, 7 }, Vertex{ 7, 5 },
                        Vertex{ 5, 1 }, Vertex{ 4, 1 }, Vertex{ 2, 6} };


int main(int argc, char** argv) {
    SDL_Window* window;
    SDL_Renderer* renderer;
    window = SDL_CreateWindow("3D Renderer", SDL_)
}