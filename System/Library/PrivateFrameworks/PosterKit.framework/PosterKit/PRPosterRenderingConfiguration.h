@class NSString;

@interface PRPosterRenderingConfiguration : NSObject <BSDescriptionStreamable, BSXPCSecureCoding, NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isDepthEffectDisabled) BOOL depthEffectDisabled;
@property (readonly, nonatomic, getter=isParallaxEnabled) BOOL parallaxEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (Class)classForArchiver;
- (id)initWithRenderingConfiguration:(id)a0;
- (id)initWithDepthEffectDisabled:(BOOL)a0 parallaxEnabled:(BOOL)a1;

@end
