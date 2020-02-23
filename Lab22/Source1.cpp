#include "Header.h"

double GetD(TextBox^ TB)
{
	return Convert::ToDouble(TB->Text);
}
 
void PutD(double x, TextBox^ TB)
{
	TB->Text = x.ToString();
}