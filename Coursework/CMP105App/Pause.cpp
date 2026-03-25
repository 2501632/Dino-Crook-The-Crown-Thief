#include "Pause.h"


Pause::Pause() : m_RBText(m_Font), m_SBText(m_Font), m_QBText(m_Font)
{
	m_PauseScreenBackground.setFillColor(sf::Color(212, 191, 89));
	m_PauseScreenBackground.setSize({ m_window->getSize().x / 1.5, m_window->getSize().y / 1.5});
	m_PauseScreenBackground.setPosition({ m_window->getSize().x / 3, m_window->getSize().y / 3 });
}

void handleInput(float dt)
{
	if (m_input->isPressed(sf::Keyboard::Scancode::Escape) && !isPaused)
	{

	}
}
