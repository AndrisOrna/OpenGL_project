#pragma once

#include "ShaderTechnique.h"
#include <GL/glut.h>  // GLUT, include glu.h and gl.h


class GameObject
{
public:
	GLuint vbo; // vertex buffer object
	GLuint numOfVertices; // max number of vertices

	ShaderTechnique * shader; // pointer to shader

	// default constructor
	GameObject();


	void createVertexBuffer(vec3 vertices[], int numverts);

	void render();
};



