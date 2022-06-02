#include "RecipientUi.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main8(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    BloodBank::RecipientUi form;
    Application::Run(% form);
}
