@class NSColor;

@interface NSShadow : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long _shadowFlags;
    struct CGSize { double width; double height; } _shadowOffset;
    double _shadowBlurRadius;
    NSColor *_shadowColor;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct CGSize { double x0; double x1; } shadowOffset;
@property (nonatomic) double shadowBlurRadius;
@property (retain, nonatomic) id shadowColor;

+ (id)shadow;
+ (void)initialize;
+ (id)defaultShadowColor;

- (id)initWithCoder:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithShadow:(id)a0;
- (void)dealloc;
- (void)applyToGraphicsContext:(id)a0;

@end
