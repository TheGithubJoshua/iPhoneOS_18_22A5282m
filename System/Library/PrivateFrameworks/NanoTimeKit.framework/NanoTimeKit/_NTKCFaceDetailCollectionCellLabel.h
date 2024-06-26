@class NSString, UILabel, CAShapeLayer;

@interface _NTKCFaceDetailCollectionCellLabel : UIView {
    UILabel *_label;
    CAShapeLayer *_background;
}

@property (nonatomic) BOOL usesShortTextWidth;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL active;
@property (readonly, nonatomic) double firstLineBaseline;

- (id)init;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_inactiveTextColor;
- (id)_activeFont;
- (id)_activeTextColor;
- (id)_inactiveFont;

@end
