@class NSString;

@interface SGSocialProfile : SGLabeledObject

@property (readonly, nonatomic) NSString *username;
@property (readonly, nonatomic) NSString *userIdentifier;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *service;
@property (readonly, nonatomic) NSString *teamIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithUsername:(id)a0 userIdentifier:(id)a1 bundleIdentifier:(id)a2 displayName:(id)a3 service:(id)a4 teamIdentifier:(id)a5 label:(id)a6 extractionInfo:(id)a7 recordId:(id)a8;
- (BOOL)isEqualToSGSocialProfile:(id)a0;

@end
