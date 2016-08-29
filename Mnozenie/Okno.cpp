#include "Okno.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main(array<System::String ^> ^args) {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Mnozenie::Okno mojaForma;
	Application::Run(%mojaForma);


	return 0;
}