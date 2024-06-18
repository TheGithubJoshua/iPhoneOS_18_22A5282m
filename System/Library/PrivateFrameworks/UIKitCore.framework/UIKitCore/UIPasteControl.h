@class UIPasteControlConfiguration, _UISecureController;
@protocol UIPasteConfigurationSupporting;

@interface UIPasteControl : UIControl <_UISecureControl> {
    _UISecureController *_secureController;
    BOOL _pasteboardObserved;
    BOOL _internallyEnabled;
}

@property (readonly, nonatomic) UIPasteControlConfiguration *configuration;
@property (weak, nonatomic) id<UIPasteConfigurationSupporting> target;

- (id)initWithCoder:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)_encodableSubviews;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (id)initWithConfiguration:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0;
- (void)layoutSubviews;
- (void)_updateEnabledWithNotification:(id)a0;
- (id)synchronousSecureControlService;
- (unsigned int)_secureName;
- (BOOL)isInternallyEnabled;
- (BOOL)shouldTrack;

@end
