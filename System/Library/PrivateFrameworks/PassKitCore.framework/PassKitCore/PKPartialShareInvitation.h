@class NSString, PKPassShare, NSData, PKSecureElementPass, PKSharingMessageDisplayInformation;

@interface PKPartialShareInvitation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKPassShare *share;
@property (readonly, nonatomic) PKSecureElementPass *pass;
@property (readonly, nonatomic) NSData *homeInvite;
@property (readonly, nonatomic) PKSharingMessageDisplayInformation *displayInformation;
@property (retain, nonatomic) NSString *recipientNickname;
@property (retain, nonatomic) NSString *recipientHandle;
@property (readonly, nonatomic) BOOL isHomeShare;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithHomeInvite:(id)a0 displayInformation:(id)a1;
- (id)initWithShare:(id)a0 pass:(id)a1;
- (BOOL)isEqualToPartialShareInvitation:(id)a0;

@end
