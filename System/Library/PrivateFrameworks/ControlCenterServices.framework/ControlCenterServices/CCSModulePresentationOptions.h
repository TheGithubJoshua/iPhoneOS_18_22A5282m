@interface CCSModulePresentationOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL animateDismissal;
@property (readonly, nonatomic) BOOL animatePresentation;
@property (readonly, nonatomic) BOOL blurBackground;

+ (id)defaultOptions;
+ (id)defaultExpandedOptions;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBlurBackground:(BOOL)a0 animatePresentation:(BOOL)a1 animateDismissal:(BOOL)a2;

@end
