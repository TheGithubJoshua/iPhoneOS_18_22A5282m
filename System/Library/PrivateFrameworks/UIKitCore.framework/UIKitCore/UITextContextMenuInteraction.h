@class UIContextMenuInteraction;
@protocol UIContextMenuInteractionDelegate;

@interface UITextContextMenuInteraction : UITextInteraction

@property (class, readonly, nonatomic) BOOL shouldUseContextMenuInteraction;

@property (retain, nonatomic) UIContextMenuInteraction *contextMenuInteraction;
@property (weak, nonatomic) id<UIContextMenuInteractionDelegate> externalContextMenuDelegate;
@property (readonly, nonatomic) BOOL dismissedRecently;
@property (readonly, nonatomic) BOOL isDisplayingMenu;
@property (readonly, nonatomic) BOOL dismissedByActionSelection;

+ (void)setShouldUseContextMenuInteraction:(BOOL)a0;
+ (id)createMenuInteraction;

- (void)presentMenuForInputUI:(id)a0;
- (void)dismissMenuForInputUI;
- (void)updateVisibleMenuPosition;
- (void)prepareForContextMenuAtLocationInView:(struct CGPoint { double x0; double x1; })a0 completion:(id /* block */)a1;
- (struct CGPoint { double x0; double x1; })locationInTextInputViewForLocationInView:(struct CGPoint { double x0; double x1; })a0;
- (void)presentSelectionCommandsWithConfiguration:(id)a0;
- (void)dismissSelectionCommandsWithReason:(long long)a0;
- (BOOL)_textInputIsSecure;
- (void).cxx_destruct;

@end
