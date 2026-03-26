#include "Pause.h"


Pause::Pause(sf::RenderWindow& window, Input& input, GameState& gameState, AudioManager& aud) : Scene(window, input, gameState, aud), 
m_RBText(m_Font), m_SBText(m_Font), m_QBText(m_Font)
{
	m_PauseScreenBackground.setFillColor(sf::Color(212, 191, 89));
	m_PauseScreenBackground.setSize({ static_cast<float>(m_window.getSize().x) / 1.5f, static_cast<float>(m_window.getSize().y) / 1.5f});
	m_PauseScreenBackground.setPosition({ static_cast<float>(m_window.getSize().x) / 3, static_cast<float>(m_window.getSize().y) / 3 });
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







	if (m_input.isPressed(sf::Keyboard::Scancode::Escape))
		m_gameState.setCurrentState(State::LEVELTWO);


}

void Pause::onBegin() {}

void Pause::onEnd() {}

void Pause::render() 
{
	beginDraw();

	m_window.draw(m_PauseScreenBackground);

	endDraw();
}

