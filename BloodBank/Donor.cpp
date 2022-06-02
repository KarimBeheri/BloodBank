#include "Donor.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main2(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    BloodBank::Donor form;
    Application::Run(% form);
}
