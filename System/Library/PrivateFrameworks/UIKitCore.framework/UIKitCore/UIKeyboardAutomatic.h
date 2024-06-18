@class _UIStringAndPositionPair;
@protocol UITextCursorAssertion;

@interface UIKeyboardAutomatic : UIKeyboard

@property (retain, nonatomic) id<UITextCursorAssertion> blinkAssertion;
@property (retain, nonatomic) _UIStringAndPositionPair *lastMatchedSupplementalCandidate;
@property (retain, nonatomic) _UIStringAndPositionPair *pendingSupplementalCandidateToInsert;
@property (nonatomic) unsigned long long lastChooseSupplementalItemToInsertCallbackIdentifier;
@property (nonatomic) BOOL showsCandidateBar;
@property (nonatomic) BOOL receivedCandidatesInCurrentInputMode;
@property (nonatomic) BOOL showsCandidateInline;

+ (id)activeInstance;
+ (id)sharedInstance;

- (void)willResume:(id)a0;
- (void)didSuspend:(id)a0;
- (void)implBoundsHeightChangeDone:(double)a0 suppressNotification:(BOOL)a1;
- (void)minimize;
- (void)maximize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)activate;
- (void).cxx_destruct;
- (BOOL)isAutomatic;
- (struct UIPeripheralAnimationGeometry { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; })geometryForHeightDelta:(double)a0;
- (void)dealloc;
- (BOOL)_isAutomaticKeyboard;
- (BOOL)isActive;
- (void)prepareForImplBoundsHeightChange:(double)a0 suppressNotification:(BOOL)a1;

@end
