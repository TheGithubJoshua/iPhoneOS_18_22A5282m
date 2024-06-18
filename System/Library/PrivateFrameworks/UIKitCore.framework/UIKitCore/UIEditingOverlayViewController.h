@class UIUndoGestureInteraction, _UIActionWhenIdle;
@protocol UIInteraction;

@interface UIEditingOverlayViewController : UIViewController

@property (retain, nonatomic) UIUndoGestureInteraction *undoInteraction;
@property (retain, nonatomic) _UIActionWhenIdle *addPencilTextInputInteractionAction;
@property (retain, nonatomic) id<UIInteraction> pencilTextInputInteraction;

- (void)loadView;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)_addPencilTextInputInteraction;
- (void)_removeInteractions;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)updateEditingOverlayContainer;
- (void)_addInteractions;

@end
