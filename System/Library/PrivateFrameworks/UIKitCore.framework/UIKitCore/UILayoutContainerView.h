@class UIView;
@protocol UILayoutContainerViewDelegate;

@interface UILayoutContainerView : UIView <NSCoding> {
    UIView *_shadowView;
    struct { unsigned char delegateRespondsToSemanticContentAttributeChanged : 1; unsigned char delegateRespondsToViewWillLayoutSubviews : 1; unsigned char delegateRespondsToWillMoveToWindow : 1; unsigned char delegateRespondsToDidMoveToWindow : 1; } _layoutContainerViewFlags;
}

@property (weak, nonatomic) id<UILayoutContainerViewDelegate> delegate;
@property (nonatomic) BOOL usesInnerShadow;
@property (nonatomic) BOOL usesRoundedCorners;

- (id)initWithCoder:(id)a0;
- (void)setSemanticContentAttribute:(long long)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_tearDownShadowViews;
- (id)_systemDefaultFocusGroupIdentifier;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)_setFlagsFromDelegate:(id)a0;
- (void)addSubview:(id)a0;
- (void)_updateShadowViews;
- (void)dealloc;
- (void)layoutSubviews;
- (void)willMoveToWindow:(id)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_installShadowViews;

@end
