@class NSString, UIKeyboard, UIInputView;
@protocol UITextDocumentProxy;

@interface UIInputViewController : UIViewController <_UITextDocumentInterfaceDelegate, UITextInputDelegate> {
    BOOL _commitInputModeOnTouchEnd;
    BOOL _inputModeListIsShown;
    BOOL _viewConformsToRemotePlaceholder;
    double _touchBegan;
}

@property (readonly, nonatomic) UIKeyboard *_keyboard;
@property (readonly, nonatomic) BOOL _isPlaceholder;
@property (nonatomic) BOOL _alignsToContentViewController;
@property (nonatomic, setter=_setAutosizeToCurrentKeyboard:) BOOL _autosizeToCurrentKeyboard;
@property (readonly, nonatomic) UIKeyboard *_keyboard;
@property (readonly, nonatomic) BOOL _isPlaceholder;
@property (nonatomic) BOOL _alignsToContentViewController;
@property (nonatomic, setter=_setAutosizeToCurrentKeyboard:) BOOL _autosizeToCurrentKeyboard;
@property (retain, nonatomic) UIInputView *inputView;
@property (readonly, nonatomic) id<UITextDocumentProxy> textDocumentProxy;
@property (copy, nonatomic) NSString *primaryLanguage;
@property (nonatomic) BOOL hasDictationKey;
@property (readonly, nonatomic) BOOL hasFullAccess;
@property (readonly, nonatomic) BOOL needsInputModeSwitchKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_requiresProxyInterface;
+ (void)presentDialogForAddingKeyboard;

- (id)initWithCoder:(id)a0;
- (id)_extensionContext;
- (void)_setExtensionContextUUID:(id)a0;
- (void)loadView;
- (void)_setupInputController;
- (void)_updateConformanceCache;
- (void)_didResetDocumentState;
- (void)dismissKeyboard;
- (BOOL)_usesCustomBackground;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_willResetDocumentState;
- (struct CGSize { double x0; double x1; })_systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (void)didReceiveMemoryWarning;
- (BOOL)_shouldForwardSystemLayoutFittingSizeChanges;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)advanceToNextInputMode;
- (void)proceedShouldReturnIfPossibleForASP;
- (void)selectionWillChange:(id)a0;
- (void).cxx_destruct;
- (id)_proxyInterface;
- (id)_compatibilityController;
- (void)handleInputModeListFromView:(id)a0 withEvent:(id)a1;
- (void)returnToPreviousInputMode;
- (void)_setTextDocumentProxy:(id)a0;
- (void)setView:(id)a0;
- (BOOL)_canResignIfContainsFirstResponder;
- (void)dealloc;
- (void)set_autosizeToCurrentKeyboard:(BOOL)a0;
- (id)_textDocumentInterface;
- (void)selectionDidChange:(id)a0;
- (void)requestSupplementaryLexiconWithCompletion:(id /* block */)a0;
- (void)textWillChange:(id)a0;
- (BOOL)_canBecomeFirstResponder;
- (void)textDidChange:(id)a0;

@end
