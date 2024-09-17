#include <iostream>

using namespace std;

int main()
{
	Rectangle *pRect = new Rectangle;
	const Rectangle *pConstRect = new Rectangle;
	Rectangle *const pConstPtr = new Rectangle;

	cout << "pRect width: " << pRect->GetWidth() << " meters wide.\n";
	cout << "pConstRect width: " << pConstRect->GetWidth() << " meters wide.\n";
	cout << "pConstPtr width: " << pConstPtr->GetWidth() << " meters wide.\n";

	pRect->SetWidth(10);
	// pConstRect->SetWidth(10);
	pConstPtr->SetWidth(10);

	cout << "pRect width: " << pRect->GetWidth() << " meters wide.\n";
	cout << "pConstRect width: " << pConstRect->GetWidth() << " meters wide.\n";
	cout << "pConstPtr width: " << pConstPtr->GetWidth() << " meters wide.\n";

	return 0;
}