@class UIImage;

@interface TSDiOSToolbar : UIToolbar

@property (retain, nonatomic) UIImage *backgroundImage;
@property (nonatomic) BOOL drawsBackground;
@property (nonatomic) double shadowOpacity;
@property (nonatomic) struct CGSize { double width; double height; } shadowOffset;
@property (nonatomic) double shadowRadius;
@property (nonatomic) double shadowX;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setupShadowPath;
- (void)p_updateLayerFlags;

@end
