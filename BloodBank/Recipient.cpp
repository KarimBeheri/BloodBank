#include "Recipient.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main3(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    BloodBank::Recipient form;
    Application::Run(% form);
}
