@class NSString, NSArray, NSURL, NSDictionary;

@interface SKCloudServiceSetupReloadContext : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary *_userInfo;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *serializedUserInfo;
@property (retain, nonatomic) NSURL *cloudServiceSetupURL;
@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSArray *queryItems;
@property (copy, nonatomic) NSString *sourceApplicationBundleIdentifier;
@property (retain, nonatomic) NSURL *referrerURL;
@property (copy, nonatomic) NSDictionary *userInfo;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
