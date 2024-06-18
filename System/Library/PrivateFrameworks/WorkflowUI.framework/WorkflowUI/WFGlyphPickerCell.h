@class WFGlyphView;

@interface WFGlyphPickerCell : UICollectionViewCell

@property (weak, nonatomic) WFGlyphView *glyphView;
@property (nonatomic) unsigned short glyphCharacter;
@property (nonatomic) BOOL outline;

- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;

@end
