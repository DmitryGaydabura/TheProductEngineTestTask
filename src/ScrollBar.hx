package;

import openfl.display.Sprite;
import openfl.events.MouseEvent;
import openfl.text.TextField;

class ScrollBar extends Sprite {

    private var textField:TextField;
    private var bar:Sprite;

    public function new(textField:TextField) {
        super();
        this.textField = textField;
        initialize();
    }

    private function initialize():Void {
        bar = new Sprite();
        bar.graphics.beginFill(0xE8EBEF);
        bar.graphics.drawRect(0, 0, 20, 100);
        bar.graphics.endFill();
        bar.x = 600;
        bar.y = 30;
        addChild(bar);
        
        bar.addEventListener(MouseEvent.MOUSE_DOWN, onMouseDown);
    }

    private function onMouseDown(e:MouseEvent):Void {
        stage.addEventListener(MouseEvent.MOUSE_MOVE, onMouseMove);
        stage.addEventListener(MouseEvent.MOUSE_UP, onMouseUp);
    }

    private function onMouseMove(e:MouseEvent):Void {
        var newY:Float = mouseY - 30;
        if (newY < 0) newY = 0;
        if (newY > textField.height - bar.height) newY = textField.height - bar.height;

        bar.y = 30 + newY;
        textField.scrollV = Math.ceil((newY / (textField.height - bar.height)) * textField.maxScrollV);
    }

    private function onMouseUp(e:MouseEvent):Void {
        stage.removeEventListener(MouseEvent.MOUSE_MOVE, onMouseMove);
        stage.removeEventListener(MouseEvent.MOUSE_UP, onMouseUp);
    }
}
