#include "Game.h"

Game::Game() : window(VideoMode(800, 600), "OpenGL")
{
}

Game::~Game(){}

void Game::run()
{

	initialize();

	Event event;

	while (isRunning){

		cout << "Game running..." << endl;

		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
			{
				isRunning = false;
			}
		}
		update();
		draw();
	}

}

void Game::initialize()
{
	isRunning = true;
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0, window.getSize().x / window.getSize().y, 1.0, 500.0);
	glMatrixMode(GL_MODELVIEW);

}

void Game::update()
{
	cout << "Update up" << endl;
}

void Game::draw()
{
	cout << "Draw up" << endl;
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glClear(GL_COLOR_BUFFER_BIT);
	

#pragma region GL_TRIANGLES
	glBegin(GL_TRIANGLES);
	{
		
		glVertex3f(0.0, 2.0, -15.0);
		glVertex3f(-2.0, -2.0, -15.0);
		glVertex3f(2.0, -2.0, -15.0);
	}
	
	glEnd();
#pragma endregion

#pragma region GL_POINTS
	glBegin(GL_POINTS);
	{
		glVertex3f(-2.0, 3.0, 10);

	}
	glEnd();
#pragma endregion


#pragma region GL_LINES
	glBegin(GL_LINES);
	{
		glVertex3f(0.0, 4.0, -10.0);
		glVertex3f(-2.0, 4.0, -10.0);
	}
	glEnd();
#pragma endregion

#pragma region GL_LINE_STRIP
	glBegin(GL_LINE_STRIP);
	{
		glVertex3f(0.0, 2.0, -10.0);
		glVertex3f(-2.0, -2.0, -10.0);
		glVertex3f(2.0, -2.0, -10.0);
	}
	glEnd();
#pragma endregion

#pragma region GL_LINE_LOOP
	glBegin(GL_LINE_LOOP);
	{
		glVertex3f(0.0, 2.0, -5.0);
		glVertex3f(-2.0, -2.0, -5.0);
		glVertex3f(2.0, -2.0, -5.0);
	}
	glEnd();
#pragma endregion

#pragma region GL_TRIANGLE_STRIP
	glBegin(GL_TRIANGLE_STRIP);
	{
		glVertex3f(0.0, 6.0, -15.0);
		glVertex3f(3.0, 6.0, -15.0);
		glVertex3f(3.0, 2.0, -15.0);

		glVertex3f(1.0, 6.0, -15.0);
		glVertex3f(2.0, 6.0, -15.0);
		glVertex3f(2.0, 2.0, -15.0);

	}
	glEnd();
#pragma endregion


#pragma region GL_TRIANGLES
	glBegin(GL_TRIANGLES);
	{
		glVertex3f(0.0, 2.0, -15.0);
		glVertex3f(-2.0, -2.0, -15.0);
		glVertex3f(2.0, -2.0, -15.0);

		glVertex3f(0.0, 2.0, -25.0);
		glVertex3f(1.0, 4.0, -25.0);
		glVertex3f(1.0, 4.0, -25.0);
	}
	glEnd();
#pragma endregion

#pragma region GL_TRIANGLE_FAN
	glBegin(GL_TRIANGLE_FAN);
	{
		glVertex3f(1.0, 1.0, -20.0);
		glVertex3f(3.0, 3.0, -20.0);
		glVertex3f(1.0, 4.0, -20.0);
		glVertex3f(3.0, 5.0, -20.0);

	}
	glEnd();
#pragma endregion

#pragma region GL_QUADS
	glBegin(GL_QUADS);
	{
		glVertex3f(1.0, 1.0, -20.0);
		glVertex3f(-6.0, 3.0, -20.0);
		glVertex3f(-5.0, 4.0, -20.0);
		glVertex3f(-4.0, 5.0, -20.0);

	}
	glEnd();
#pragma endregion

#pragma region GL_QUAD_STRIP
	glBegin(GL_QUAD_STRIP);
	{
		glVertex3f(-5.0, -1.0, -20.0);
		glVertex3f(-6.0, -3.0, -20.0);
		glVertex3f(-6.0, -4.0, -20.0);
		glVertex3f(-5.0, -5.0, -20.0);

	}
	glEnd();
#pragma endregion

#pragma region GL_POLYGON
	glBegin(GL_POLYGON);
	{
		glVertex3f(4.0, 4.0, -20.0);
		glVertex3f(6.0, -3.0, -20.0);
		glVertex3f(5.0, -4.0, -20.0);
		glVertex3f(7.0, -5.0, -20.0);
		glVertex3f(8.0, -8.0, -20.0);
	}
	glEnd();
#pragma endregion
	window.display();
	//window.pushGLStates();
	//Window.popGLStates();

}

void Game::unload()
{
	cout << "Cleaning up" << endl;
}

