#include <gui/mainscreen_screen/MainScreenView.hpp>

MainScreenView::MainScreenView()
{

}

void MainScreenView::setupScreen()
{
    MainScreenViewBase::setupScreen();
}

void MainScreenView::tearDownScreen()
{
    MainScreenViewBase::tearDownScreen();
}

void MainScreenView::toggleLED(){
	HAL_GPIO_TogglePin(USER_LD2_RED_GPIO_Port, USER_LD2_RED_Pin);
}
