@class EDCategorySubsystem, EDPersistence;

@interface EDDaemonInterfaceFactory : NSObject

@property (retain, nonatomic) EDCategorySubsystem *categorySubsystem;
@property (readonly, nonatomic) EDPersistence *persistence;

- (id)sharedDonationController;
- (id)newSenderRepository;
- (id)newDiagnosticInfoGathererWithServerRemoteClientsProvider:(id)a0;
- (id)newClientResumerWithClientState:(id)a0;
- (id)newMessageRepositoryWithResumable:(id)a0;
- (id)newMailboxRepository;
- (id)initWithPersistence:(id)a0 categorySubsystem:(id)a1;
- (void).cxx_destruct;
- (id)newSearchableIndex;
- (void)test_tearDown;
- (id)newAccountRepository;
- (id)sharedInteractionLogger;
- (id)newOutgoingMessageRepository;
- (id)newVIPManagerInterface;
- (id)newFetchController;
- (id)newActivityRegistry;

@end
