#include "Presenter.h"
#include "IView.h"
#include "View.h"

int main()
{
    IView* thisView = new View;

    Presenter presenter(thisView);

    presenter.callInterface();

    delete thisView;

    return 0;
}
