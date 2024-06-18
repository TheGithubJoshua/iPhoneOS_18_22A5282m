@class NSDate;

@interface NSPDeviceIdentityCertificate : NSObject <NSSecureCoding, NSCopying> {
    BOOL _ignoreExistingKeychainIdentity;
    long long _diskVersion;
    NSDate *_deviceIdentityFetchDate;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (BOOL)deviceSupportsDeviceIdentityWithSerialNumber;
+ (void)removeFromPreferences;
+ (id)sharedDeviceIdentity;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)fetchDeviceIdentityCertificate:(id /* block */)a0;
- (void)deviceIdentityAuthenticationFailed;
- (void)resetDeviceIdentityInfo;

@end
