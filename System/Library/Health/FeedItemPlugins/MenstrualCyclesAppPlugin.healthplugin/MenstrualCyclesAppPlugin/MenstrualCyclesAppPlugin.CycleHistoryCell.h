@class UIColor;

@interface MenstrualCyclesAppPlugin.CycleHistoryCell : UICollectionViewCell {
    void /* unknown type, empty encoding */ item;
    void /* unknown type, empty encoding */ singleCycleView;
}

@property (nonatomic) BOOL highlighted;
@property (nonatomic, retain) UIColor *backgroundColor;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (BOOL)isHighlighted;

@end
