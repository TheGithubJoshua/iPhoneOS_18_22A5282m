@class NSArray, NSString;

@interface ICQCloudStorageApps : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *apps;
@property (copy, nonatomic) NSString *genericErrorMessage;

- (id)initWithCoder:(id)a0;
- (id)initFromDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
