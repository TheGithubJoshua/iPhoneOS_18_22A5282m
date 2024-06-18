@class NSData, NSURL, NSString;

@interface CKDeviceToDeviceShareInvitationToken : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *sharingInvitationData;
@property (readonly, copy, nonatomic) NSURL *shareURL;
@property (readonly, copy, nonatomic) NSString *participantID;

- (id)initWithCoder:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (id)CKPropertiesDescription;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSharingInvitationData:(id)a0 shareURL:(id)a1;
- (id)initWithSharingInvitationData:(id)a0 shareURL:(id)a1 participantID:(id)a2;

@end
