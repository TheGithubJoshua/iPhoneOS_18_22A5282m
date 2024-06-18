@class NSString;

@interface NTKFaceDescriptor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long faceStyle;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) Class faceClass;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithFaceStyle:(long long)a0 bundleIdentifier:(id)a1;
- (id)initWithFaceStyle:(long long)a0;
- (BOOL)isAvailableForDevice:(id)a0;

@end
