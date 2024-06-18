@class NSString, NSData, PKPartialShareInvitation;

@interface PKSharingMessageExtensionRelayServerLocalProperties : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKPartialShareInvitation *partialInvite;
@property (nonatomic) BOOL hasCheckedStatus;
@property (retain, nonatomic) NSString *passUniqueIdentifier;
@property (retain, nonatomic) NSData *analyticsSessionToken;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)isEqualToSharingMessageExtensionRelayServerLocalProperties:(id)a0;

@end
