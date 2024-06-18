@interface TRITaskQueuingOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long duplicateTaskResolution;

+ (void)load;
+ (id)optionsWithDuplicateTaskResolution:(unsigned long long)a0;
+ (id)defaultOptionsWithIgnoreDuplicates;

- (BOOL)isEqualToOptions:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void)_swizzledEncodeWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDuplicateTaskResolution:(unsigned long long)a0;
- (id)copyWithReplacementDuplicateTaskResolution:(unsigned long long)a0;

@end
