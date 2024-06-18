@interface PaperKit.ColorSwatch : UIControl {
    void /* unknown type, empty encoding */ selectedColor;
}

@property (nonatomic) BOOL selected;

- (id)initWithCoder:(id)a0;
- (id)init;
- (BOOL)isSelected;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
