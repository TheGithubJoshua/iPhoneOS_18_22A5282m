@interface SwiftUI.UIKitMainMenuController : UIResponder {
    void /* unknown type, empty encoding */ commandsList;
    void /* unknown type, empty encoding */ navigationV3Authority;
    void /* unknown type, empty encoding */ environment;
    void /* unknown type, empty encoding */ focusedValues;
    void /* unknown type, empty encoding */ topLevelItemCoordinators;
    void /* unknown type, empty encoding */ keyCommandMap;
}

- (id)init;
- (void).cxx_destruct;
- (void)_performMainMenuShortcutKeyCommand:(id)a0;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)buildMenuWithBuilder:(id)a0;

@end
