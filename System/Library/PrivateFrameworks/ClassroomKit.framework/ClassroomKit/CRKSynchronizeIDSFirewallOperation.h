@class NSSet, CATOperation;
@protocol CRKIDSLocalFirewallStorage, CRKIDSPrimitives;

@interface CRKSynchronizeIDSFirewallOperation : CATOperation

@property (readonly, nonatomic) id<CRKIDSLocalFirewallStorage> localStorage;
@property (readonly, nonatomic) id<CRKIDSPrimitives> IDSPrimitives;
@property (readonly, copy, nonatomic) NSSet *trustedRosterAppleIDs;
@property (copy, nonatomic) NSSet *appleIDsToAdd;
@property (copy, nonatomic) NSSet *appleIDsToRemove;
@property (retain, nonatomic) CATOperation *fetchAllowedAppleIDsOperation;
@property (retain, nonatomic) CATOperation *addAllowedAppleIDsOperation;
@property (retain, nonatomic) CATOperation *removeAllowedAppleIDsOperation;

- (void)main;
- (BOOL)isAsynchronous;
- (void)cancel;
- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (void)run;
- (id)operationToFetchAllowedAppleIDs;
- (void)addAllowedAppleIDs;
- (void)computeChanges;
- (void)fetchAllowedAppleIDs;
- (id)initWithIDSPrimitives:(id)a0 localStorage:(id)a1 trustedRosterAppleIDs:(id)a2;
- (id)operationToAddAllowedAppleIDs:(id)a0;
- (void)operationToAddAllowedAppleIDsDidFinish:(id)a0;
- (void)operationToFetchAppleIDsDidFinish:(id)a0;
- (id)operationToRemoveAllowedAppleIDs:(id)a0;
- (void)operationToRemoveAllowedAppleIDsDidFinish:(id)a0;
- (void)removeAllowedAppleIDs;

@end
