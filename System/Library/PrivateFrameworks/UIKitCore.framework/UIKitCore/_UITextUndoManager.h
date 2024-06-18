@class UITextInputController;

@interface _UITextUndoManager : NSUndoManager

@property (weak, nonatomic) UITextInputController *inputController;

- (void)removeAllActions;
- (void)redo;
- (void)undo;
- (void).cxx_destruct;
- (BOOL)canRedo;
- (BOOL)canUndo;

@end
