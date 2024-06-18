@class UIKeyboardDicationBackground, NSString, SUICFlamesView, UIButton;
@protocol UIDictationViewDisplayDelegate;

@interface UIDictationView : UIView <SUICFlamesViewDelegate> {
    UIKeyboardDicationBackground *_background;
    UIButton *_endpointButton;
    UIButton *_endpointButtonLandscape;
    int _state;
    BOOL _keyboardInTransition;
    BOOL _automaticAppearanceWasEnabled;
    SUICFlamesView *_flamesView;
}

@property (nonatomic) BOOL showLanguageLabel;
@property (nonatomic) BOOL switchingLanguage;
@property (nonatomic) id<UIDictationViewDisplayDelegate> displayDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activeInstance;
+ (struct CGSize { double x0; double x1; })layoutSize;
+ (struct CGSize { double x0; double x1; })viewSize;
+ (id)sharedInstance;
+ (Class)dictationViewClass;

- (void)show;
- (void)applicationWillResignActive;
- (BOOL)visible;
- (void)setState:(int)a0;
- (BOOL)isShowing;
- (struct CGPoint { double x0; double x1; })contentOffset;
- (void)globeButtonPressed:(id)a0 withEvent:(id)a1 location:(struct CGPoint { double x0; double x1; })a2;
- (BOOL)drawsOwnBackground;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)returnToKeyboard;
- (void)dealloc;
- (void)finishReturnToKeyboard;
- (struct CGPoint { double x0; double x1; })positionForShow;
- (void)applicationEnteredBackground;
- (float)audioLevelForFlamesView:(id)a0;
- (struct CGPoint { double x0; double x1; })backgroundOffset;
- (struct CGSize { double x0; double x1; })currentScreenSize;
- (id)endpointButton;
- (void)endpointButtonPressed;
- (void)highlightEndpointButton;
- (void)keyboardDidShow:(id)a0;
- (void)prepareForReturnToKeyboard;
- (void)removeBackgroundView;

@end
