package;

class TabController {

    private var model:TabModel;
    private var view:TabView;
    private var main:Main;

    public function new(model:TabModel, view:TabView, main:Main) {
        this.model = model;
        this.view = view;
        this.main = main;
    }

    public function tabClicked():Void {
        view.update(model.content);
    }
}
