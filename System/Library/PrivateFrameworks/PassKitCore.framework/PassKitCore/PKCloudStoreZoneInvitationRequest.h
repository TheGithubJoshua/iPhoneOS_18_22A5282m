@class PKSharingDestination, PKCloudStoreZoneInvitation, NSError;

@interface PKCloudStoreZoneInvitationRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKCloudStoreZoneInvitation *invitation;
@property (retain, nonatomic) PKSharingDestination *destination;
@property (copy, nonatomic) NSError *invitationError;

+ (id)cloudStoreZoneInvitationRequestWithProtobuf:(id)a0;
+ (id)invitationErrorWithProtobuf:(id)a0;

- (id)initWithCoder:(id)a0;
- (id)protobuf;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;

@end
