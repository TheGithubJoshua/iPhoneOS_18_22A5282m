@interface UITextSelectionRectCustomHandleInfo : NSObject

@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } bottomLeft;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } topLeft;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } bottomRight;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } topRight;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;

@end
