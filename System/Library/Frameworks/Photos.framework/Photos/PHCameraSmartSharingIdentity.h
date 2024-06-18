@class NSString, NSArray;

@interface PHCameraSmartSharingIdentity : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *phoneNumber;
@property (readonly) NSString *emailAddress;
@property (readonly) NSArray *contactIdentifiers;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithPhoneNumber:(id)a0 emailAddress:(id)a1 contactIdentifiers:(id)a2;

@end
