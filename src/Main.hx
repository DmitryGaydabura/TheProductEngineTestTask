package;

import haxe.xml.Fast;
import openfl.Assets;
import openfl.display.Sprite;
import openfl.events.MouseEvent;
import openfl.text.TextField;
import openfl.text.TextFormat;

class Main extends Sprite {

    public var view:TabView;
    public var models:Array<TabModel>;
    public var controllers:Array<TabController>;
    public var tabButtons:Array<Sprite>;
    private var scrollBar:ScrollBar;

    public function new() {
        super();

        view = new TabView();
        addChild(view);

        models = [];
        controllers = [];
        tabButtons = [];

        initScrollBar();

        loadTabsFromXml();
    }

    private function createTabButton(label:String, x:Float, width:Float, controller:TabController):Sprite {
        var button = new Sprite();
        button.graphics.lineStyle(1, 0x000000);
        button.graphics.beginFill(0xE8EBEF);
        button.graphics.drawRect(0, 0, width, 20);
        button.graphics.endFill();

        var textField = new TextField();
        textField.text = label;
        textField.width = width;
        textField.height = 20;
        button.addChild(textField);

        button.x = x;
        button.y = 10;
        addChild(button);

        button.addEventListener(MouseEvent.CLICK, function(e:MouseEvent) {
            resetTabColors();
            button.graphics.clear();
            button.graphics.lineStyle(1, 0x000000);
            button.graphics.beginFill(0xAFD1F7);
            button.graphics.drawRect(0, 0, width, 20);
            button.graphics.endFill();
            controller.tabClicked();
        });

        return button;
    }
	
	    public function resetTabColors():Void {
        for (tab in tabButtons) {
            tab.graphics.clear();
            tab.graphics.lineStyle(1, 0x000000);
            tab.graphics.beginFill(0xE8EBEF);
            tab.graphics.drawRect(0, 0, tab.width, tab.height);
            tab.graphics.endFill();
        }
    }

    private function initScrollBar():Void {
        scrollBar = new ScrollBar(view.textField);
        addChild(scrollBar);
    }

    private function loadTabsFromXml():Void {
		
		//we could change xml location here. I cannot really understand why I cannot use any other package then img.
		//otherwise I encounter en error. 
		//P.S. Oh, I have found assets config in project.xml
        var xmlString:String = Assets.getText("img/tabs.xml");
        var xmlData = Xml.parse(xmlString);
        var fast = new Fast(xmlData.firstElement());

        var numTabs:Int = 0;
        for (_ in fast.nodes.Tab) {
            numTabs++;
        }

        var tabWidth:Float = view.textField.width / numTabs;
        var xPos:Float = 10;

        for (tab in fast.nodes.Tab) {
            var title = tab.node.Title.innerData;
            var content = tab.node.Content.innerData;

            var model = new TabModel(title, content);
            models.push(model);

            var controller = new TabController(model, view, this);
            controllers.push(controller);

            var tabButton:Sprite = createTabButton(title, xPos, tabWidth, controller);
            tabButtons.push(tabButton);
            xPos += tabWidth;
        }
    }
}
