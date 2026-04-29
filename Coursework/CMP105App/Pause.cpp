#include "Pause.h"


Pause::Pause() : m_RBText(m_Font), m_SBText(m_Font), m_QBText(m_Font)
{
	setFillColor(sf::Color(189, 165, 47));
	setSize({ 300, 400});

	m_ResumeButton.setSize({ 200, 75 });
	m_ResumeButton.setFillColor(m_DefaultButtonColor);
	m_ResumeButton.setPosition({ 120, 50 });
}

void Pause::handleInput(float dt) {}

void Pause::update(float dt)
{
	/*
	* WK WRITES A BLOCK COMMENT
	* 
	* 1. get the current view (window->getView()) and save it as a variable
	* 2. set the curent window view to the default view
	* 3. write the UI in what is now local space
	* 4. reset the view to the variable we stored as part of step (1)
	* 
	*/
}

