@interface PaperKit.AttributeStylingButton : PaperKit.AttributeStylingControl

@property (nonatomic) BOOL selected;

- (id)initWithCoder:(id)a0;
- (BOOL)isSelected;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;

@end
