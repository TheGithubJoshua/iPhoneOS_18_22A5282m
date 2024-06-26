@class SKStatusPayload, NSString, SKInvitationPayload, NSDate;

@interface SKPublishedStatus : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) SKStatusPayload *statusPayload;
@property (readonly, nonatomic) NSString *statusUniqueIdentifier;
@property (readonly, nonatomic) NSDate *datePublished;
@property (readonly, nonatomic) NSDate *dateCreated;
@property (readonly, nonatomic) NSDate *dateReceived;
@property (readonly, nonatomic) SKInvitationPayload *invitationPayload;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithStatusPayload:(id)a0 statusUniqueIdentifier:(id)a1 datePublished:(id)a2 dateCreated:(id)a3 dateReceived:(id)a4 invitationPayload:(id)a5;

@end
