#include "Registration.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main1(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    BloodBank::Registration form;
    Application::Run(% form);
}