@interface NIConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL supportsCameraAssistance;
@property unsigned long long suspensionPolicy;
@property unsigned long long enabledGestures;

+ (id)new;

- (id)initWithCoder:(id)a0;
- (BOOL)_internalIsCameraAssistanceEnabled;
- (id)init;
- (id)descriptionInternal;
- (BOOL)hasEqualEnabledGestures:(id)a0;
- (id)initInternal;
- (id)initWithConfiguration:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
