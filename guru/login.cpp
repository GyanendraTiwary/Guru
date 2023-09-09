#include "login.h"
#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

void main(array<String^>^ args)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	guru::login frm;
	
	frm.ShowDialog();

	
	user^ User = frm.User;

	if (User != nullptr)
	{
		guru::MyForm mainform(User);
		Application::Run(% mainform);
	}
	else
	{
		MessageBox::Show("Unsuccessful Authentication ", "Failure Message", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}