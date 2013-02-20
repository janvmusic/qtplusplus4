#include "dialog.h"

int main(int argc,char argv[])
{
    app(argc,argv);
    dialog *window = new dialog(0);
    window->show();

    return app.exec();
}
