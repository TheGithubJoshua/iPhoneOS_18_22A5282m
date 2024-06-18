@class NSNumber, NSString;

@interface NACProxyVolumeControlTarget : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *originIdentifier;
@property (retain, nonatomic) NSString *category;
@property (readonly, nonatomic, getter=isPairedDevice) BOOL pairedDevice;

+ (BOOL)_isValidOriginIdentifier:(id)a0;
+ (id)volumeControlTargetWithCategory:(id)a0;
+ (id)volumeControlTargetWithOriginIdentifier:(id)a0;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithOriginIdentifier:(id)a0 category:(id)a1;

@end
