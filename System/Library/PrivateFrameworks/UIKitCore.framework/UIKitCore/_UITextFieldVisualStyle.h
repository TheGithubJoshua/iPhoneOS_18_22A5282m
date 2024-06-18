@protocol _UITextFieldVisualStyleSubject;

@interface _UITextFieldVisualStyle : NSObject

@property (weak, nonatomic) id<_UITextFieldVisualStyleSubject> styleSubject;

+ (id)inferredVisualStyleWithStyleSubject:(id)a0;

- (id)placeholderColor;
- (id)defaultTextColor;
- (void).cxx_destruct;
- (id)parentViewForTextContentView;
- (BOOL)textShouldUseVibrancy;
- (id)defaultFocusedTextColor;
- (void)handleTextVibrancy;
- (id)defaultTextColorForKeyboardAppearance;
- (id)initWithStyleSubject:(id)a0;

@end
