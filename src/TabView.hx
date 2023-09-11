package;

import openfl.display.Sprite;
import openfl.text.TextField;
import openfl.text.TextFormat;

class TabView extends Sprite {

    public var textField:TextField;

    public function new() {
        super();
        initializeTextField();
    }

    private function initializeTextField():Void {
        textField = new TextField();
        textField.x = 10;
        textField.y = 30;
        textField.width = 580;
        textField.height = 400;
        textField.defaultTextFormat = new TextFormat(null, 16);
        textField.backgroundColor = 0xE8EBEF;
        textField.background = true;
        textField.border = true;
        textField.borderColor = 0x000000;
        textField.multiline = true;
        textField.wordWrap = true;
        addChild(textField);
    }

    public function update(content:String):Void {
        textField.text = content;
        textField.background = true;
        textField.backgroundColor = 0xAFD1F7;
    }
}
