@class PKAppletSubcredentialSharingInvitation, PKPaymentWebService;

@interface PKSubcredentialProvisioningAcceptRemoteDeviceInvitationConfiguration : PKSubcredentialProvisioningConfiguration

@property (readonly, nonatomic) PKAppletSubcredentialSharingInvitation *invitation;
@property (readonly, nonatomic) BOOL canRequestInvitation;
@property (readonly, nonatomic) BOOL declineRelatedInvitations;
@property (readonly, nonatomic) PKPaymentWebService *remoteDeviceWebService;
@property (readonly, nonatomic) PKPaymentWebService *localDeviceWebService;

- (void).cxx_destruct;
- (id)description;
- (id)transitionTable;
- (id)initWithInvitation:(id)a0 canRequestInvitation:(BOOL)a1 declineRelatedInvitations:(BOOL)a2 localDeviceWebService:(id)a3 remoteDeviceWebService:(id)a4;
- (id)initWithInvitation:(id)a0 canRequestInvitation:(BOOL)a1 declineRelatedInvitations:(BOOL)a2 localDeviceWebService:(id)a3 remoteDeviceWebService:(id)a4 configurationType:(long long)a5;
- (long long)startingState;

@end
