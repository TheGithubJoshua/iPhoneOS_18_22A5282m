@class WKContentView;

@interface WKQuirkyNSUndoManager : NSUndoManager

@property (readonly, weak) WKContentView *contentView;

- (id)initWithContentView:(id)a0;
- (void)redo;
- (void)undo;
- (void).cxx_destruct;
- (BOOL)canRedo;
- (BOOL)canUndo;

@end
