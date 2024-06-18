@class NSArray;
@protocol UISystemDefaultTextInputAssistantItemDelegate;

@interface UISystemDefaultTextInputAssistantItem : UITextInputAssistantItem

@property (nonatomic, getter=_isSystemItem) BOOL systemItem;
@property (retain, nonatomic) NSArray *defaultSystemLeadingBarButtonGroups;
@property (retain, nonatomic) NSArray *defaultSystemTrailingBarButtonGroups;
@property (weak, nonatomic) id<UISystemDefaultTextInputAssistantItemDelegate> delegate;
@property (readonly, nonatomic) BOOL isKeyboardCameraItem;

- (id)init;
- (void)assistantExpand;
- (void)assistantBold;
- (void)setLeadingBarButtonGroups:(id)a0;
- (void)assistantRedo;
- (void)assistantWriteboard;
- (void)assistantEmoji;
- (void)assistantCut;
- (void)assistantCopy;
- (void)assistantUnderline;
- (void)assistantDismiss;
- (void)assistantItalic;
- (void).cxx_destruct;
- (SEL)_responderSelectorForSystemButtonStyle:(long long)a0;
- (void)assistantReturnKey;
- (void)performSystemButtonActionForStyle:(long long)a0;
- (void)_updateIsSystemItem;
- (void)setTrailingBarButtonGroups:(id)a0;
- (void)assistantDictation;
- (void)assistantShowKeyboard;
- (void)assistantPaste:(id)a0 forEvent:(id)a1;
- (BOOL)canPerformSystemButtonActionForStyle:(long long)a0;
- (void)assistantUndo;
- (void)assistantDictationMicOn;
- (void)analyticsDispatchWithActionStyle:(long long)a0;

@end
