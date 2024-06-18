@class NSArray, NSData;

@interface NSPConfigurationSignatureInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *certificates;
@property (retain, nonatomic) NSData *signature;
@property (nonatomic) unsigned long long signatureAlgorithm;

+ (void)removeFromPreferences;

- (id)initWithCoder:(id)a0;
- (BOOL)saveToPreferences;
- (id)initFromPreferences;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
