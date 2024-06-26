@class NSString, CKUserIdentityLookupInfo, CKDeviceToDeviceShareInvitationToken;

@interface PKCloudStoreZoneShareParticipant : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *participantHandle;
@property (retain, nonatomic) CKUserIdentityLookupInfo *lookupInfo;
@property (retain, nonatomic) CKDeviceToDeviceShareInvitationToken *invitationToken;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithParticipant:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)invitationTokenData;
- (id)lookupInfoData;

@end
