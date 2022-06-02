#include "Admin.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main5(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    BloodBank::Admin form;
    Application::Run(% form);
}
