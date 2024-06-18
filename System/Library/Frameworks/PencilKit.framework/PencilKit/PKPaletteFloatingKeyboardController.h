@class UIKeyboardInputMode, UIMenu;
@protocol PKPaletteFloatingKeyboardControllerDelegate;

@interface PKPaletteFloatingKeyboardController : NSObject {
    UIMenu *_cachedKeyboardMenu;
    BOOL _presentingKeyboard;
    BOOL _updatingCurrentInputMode;
    BOOL _processingReloadInputViews;
    id<PKPaletteFloatingKeyboardControllerDelegate> _delegate;
    UIKeyboardInputMode *_emojiInputMode;
    double _latestUserInitiatedInputModeChangeTimestamp;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didChangeInputMode;

@end
