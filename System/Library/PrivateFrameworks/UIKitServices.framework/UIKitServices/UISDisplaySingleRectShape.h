@interface UISDisplaySingleRectShape : UISDisplayShape

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;

- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned long long)hash;
- (void)encodeWithXPCDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithXPCDictionary:(id)a0;

@end
