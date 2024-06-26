@class NSUUID;

@interface AACustodianInvitationResponseContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *custodianID;
@property (nonatomic, getter=isAccepted) BOOL accepted;
@property (nonatomic, getter=isAutoAction) BOOL autoAction;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCustodianID:(id)a0 didAccept:(BOOL)a1;

@end
