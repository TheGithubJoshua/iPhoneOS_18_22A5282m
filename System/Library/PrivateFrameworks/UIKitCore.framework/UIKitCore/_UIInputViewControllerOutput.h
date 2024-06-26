@class NSArray, NSString;

@interface _UIInputViewControllerOutput : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *keyboardOutputs;
@property (nonatomic) BOOL shouldDismiss;
@property (nonatomic) BOOL proceedShouldReturn;
@property (nonatomic) BOOL shouldAdvanceInputMode;
@property (copy, nonatomic) NSString *primaryLanguage;
@property (nonatomic) BOOL hasDictation;
@property (nonatomic) BOOL setMarkedText;
@property (copy, nonatomic) NSString *markedText;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } selectedRange;
@property (nonatomic) BOOL unmarkText;
@property (nonatomic) long long inputModeListTouchPhase;
@property (nonatomic) double inputModeListTouchBegan;
@property (nonatomic) struct CGPoint { double x; double y; } inputModeListFromLocation;
@property (nonatomic) struct CGPoint { double x; double y; } inputModeListUpdatePoint;
@property (nonatomic) long long source;
@property (nonatomic) BOOL requiresInputManagerSync;
@property (nonatomic) BOOL shouldAdvanceResponder;
@property (nonatomic) BOOL shouldPostReturnKeyNotification;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)deleteBackward;
- (void)insertText:(id)a0;
- (id)_currentKeyboardOutput;
- (void)_pushNewKeyboardOutput;
- (void)adjustTextPositionByCharacterOffset:(long long)a0;
- (void)setInputModeList:(long long)a0 touchBegan:(double)a1 fromLocation:(struct CGPoint { double x0; double x1; })a2 updatePoint:(struct CGPoint { double x0; double x1; })a3;

@end
