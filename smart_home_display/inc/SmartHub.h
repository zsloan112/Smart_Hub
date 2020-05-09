#include <QMainWindow>


namespace Ui{
    class SmartHub;
}

class SmartHub : public QMainWindow
{

    Q_OBJECT

public:
    explicit SmartHub(QWidget *parent = nullptr);
    ~SmartHub();

private:
    Ui::SmartHub *ui;

};


