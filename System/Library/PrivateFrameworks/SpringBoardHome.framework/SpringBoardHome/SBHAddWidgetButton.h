@class NSString, MTStylingProvidingSolidColorView, UIView, UIPointerInteraction;

@interface SBHAddWidgetButton : UIButton <UIPointerInteractionDelegate> {
    UIPointerInteraction *_pointerInteraction;
}

@property (retain, nonatomic) MTStylingProvidingSolidColorView *backgroundView;
@property (retain, nonatomic) UIView *highlightView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setHighlighted:(BOOL)a0;
- (void)_contentSizeCategoryDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)_titleLabelFont;
- (void).cxx_destruct;
- (void)mt_applyVisualStyling:(id)a0;
- (void)dealloc;
- (void)layoutSubviews;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (double)_buttonCornerRadius;
- (void)mt_removeAllVisualStyling;
- (id)_addSymbolImage;

@end
