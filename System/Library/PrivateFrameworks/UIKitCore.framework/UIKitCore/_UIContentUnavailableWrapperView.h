@class NSString, UIView, _UIContentUnavailableWrapperScrollView, _UIContentUnavailableWrapperSeparatorView;
@protocol _UIContentViewInternal, UIContentConfiguration;

@interface _UIContentUnavailableWrapperView : UIView <UIScrollViewDelegate> {
    id<_UIContentViewInternal> _viewForConfiguration;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _keyboardFrame;
    BOOL _trackingKeyboardFrame;
    _UIContentUnavailableWrapperScrollView *_scrollView;
    _UIContentUnavailableWrapperSeparatorView *_topSeparator;
    _UIContentUnavailableWrapperSeparatorView *_bottomSeparator;
}

@property (readonly, nonatomic) UIView *contentView;
@property (copy, nonatomic) id<UIContentConfiguration> configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_handleKeyboardNotification:(id)a0 aboutToHide:(BOOL)a1;
- (unsigned long long)_edgesPropagatingSafeAreaInsetsToSubviews;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_effectiveDirectionalLayoutMargins;
- (void)didMoveToSuperview;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_effectiveKeyboardFrame;
- (id)_encodableSubviews;
- (void)_commonInit;
- (void)_keyboardAboutToHide:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (void)_keyboardAboutToShow:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)_keyboardAboutToChangeFrame:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)_updateSeparatorVisibility;
- (void)_layoutMarginsDidChangeFromOldMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)layoutSubviews;
- (void)_reparentScrollViewPanGesture;
- (void)setContentView:(id)a0;
- (BOOL)_adjustsLayoutForKeyboard;
- (void)_applyConfiguration:(id)a0;

@end
