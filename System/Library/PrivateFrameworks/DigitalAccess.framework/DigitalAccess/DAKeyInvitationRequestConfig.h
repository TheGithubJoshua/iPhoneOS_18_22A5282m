@class NSUUID, NSString;

@interface DAKeyInvitationRequestConfig : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *sharingSessionIdentifier;
@property (readonly, nonatomic) NSString *ownerIdsIdentifier;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSharingSessionIdentifier:(id)a0 ownerIdsIdentifier:(id)a1;

@end
