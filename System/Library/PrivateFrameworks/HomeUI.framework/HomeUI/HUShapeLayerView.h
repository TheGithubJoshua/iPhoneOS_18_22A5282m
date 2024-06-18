@class UIColor, CAShapeLayer;

@interface HUShapeLayerView : UIView

@property (readonly, nonatomic) CAShapeLayer *layer;
@property (nonatomic) BOOL fillColorMatchesTintColor;
@property (retain, nonatomic) UIColor *fillColor;
@property (copy, nonatomic) id /* block */ pathLayoutBlock;

+ (Class)layerClass;

- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (void)didMoveToSuperview;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)tintColorDidChange;
- (id)initWithPathLayoutBlock:(id /* block */)a0;

@end
