@class NSString, PKPaletteFloatingKeyboardController, UIImage, PKTextInputLanguageSelectionToken;
@protocol PKTextInputKeyboardAssistantItemDelegate;

@interface PKTextInputKeyboardAssistantItem : UIBarButtonItem <PKPaletteFloatingKeyboardControllerDelegate> {
    long long _floatingKeyboardType;
    UIImage *_indicatorImage;
    PKTextInputLanguageSelectionToken *_observerToken;
}

@property (retain, nonatomic) PKPaletteFloatingKeyboardController *floatingKeyboardController;
@property (weak, nonatomic) id<PKTextInputKeyboardAssistantItemDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_currentInteraction;
- (void)_updateImageAndNotify;
- (void)didAction:(id)a0;
- (void)didDisplayAssistantItem;
- (void)floatingKeyboardController:(id)a0 didChangeKeyboardType:(long long)a1;
- (void)floatingKeyboardControllerWillHide:(id)a0;
- (void)floatingKeyboardControllerWillShow:(id)a0;
- (id)responderForFloatingKeyboardController:(id)a0;

@end
