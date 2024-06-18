@interface CUIColor : NSObject <NSCopying>

@property (readonly, nonatomic) struct CGColor { } *CGColor;

+ (id)colorWithCGColor:(struct CGColor { } *)a0;
+ (id)colorWithCIColor:(id)a0;

- (id)initWithCGColor:(struct CGColor { } *)a0;
- (id)initWithCIColor:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)colorUsingCGColorSpace:(struct CGColorSpace { } *)a0;

@end
