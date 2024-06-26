@class NSString, CODiscoveryManager, COMeshNodeStateTrackerSet, NSOrderedSet, NSArray, COMeshLocalNode, COConstituent, NSObject, NSDictionary, COBallot;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface COMeshController : NSObject <COMeshNodeStateTrackerDelegate, CODiscoveryManagerDelegate, COMeshNodeDelegate>

@property (nonatomic) unsigned long long internalFlags;
@property (copy, nonatomic) id /* block */ recorder;
@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) COConstituent *leader;
@property (copy, nonatomic) NSOrderedSet *addOns;
@property (copy, nonatomic) COBallot *ballot;
@property (nonatomic) unsigned long long generation;
@property (nonatomic) unsigned long long electionPrevious;
@property (nonatomic) unsigned long long electionStart;
@property (nonatomic) unsigned long long electionEnd;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *electionElapsedTimer;
@property (retain, nonatomic) COMeshLocalNode *listener;
@property (readonly, nonatomic) COMeshNodeStateTrackerSet *trackers;
@property (readonly, nonatomic) CODiscoveryManager *discoveryManager;
@property (copy, nonatomic) NSDictionary *commandHandlers;
@property (copy, nonatomic) NSDictionary *notificationHandlers;
@property (copy, nonatomic) NSDictionary *requestHandlers;
@property (copy, nonatomic) NSArray *queuedCommands;
@property (copy, nonatomic) NSArray *sentCommands;
@property (nonatomic, getter=hasPendingPing) BOOL pendingPing;
@property (nonatomic) double pingMinimum;
@property (nonatomic) double pingMaximum;
@property (nonatomic) unsigned long long longestBackOff;
@property (retain, nonatomic) COConstituent *longestBackedOffConstituent;
@property (copy, nonatomic) NSString *meshName;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) COConstituent *me;
@property (readonly, copy, nonatomic) NSArray *nodes;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didRemoveNode:(id)a0;
- (id)init;
- (void)sendNotification:(id)a0;
- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (void)didAddNode:(id)a0;
- (void)didTransitionToState:(unsigned long long)a0;
- (void)willTransitionToState:(unsigned long long)a0;
- (BOOL)addAddOn:(id)a0;
- (id)initWithConstituentType:(unsigned long long)a0;
- (void)registerHandler:(id /* block */)a0 forCommandClass:(Class)a1;
- (void)registerHandler:(id /* block */)a0 forNotificationClass:(Class)a1;
- (void)registerHandler:(id /* block */)a0 forRequestClass:(Class)a1;
- (void)sendCommand:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)sendRequest:(id)a0 toPeer:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)sendRequest:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)_currentBallotMergedWithBallot:(id)a0;
- (void)degisterHandlerForRequestClass:(Class)a0;
- (id)_acceptResponseWithBallot:(id)a0 generation:(unsigned long long)a1;
- (id)_ballotResponseWithBallot:(id)a0 generation:(unsigned long long)a1;
- (id)_constituentCharacteristics:(id)a0;
- (id)_electionRequestWithBallot:(id)a0 generation:(unsigned long long)a1;
- (void)_enqueueCommand:(id)a0;
- (void)_finalizeCompletionOfNode:(id)a0 memberOfMesh:(BOOL)a1 eventProvider:(id /* block */)a2;
- (void)_handleAcceptResponse:(id)a0 onNode:(id)a1;
- (void)_handleBallotResponse:(id)a0 onNode:(id)a1;
- (void)_handleDiscoveryUsingBallot:(id)a0;
- (id)_handleDiscoveryUsingElectionRequest:(id)a0;
- (void)_handleElectionRequest:(id)a0 onNode:(id)a1 responseCallBack:(id /* block */)a2;
- (void)_handleVoteRequest:(id)a0 onNode:(id)a1 responseCallBack:(id /* block */)a2;
- (id)_inflateQueueCommands;
- (BOOL)_isCurrentElectionVariant:(long long)a0;
- (BOOL)_isElectionComplete;
- (void)_logElectionSummary;
- (id)_newCompanionLinkClient;
- (id)_nodeDetails:(id)a0;
- (void)_performElectionGeneration:(unsigned long long)a0 source:(id)a1 allowingPostTransition:(BOOL)a2;
- (void)_performInvalidationOfNode:(id)a0 error:(id)a1 eventProvider:(id /* block */)a2;
- (void)_performStopOfNode:(id)a0 error:(id)a1 eventProvider:(id /* block */)a2;
- (void)_pingLeader;
- (void)_processBackedOffNodesExcludingTracker:(id)a0;
- (void)_processQueuedCommands;
- (void)_removeSentCommand:(id)a0 fromNode:(id)a1 withResponse:(id)a2 error:(id)a3;
- (void)_transitionToPostElection;
- (id)_voteRequestWithBallot:(id)a0 generation:(unsigned long long)a1;
- (void)backedOffNodeMovedOutOfElection:(id)a0;
- (void)broadcastRequest:(id)a0 includingSelf:(BOOL)a1 recipientsCallback:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)deregisterHandlerForCommandClass:(Class)a0;
- (void)deregisterHandlerForNotificationClass:(Class)a0;
- (void)deregisterHandlerForRequestClass:(Class)a0;
- (void)didActivateNode:(id)a0;
- (void)didInvalidateNode:(id)a0;
- (void)discoveryManager:(id)a0 didDiscoverRecords:(id)a1;
- (void)node:(id)a0 didReceiveCommand:(id)a1;
- (void)node:(id)a0 didReceiveError:(id)a1 forCommand:(id)a2;
- (void)node:(id)a0 didReceiveRequest:(id)a1 responseCallBack:(id /* block */)a2;
- (void)node:(id)a0 didReceiveResponse:(id)a1 toRequest:(id)a2;
- (void)node:(id)a0 didSendCommand:(id)a1;
- (void)nodeBecameAvailable:(id)a0;
- (id)nodeForConstituent:(id)a0;
- (void)nodeShouldRetryAfterBackoff:(id)a0;
- (BOOL)removeAddOn:(id)a0;
- (void)sendCommand:(id)a0 sentCommandCallback:(id /* block */)a1;
- (void)sendRequest:(id)a0 sentRequestCallback:(id /* block */)a1;
- (void)unknownNodeForCommand:(id)a0 result:(id /* block */)a1;
- (void)unknownNodeForRequest:(id)a0 result:(id /* block */)a1;
- (void)willActivateNode:(id)a0;
- (void)willInvalidateNode:(id)a0 error:(id)a1;

@end
