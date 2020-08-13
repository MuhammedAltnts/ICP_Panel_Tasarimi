#include "variable.hpp";

void KeyBoardEvent()
{

	if (event.type == sf::Event::KeyPressed)
	{
		if (event.key.code == sf::Keyboard::Numpad1)
		{
			cout << "T-ILS Tusuna basildi" << endl;
			cout << "*********************************" << endl;
			squareButton[0].setFillColor(sf::Color(255, 0, 0));
		}
		if (event.key.code == sf::Keyboard::Numpad2)
		{
			cout << "ALOW Tusuna basildi" << endl;
			cout << "*********************************" << endl;
			squareButton[1].setFillColor(sf::Color(255, 0, 0));
		}
		if (event.key.code == sf::Keyboard::Numpad3)
		{
			cout << "F-ACK Tusuna basildi" << endl;
			cout << "*********************************" << endl;
			squareButton[2].setFillColor(sf::Color(255, 0, 0));
		}
		if (event.key.code == sf::Keyboard::Numpad4)
		{
			cout << "STPT Tusuna basildi" << endl;
			cout << "*********************************" << endl;
			squareButton[4].setFillColor(sf::Color(255, 0, 0));
		}
		if (event.key.code == sf::Keyboard::Numpad5)
		{
			cout << "CRUS Tusuna basildi" << endl;
			cout << "*********************************" << endl;
			squareButton[5].setFillColor(sf::Color(255, 0, 0));
		}
		if (event.key.code == sf::Keyboard::Numpad6)
		{
			cout << "TIME Tusuna basildi" << endl;
			cout << "*********************************" << endl;
			squareButton[6].setFillColor(sf::Color(255, 0, 0));
		}
		if (event.key.code == sf::Keyboard::Numpad7)
		{
			cout << "MARK Tusuna basildi" << endl;
			cout << "*********************************" << endl;
			squareButton[8].setFillColor(sf::Color(255, 0, 0));
		}
		if (event.key.code == sf::Keyboard::Numpad8)
		{
			cout << "FIX Tusuna basildi" << endl;
			cout << "*********************************" << endl;
			squareButton[9].setFillColor(sf::Color(255, 0, 0));
		}
		if (event.key.code == sf::Keyboard::Numpad9)
		{
			cout << "A-CAL Tusuna basildi" << endl;
			cout << "*********************************" << endl;
			squareButton[10].setFillColor(sf::Color(255, 0, 0));
		}
		if (event.key.code == sf::Keyboard::Numpad0)
		{
			cout << "M-SEL Tusuna basildi" << endl;
			cout << "*********************************" << endl;
			squareButton[11].setFillColor(sf::Color(255, 0, 0));
		}
		if (event.key.code == sf::Keyboard::Add)
		{
			cout << "RCL Tusuna basildi" << endl;
			cout << "*********************************" << endl;
			squareButton[3].setFillColor(sf::Color(255, 0, 0));
		}
		if (event.key.code == sf::Keyboard::Enter)
		{
			cout << "ENTR Tusuna basildi" << endl;
			cout << "*********************************" << endl;
			squareButton[7].setFillColor(sf::Color(255, 0, 0));
		}


		if (event.key.code == sf::Keyboard::Up)
		{
			cout << "Yukari Yon Tusuna Basildi" << endl;
			cout << "*********************************" << endl;
			arrow.setFillColor(sf::Color::Green);
			arrow.setOutlineColor(sf::Color::Green);
		}
		if (event.key.code == sf::Keyboard::Down)
		{
			cout << "Asagi Yon Tusuna Basildi" << endl;
			cout << "*********************************" << endl;
			arrow.setFillColor(sf::Color::Blue);
			arrow.setOutlineColor(sf::Color::Blue);
		}
		if (event.key.code == sf::Keyboard::Right)
		{
			cout << "Sag Yon Tusuna Basildi" << endl;
			cout << "*********************************" << endl;
			arrow.setFillColor(sf::Color::Magenta);
			arrow.setOutlineColor(sf::Color::Magenta);
		}
		if (event.key.code == sf::Keyboard::Left)
		{
			cout << "Sol Yon Tusuna Basildi" << endl;
			cout << "*********************************" << endl;
			arrow.setFillColor(sf::Color::Yellow);
			arrow.setOutlineColor(sf::Color::Yellow);
		}



		if (event.key.code == sf::Keyboard::Insert)
		{
			cout << "1. Anahtar 1 Konumunda" << endl;
			cout << "*********************************" << endl;
			doubleButton[0].setTexture(&kaplama[12]);
		}
		if (event.key.code == sf::Keyboard::Home)
		{
			cout << "1. Anahtar 0 Konumunda" << endl;
			cout << "*********************************" << endl;
			doubleButton[0].setTexture(&kaplama[7]);
		}
		if (event.key.code == sf::Keyboard::Delete)
		{
			cout << "1. Anahtar -1 Konumunda" << endl;
			cout << "*********************************" << endl;
			doubleButton[0].setTexture(&kaplama[13]);
		}



		if (event.key.code == sf::Keyboard::PageUp)
		{
			cout << "2. Anahtar 1 Konumunda" << endl;
			cout << "*********************************" << endl;
			doubleButton[1].setTexture(&kaplama[12]);
		}
		if (event.key.code == sf::Keyboard::End)
		{
			cout << "2. Anahtar 0 Konumunda" << endl;
			cout << "*********************************" << endl;
			doubleButton[1].setTexture(&kaplama[7]);
		}
		if (event.key.code == sf::Keyboard::PageDown)
		{
			cout << "2. Anahtar -1 Konumunda" << endl;
			cout << "*********************************" << endl;
			doubleButton[1].setTexture(&kaplama[13]);
		}


		if (event.key.code == sf::Keyboard::Space)
		{
			cout << "WX Butonuna Basildi" << endl;
			cout << "*********************************" << endl;
			roundButton.setFillColor(sf::Color(100, 100, 100));

			if (counter % 2 == 0)
			{
				cout << "WX Butonu Birakildi" << endl;
				cout << "*********************************" << endl;
				roundButton.setFillColor(sf::Color(255, 255, 255));
			}
			counter++;

		}



		if (event.key.code == sf::Keyboard::Q)
		{
			cout << "Switch-1 DRIFT C/O Konumunda" << endl;
			cout << "*********************************" << endl;
			kaplama[9].loadFromFile("Switch3.png");
			switch_[0].setTexture(&kaplama[9]);
			switch_[0].setRotation(180);
			//switch_[0].setOutlineColor(sf::Color::Blue);

		}
		if (event.key.code == sf::Keyboard::W)
		{
			cout << "Switch-1 NORM Konumunda" << endl;
			cout << "*********************************" << endl;
			kaplama[9].loadFromFile("Switch3.png");
			switch_[0].setTexture(&kaplama[9]);
			switch_[0].setRotation(270);
			//switch_[0].setOutlineColor(sf::Color::Green);

		}
		if (event.key.code == sf::Keyboard::S)
		{
			cout << "Switch-1 WARN RESET Konumunda" << endl;
			cout << "*********************************" << endl;
			kaplama[9].loadFromFile("Switch3.png");
			switch_[0].setTexture(&kaplama[9]);
			switch_[0].setRotation(0);
			//switch_[0].setOutlineColor(sf::Color::Yellow);

		}
		if (event.key.code == sf::Keyboard::A)
		{
			cout << "Switch-1 Baslangic Konumunda" << endl;
			cout << "*********************************" << endl;
			kaplama[9].loadFromFile("Switch.png");
			switch_[0].setTexture(&kaplama[9]);

			switch_[0].setFillColor(sf::Color::White);
			switch_[0].setOutlineColor(sf::Color::White);

		}

		if (event.key.code == sf::Keyboard::E)
		{
			cout << "Switch-2 AUTO Konumunda" << endl;
			cout << "*********************************" << endl;
			kaplama[10].loadFromFile("Switch3.png");
			switch_[1].setTexture(&kaplama[10]);
			switch_[1].setRotation(180);

		}
		if (event.key.code == sf::Keyboard::R)
		{
			cout << "Switch-2 LVL Konumunda" << endl;
			cout << "*********************************" << endl;
			kaplama[10].loadFromFile("Switch3.png");
			switch_[1].setTexture(&kaplama[10]);
			switch_[1].setRotation(270);

		}
		if (event.key.code == sf::Keyboard::F)
		{
			cout << "Switch-2 GAIN Konumunda" << endl;
			cout << "*********************************" << endl;
			kaplama[10].loadFromFile("Switch3.png");
			switch_[1].setTexture(&kaplama[10]);
			switch_[1].setRotation(0);

		}
		if (event.key.code == sf::Keyboard::D)
		{
			cout << "Switch-2 Baslangic Konumunda" << endl;
			cout << "*********************************" << endl;
			kaplama[10].loadFromFile("Switch.png");
			switch_[1].setTexture(&kaplama[10]);

		}


	}
	if (event.type == sf::Event::KeyReleased)
	{
		if (event.key.code == sf::Keyboard::Numpad1)
		{
			cout << "T-ILS Tusu Birakildi" << endl;
			cout << "*********************************" << endl;
			squareButton[0].setFillColor(sf::Color(255, 255, 255));
		}

		if (event.key.code == sf::Keyboard::Numpad2)
		{
			cout << "ALOW Tusu Birakildi" << endl;
			cout << "*********************************" << endl;
			squareButton[1].setFillColor(sf::Color(255, 255, 255));
		}
		if (event.key.code == sf::Keyboard::Numpad3)
		{
			cout << "F-ACK Tusu Birakildi" << endl;
			cout << "*********************************" << endl;
			squareButton[2].setFillColor(sf::Color(255, 255, 255));
		}
		if (event.key.code == sf::Keyboard::Numpad4)
		{
			cout << "STPT Tusu Birakildi" << endl;
			cout << "*********************************" << endl;
			squareButton[4].setFillColor(sf::Color(255, 255, 255));
		}
		if (event.key.code == sf::Keyboard::Numpad5)
		{
			cout << "CRUS Tusu Birakildi" << endl;
			cout << "*********************************" << endl;
			squareButton[5].setFillColor(sf::Color(255, 255, 255));
		}
		if (event.key.code == sf::Keyboard::Numpad6)
		{
			cout << "TIME Tusu Birakildi" << endl;
			cout << "*********************************" << endl;
			squareButton[6].setFillColor(sf::Color(255, 255, 255));
		}
		if (event.key.code == sf::Keyboard::Numpad7)
		{
			cout << "MARK Tusu Birakildi" << endl;
			cout << "*********************************" << endl;
			squareButton[8].setFillColor(sf::Color(255, 255, 255));
		}
		if (event.key.code == sf::Keyboard::Numpad8)
		{
			cout << "FIX Tusu Birakildi" << endl;
			cout << "*********************************" << endl;
			squareButton[9].setFillColor(sf::Color(255, 255, 255));
		}
		if (event.key.code == sf::Keyboard::Numpad9)
		{
			cout << "A-CAL Tusu Birakildi" << endl;
			cout << "*********************************" << endl;
			squareButton[10].setFillColor(sf::Color(255, 255, 255));
		}
		if (event.key.code == sf::Keyboard::Numpad0)
		{
			cout << "M-SEL Tusu Birakildi" << endl;
			cout << "*********************************" << endl;
			squareButton[11].setFillColor(sf::Color(255, 255, 255));
		}
		if (event.key.code == sf::Keyboard::Add)
		{
			cout << "RCL Tusu Birakildi" << endl;
			cout << "*********************************" << endl;
			squareButton[3].setFillColor(sf::Color(255, 255, 255));
		}
		if (event.key.code == sf::Keyboard::Enter)
		{
			cout << "ENTR Tusu Birakildi" << endl;
			cout << "*********************************" << endl;
			squareButton[7].setFillColor(sf::Color(255, 255, 255));
		}


		if (event.key.code == sf::Keyboard::Up)
		{
			cout << "Yukari Yon Tusu Birakildi" << endl;
			cout << "*********************************" << endl;
			arrow.setFillColor(sf::Color(255, 255, 255));
			arrow.setOutlineColor(sf::Color(255, 255, 255));
		}
		if (event.key.code == sf::Keyboard::Down)
		{
			cout << "Asagi Yon Tusu Birakildi" << endl;
			cout << "*********************************" << endl;
			arrow.setFillColor(sf::Color(255, 255, 255));
			arrow.setOutlineColor(sf::Color(255, 255, 255));
		}
		if (event.key.code == sf::Keyboard::Right)
		{
			cout << "Sag Yon Tusu Birakildi" << endl;
			cout << "*********************************" << endl;
			arrow.setFillColor(sf::Color(255, 255, 255));
			arrow.setOutlineColor(sf::Color(255, 255, 255));
		}
		if (event.key.code == sf::Keyboard::Left)
		{
			cout << "Sol Yon Tusu Birakildi" << endl;
			cout << "*********************************" << endl;
			arrow.setFillColor(sf::Color(255, 255, 255));
			arrow.setOutlineColor(sf::Color(255, 255, 255));
		}

	}
}

void mouseEvent()
{
	if (event.type == sf::Event::MouseWheelMoved)
	{
		//std::cout << event.mouseWheel.delta << '\n';
		if (mousePositionX >= 50 && mousePositionX <= 80 && mousePositionY >= 180 && mousePositionY <= 330)
		{
			if (event.mouseWheel.delta == 1)
			{
				scroll1++;
				cout << "Scroll-1'in Degeri = " << scroll1 << endl;
				if (scroll1 % 2 == 0)
					scroll[0].setTexture(&kaplama[8]);
				else
					scroll[0].setTexture(&kaplama[11]);

			}
			if (event.mouseWheel.delta == -1)
			{
				scroll1--;
				cout << "Scroll-1'in Degeri = " << scroll1 << endl;
				if (scroll1 % 2 == 0)
					scroll[0].setTexture(&kaplama[11]);
				else
					scroll[0].setTexture(&kaplama[8]);
			}
		}
		if (mousePositionX >= 50 && mousePositionX <= 80 && mousePositionY >= 430 && mousePositionY <= 580)
		{
			if (event.mouseWheel.delta == 1)
			{
				scroll2++;
				cout << "Scroll-2'in Degeri = " << scroll2 << endl;
				if (scroll2 % 2 == 0)
					scroll[1].setTexture(&kaplama[8]);
				else
					scroll[1].setTexture(&kaplama[11]);
			}
			if (event.mouseWheel.delta == -1)
			{
				scroll2--;
				cout << "Scroll-2'in Degeri = " << scroll2 << endl;
				if (scroll2 % 2 == 0)
					scroll[1].setTexture(&kaplama[11]);
				else
					scroll[1].setTexture(&kaplama[8]);
			}
		}
		if (mousePositionX >= 720 && mousePositionX <= 750 && mousePositionY >= 180 && mousePositionY <= 330)
		{
			if (event.mouseWheel.delta == 1)
			{
				scroll3++;
				cout << "Scroll-3'in Degeri = " << scroll3 << endl;
				if (scroll3 % 2 == 0)
					scroll[2].setTexture(&kaplama[8]);
				else
					scroll[2].setTexture(&kaplama[11]);
			}
			if (event.mouseWheel.delta == -1)
			{
				scroll3--;
				cout << "Scroll-3'in Degeri = " << scroll3 << endl;
				if (scroll3 % 2 == 0)
					scroll[2].setTexture(&kaplama[11]);
				else
					scroll[2].setTexture(&kaplama[8]);
			}
		}
		if (mousePositionX >= 720 && mousePositionX <= 750 && mousePositionY >= 430 && mousePositionY <= 580)
		{
			if (event.mouseWheel.delta == 1)
			{
				scroll4++;
				cout << "Scroll-4'in Degeri = " << scroll4 << endl;
				if (scroll4 % 2 == 0)
					scroll[3].setTexture(&kaplama[8]);
				else
					scroll[3].setTexture(&kaplama[11]);
			}
			if (event.mouseWheel.delta == -1)
			{
				scroll4--;
				cout << "Scroll-4'in Degeri = " << scroll4 << endl;
				if (scroll4 % 2 == 0)
					scroll[3].setTexture(&kaplama[11]);
				else
					scroll[3].setTexture(&kaplama[8]);
			}
		}

		if (mousePositionX >= 100 && mousePositionX <= 160 && mousePositionY >= 120 && mousePositionY <= 160)
		{
			if (event.mouseWheel.delta == 1)
			{
				tunerRotate[0]++;
				cout << "tuner-1'in Degeri = " << tunerRotate[0] << endl;
				tuner[0].setRotation(tunerRotate[0] * 5);
			}
			if (event.mouseWheel.delta == -1)
			{
				tunerRotate[0]--;
				cout << "tuner-1'in Degeri = " << tunerRotate[0] << endl;
				tuner[0].setRotation(tunerRotate[0] * 5);
			}
		}
		if (mousePositionX >= 210 && mousePositionX <= 250 && mousePositionY >= 120 && mousePositionY <= 160)
		{
			if (event.mouseWheel.delta == 1)
			{
				tunerRotate[1]++;
				cout << "tuner-2'in Degeri = " << tunerRotate[1] << endl;
				tuner[1].setRotation(tunerRotate[1] * 5);
			}
			if (event.mouseWheel.delta == -1)
			{
				tunerRotate[1]--;
				cout << "tuner-2'in Degeri = " << tunerRotate[1] << endl;
				tuner[1].setRotation(tunerRotate[1] * 5);
			}
		}
		if (mousePositionX >= 320 && mousePositionX <= 360 && mousePositionY >= 140 && mousePositionY <= 160)
		{
			if (event.mouseWheel.delta == 1)
			{
				tunerRotate[2]++;
				cout << "tuner-3'in Degeri = " << tunerRotate[2] << endl;
				tuner[2].setRotation(tunerRotate[2] * 5);
			}
			if (event.mouseWheel.delta == -1)
			{
				tunerRotate[2]--;
				cout << "tuner-3'in Degeri = " << tunerRotate[2] << endl;
				tuner[2].setRotation(tunerRotate[2] * 5);
			}
		}
		if (mousePositionX >= 430 && mousePositionX <= 470 && mousePositionY >= 140 && mousePositionY <= 160)
		{
			if (event.mouseWheel.delta == 1)
			{
				tunerRotate[3]++;
				cout << "tuner-4'in Degeri = " << tunerRotate[3] << endl;
				tuner[3].setRotation(tunerRotate[3] * 5);
			}
			if (event.mouseWheel.delta == -1)
			{
				tunerRotate[3]--;
				cout << "tuner-4'in Degeri = " << tunerRotate[3] << endl;
				tuner[3].setRotation(tunerRotate[3] * 5);
			}
		}
		if (mousePositionX >= 540 && mousePositionX <= 580 && mousePositionY >= 140 && mousePositionY <= 160)
		{
			if (event.mouseWheel.delta == 1)
			{
				tunerRotate[4]++;
				cout << "tuner-5'in Degeri = " << tunerRotate[4] << endl;
				tuner[4].setRotation(tunerRotate[4] * 5);
			}
			if (event.mouseWheel.delta == -1)
			{
				tunerRotate[4]--;
				cout << "tuner-5'in Degeri = " << tunerRotate[4] << endl;
				tuner[4].setRotation(tunerRotate[4] * 5);
			}
		}
		if (mousePositionX >= 650 && mousePositionX <= 690 && mousePositionY >= 140 && mousePositionY <= 160)
		{
			if (event.mouseWheel.delta == 1)
			{
				tunerRotate[5]++;
				cout << "tuner-6'in Degeri = " << tunerRotate[5] << endl;
				tuner[5].setRotation(tunerRotate[5] * 5);
			}
			if (event.mouseWheel.delta == -1)
			{
				tunerRotate[5]--;
				cout << "tuner-6'in Degeri = " << tunerRotate[5] << endl;
				tuner[5].setRotation(tunerRotate[5] * 5);
			}
		}

	}
}


int main()
{
	sf::RenderWindow window(sf::VideoMode(windowWidth, windowhight), "konsol1");

	platform.setSize(sf::Vector2f(platformWidth, platformHight));
	platform.setPosition(0, 0);
	kaplama[0].loadFromFile("Platform Yazýlý.png");
	platform.setTexture(&kaplama[0]);

	for (int i = 0; i < 6; i++)
	{
		tuner[i].setRadius(tunersize);
		tuner[i].setOrigin(tunersize, tunersize);
		tunerTexture[i].loadFromFile(tunerKaplama[i]);
		tuner[i].setTexture(&tunerTexture[i]);
	}

	tuner[0].setPosition(123.5, 149.5);
	tuner[1].setPosition(233, 149.5);
	tuner[2].setPosition(343, 149.5);
	tuner[3].setPosition(452.5, 149.5);
	tuner[4].setPosition(562, 149.5);
	tuner[5].setPosition(671.5, 149.5);


	for (int i = 0; i < 4; i++)
	{
		screw[i].setRadius(screwSize);
		screw[i].setOrigin(screwSize, screwSize);
		screw[i].setOutlineThickness(2);
		screw[i].setOutlineColor(sf::Color::Black);
		kaplama[2].loadFromFile("Screw2.png");
		screw[i].setTexture(&kaplama[2]);
	}

	screw[0].setPosition(27, 111);
	screw[1].setPosition(767, 111);
	screw[2].setPosition(50, 773);
	screw[3].setPosition(743, 773);

	for (int i = 0; i < 2; i++)
	{
		switch_[i].setRadius(switchSize);
		switch_[i].setOrigin(switchSize, switchSize);
		switch_[i].setOutlineThickness(2);
		switch_[i].setOutlineColor(sf::Color::White);
		kaplama[3].loadFromFile("Switch.png");
		switch_[i].setTexture(&kaplama[3]);
	}
	switch_[0].setPosition(481, 687);
	switch_[1].setPosition(646, 627);

	roundButton.setRadius(roundButtonSize);
	roundButton.setOrigin(roundButtonSize, roundButtonSize);
	kaplama[4].loadFromFile("Round Button1.png");
	roundButton.setTexture(&kaplama[4]);
	roundButton.setOutlineThickness(2);
	roundButton.setOutlineColor(sf::Color::Black);
	roundButton.setFillColor(sf::Color(150, 150, 150));

	roundButton.setPosition(649, 300);

	arrow.setRadius(arrowSize);
	arrow.setOrigin(arrowSize, arrowSize);
	kaplama[5].loadFromFile("Arrows.png");
	arrow.setTexture(&kaplama[5]);
	arrow.setOutlineThickness(2);
	arrow.setOutlineColor(sf::Color::White);

	arrow.setPosition(320, 685);

	for (int i = 0; i < 12; i++)
	{
		squareButton[i].setSize(sf::Vector2f(squareButtonSize, squareButtonSize));
		squareButtonTexture[i].loadFromFile(squareKaplama[i]);
		squareButton[i].setTexture(&squareButtonTexture[i]);
	}

	squareButton[0].setPosition(124, 269);
	squareButton[1].setPosition(234, 269);
	squareButton[2].setPosition(343, 269);
	squareButton[3].setPosition(482, 269);
	squareButton[4].setPosition(124, 378);
	squareButton[5].setPosition(234, 378);
	squareButton[6].setPosition(343, 378);
	squareButton[7].setPosition(482, 378);
	squareButton[8].setPosition(124, 487);
	squareButton[9].setPosition(234, 487);
	squareButton[10].setPosition(343, 487);
	squareButton[11].setPosition(482, 487);

	for (int i = 0; i < 2; i++)
	{
		doubleButton[i].setSize(sf::Vector2f(doubleButtonWidth, doubleButtonHight));
		kaplama[7].loadFromFile("Double Button.png");
		doubleButton[i].setTexture(&kaplama[7]);
	}

	kaplama[12].loadFromFile("Double Button3.png");
	kaplama[13].loadFromFile("Double Button2.png");
	doubleButton[0].setPosition(124, 614);
	doubleButton[1].setPosition(624.5, 377);

	for (int i = 0; i < 4; i++)
	{
		scroll[i].setSize(sf::Vector2f(scrollWidth, scrollHight));
		kaplama[8].loadFromFile("Scroll1.png");
		scroll[i].setTexture(&kaplama[8]);
	}
	kaplama[11].loadFromFile("Scroll2.png");
	scroll[0].setPosition(51, 178);
	scroll[1].setPosition(51, 428);
	scroll[2].setPosition(716, 178);
	scroll[3].setPosition(716, 428);

	while (window.isOpen())
	{
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
			if (event.type == sf::Event::MouseMoved)
			{
				mousePositionX = event.mouseMove.x;
				mousePositionY = event.mouseMove.y;
			}

			KeyBoardEvent();

			mouseEvent();

		}

		window.clear(sf::Color(255, 255, 255));

		window.draw(platform);

		for (int i = 0; i < 6; i++)
		{
			window.draw(tuner[i]);
		}
		for (int i = 0; i < 4; i++)
		{
			window.draw(screw[i]);
		}
		for (int i = 0; i < 2; i++)
		{
			window.draw(switch_[i]);
		}
		window.draw(roundButton);
		window.draw(arrow);
		for (int i = 0; i < 12; i++)
		{
			window.draw(squareButton[i]);
		}
		for (int i = 0; i < 2; i++)
		{
			window.draw(doubleButton[i]);
		}
		for (int i = 0; i < 4; i++)
		{
			window.draw(scroll[i]);
		}

		window.display();
	}

	return 0;
}