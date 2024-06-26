@class NSString, NSArray, NSMutableSet, NSObject, IDSService;
@protocol OS_os_transaction, MSPSharedTripGroupSessionDelegate;

@interface MSPSharedTripGroupSession : NSObject {
    BOOL _joined;
    NSString *_joinedFromHandle;
    NSString *_joinedFromAccountIdentifier;
    BOOL _initiator;
    NSString *_groupID;
    unsigned long long _nbClients;
    NSMutableSet *_liveModeParticipantIdentifiers;
    IDSService *_sharingIDSService;
    NSMutableSet *_identifiers;
    NSObject<OS_os_transaction> *_transaction;
}

@property (readonly, nonatomic) BOOL inLiveMode;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *initiatorIdentifier;
@property (copy, nonatomic) NSString *initiatorDisplayName;
@property (readonly, nonatomic) NSArray *accountIdentifiers;
@property (weak, nonatomic) id<MSPSharedTripGroupSessionDelegate> delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (void)addSharingWith:(id)a0;
- (BOOL)_leaveLiveMode:(id *)a0;
- (id)_currentRoutePath;
- (BOOL)_isValidParticipant:(id)a0;
- (BOOL)_joinLiveModeFromHandle:(id)a0 fromAccountID:(id)a1 error:(id *)a2;
- (BOOL)_sendChunkMessage:(id)a0 to:(id)a1 packet:(id)a2 options:(id)a3 error:(id *)a4;
- (void)_sharingEnded;
- (void)_sharingEndedWithError:(id)a0;
- (id)initWithService:(id)a0 groupID:(id)a1 initiator:(BOOL)a2 initiatorIdentifier:(id)a3;
- (BOOL)joinLiveModeFromHandle:(id)a0 fromAccountID:(id)a1 error:(id *)a2;
- (BOOL)leaveLiveModeForced:(id *)a0;
- (BOOL)leaveLiveModeIfNeeded:(id *)a0;
- (void)participantDidJoin:(id)a0;
- (void)participantDidLeave:(id)a0;
- (BOOL)sendChunkedMessage:(id)a0 to:(id)a1 error:(id *)a2;
- (BOOL)sendChunkedMessage:(id)a0 to:(id)a1 options:(id)a2 error:(id *)a3;
- (BOOL)sendCommand:(id)a0 fromHandle:(id)a1 fromAccountID:(id)a2 error:(id *)a3;
- (BOOL)sessionIsAliveAfterRemovingSharingIdentifiers:(id)a0;

@end
