@class NSString;

@interface AVTArchiverBasedDomain : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *domainIdentifier;
@property (readonly, copy, nonatomic) NSString *primaryAvatarIdentifier;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)domainBySettingPrimaryAvatarIdentifier:(id)a0;
- (id)initWithDomainIdentifier:(id)a0 primaryAvatarIdentifier:(id)a1;

@end
