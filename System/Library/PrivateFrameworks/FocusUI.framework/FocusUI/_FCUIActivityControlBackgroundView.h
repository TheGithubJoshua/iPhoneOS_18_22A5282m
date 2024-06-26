@class NSString, UIView;

@interface _FCUIActivityControlBackgroundView : UIView <FCUIHighlighting> {
    long long _controlStyle;
    UIView *_highlightView;
}

@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setCornerRadius:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_configureHighlightViewIfNecessary;
- (void).cxx_destruct;
- (void)_setContinuousCornerRadius:(double)a0;
- (id)initWithControlStyle:(long long)a0;

@end
