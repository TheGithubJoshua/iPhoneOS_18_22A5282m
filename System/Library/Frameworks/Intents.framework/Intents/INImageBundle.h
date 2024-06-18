@class NSString;

@interface INImageBundle : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *bundlePath;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) unsigned long long bundleType;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
