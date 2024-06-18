@class UITouch, UIKeyboardInputMode, NSMutableDictionary;

@interface UIDictationInputMode : UISpecializedInputMode {
    NSMutableDictionary *_cachedIcons;
}

@property (retain, nonatomic) UITouch *triggeringTouch;
@property (retain, nonatomic) UIKeyboardInputMode *currentInputModeForDictation;
@property (nonatomic) BOOL usingTypeAndTalk;

+ (BOOL)currentInputModeSupportsDictation;

- (Class)viewControllerClass;
- (BOOL)showSWLayoutWithHWKeyboard;
- (BOOL)includeBarHeight;
- (void).cxx_destruct;
- (id)indicatorIconForDictationLanguage:(id)a0 scaleFactor:(double)a1;

@end
