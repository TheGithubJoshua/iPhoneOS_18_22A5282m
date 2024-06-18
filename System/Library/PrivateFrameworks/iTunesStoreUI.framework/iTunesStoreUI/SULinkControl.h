@class UILabel;

@interface SULinkControl : UIControl {
    UILabel *_label;
    unsigned char _sizeIsDirty : 1;
    long long _style;
}

@property (nonatomic) BOOL shouldDrawUnderline;

- (id)_label;
- (void)setHighlighted:(BOOL)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setStyle:(long long)a0;
- (void)_updateLabel;
- (void)sizeToFit;
- (void)setText:(id)a0;
- (void)dealloc;
- (void)layoutSubviews;

@end
