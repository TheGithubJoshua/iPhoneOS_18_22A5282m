@class NSString;

@interface CUIPSDLayoutMetricsChannel : NSObject

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } edgeInsets;
@property (retain, nonatomic) NSString *name;

- (id)initWithEdgeInsets:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setEdgeInsets:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)sanitizeEdgeInsets;

@end
