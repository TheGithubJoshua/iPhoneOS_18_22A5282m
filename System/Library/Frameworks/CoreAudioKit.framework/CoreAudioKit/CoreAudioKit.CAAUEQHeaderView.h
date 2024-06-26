@interface CoreAudioKit.CAAUEQHeaderView : UIView <UITextFieldDelegate> {
    void /* unknown type, empty encoding */ appleLogo;
    void /* unknown type, empty encoding */ auLabel;
    void /* unknown type, empty encoding */ paramStack;
    void /* unknown type, empty encoding */ border;
    void /* unknown type, empty encoding */ viewSetup;
    void /* unknown type, empty encoding */ auName;
    void /* unknown type, empty encoding */ auAbbreviatedName;
    void /* unknown type, empty encoding */ compressedHorizontalLayout;
    void /* unknown type, empty encoding */ viewConstraints;
    void /* unknown type, empty encoding */ params;
}

@property (class, nonatomic, readonly) BOOL requiresConstraintBasedLayout;

- (id)initWithCoder:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)didMoveToSuperview;
- (void)removeFromSuperview;
- (BOOL)textFieldShouldReturn:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)tintColorDidChange;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)textFieldDidEndEditing:(id)a0 reason:(long long)a1;
- (void)addParameterWithId:(unsigned int)a0 name:(id)a1 shortName:(id)a2 symbolName:(id)a3 value:(float)a4 min:(float)a5 max:(float)a6 logBase:(float)a7 formatter:(id)a8 unit:(id)a9 additionalPad:(double)a10;
- (void)addParameterWithId:(unsigned int)a0 name:(id)a1 shortName:(id)a2 value:(float)a3 min:(float)a4 max:(float)a5 logBase:(float)a6 formatter:(id)a7 unit:(id)a8 additionalPad:(double)a9;
- (void)adjustViewIfHorizontallyCompressed:(struct CGSize { double x0; double x1; })a0;
- (void)beginGestureWithId:(unsigned int)a0;
- (void)beginTouchWithNotification:(id)a0;
- (void)endEditingWithId:(unsigned int)a0;
- (void)endGestureWithId:(unsigned int)a0;
- (void)endTouchWithNotification:(id)a0;
- (void)setColorForParameterWithId:(unsigned int)a0 color:(id)a1;
- (void)setConstraintsWith:(id)a0;
- (void)setParameterWithId:(unsigned int)a0 value:(float)a1;
- (void)setTitle:(id)a0 abbreviated:(id)a1;
- (void)startEditingWithId:(unsigned int)a0;
- (void)textFieldEditingDidChange:(id)a0;

@end
