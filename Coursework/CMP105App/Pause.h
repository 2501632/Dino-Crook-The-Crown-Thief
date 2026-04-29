#pragma once
#include "Framework/GameObject.h"

class Pause : public GameObject
{
public:
	Pause();
	void handleInput(float dt) override;
	void update(float dt) override;
	GameObject getResumeButton() { return m_ResumeButton; }

private:
	sf::RectangleShape m_PauseScreenBackground;
	GameObject m_ResumeButton;
	GameObject m_ShopButoon;
	GameObject m_QuitButton;
	sf::Font m_Font;
	sf::Text m_RBText;
	sf::Text m_SBText;
	sf::Text m_QBText;
	

	sf::Color m_DefaultButtonColor = sf::Color(163, 140, 29);
	sf::Color m_HoverButtonColor = sf::Color(135, 116, 23);
};

