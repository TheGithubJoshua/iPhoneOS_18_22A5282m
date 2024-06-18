@class NSString, UIKeyboardDockItem, UIKeyboardDockView, UIButton;

@interface UISystemKeyboardDockController : UIViewController <UIKeyboardDockViewDelegate> {
    BOOL _dictationHasUsedServerManualEndpointing;
    BOOL _dictationUsingServerManualEndpointing;
    BOOL _isSuppressingDockItemTouch;
    UIKeyboardDockItem *_globeDockItem;
    UIKeyboardDockItem *_dictationDockItem;
    UIKeyboardDockItem *_dictationRunningDockItem;
    UIKeyboardDockItem *_keyboardDockItem;
    UIButton *_stopDictationButton;
}

@property (retain, nonatomic) UIKeyboardDockView *dockView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadView;
- (void)_dictationDidBeginNotification:(id)a0;
- (void)dictationItemButtonWasPressed:(id)a0 withEvent:(id)a1 isRunningButton:(BOOL)a2;
- (void)viewDidLoad;
- (void)setKeyboardDockItem;
- (void)traitCollectionDidChange:(id)a0;
- (void)keyboardItemButtonWasTapped:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)dealloc;
- (void)globeItemButtonWasPressed:(id)a0 withEvent:(id)a1;
- (void)keyboardDockView:(id)a0 didPressDockItem:(id)a1 withEvent:(id)a2;
- (void)updateDockItemsVisibility;

@end
