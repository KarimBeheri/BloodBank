#include "Main.h"
#include<iostream>
using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main(array<String^>^ args)
{

    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    BloodBank::Main form;
    Application::Run(% form);
}

