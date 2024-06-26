@class NSArray, NSString, NSMutableSet, NSMutableData, MFInvocationQueue, MFWeakReferenceHolder;
@protocol MFIMAPConnectionDelegate, EFCancelable, MFIMAPMailboxListFilter;

@interface MFIMAPConnection : MFConnection {
    id<MFIMAPMailboxListFilter> _mailboxListFilter;
    unsigned int _capabilityFlags : 24;
    BOOL _verifiedESearchResponse;
    unsigned char _connectionState : 3;
    NSString *_separatorChar;
    NSString *_serverNamespace;
    NSString *_selectedMailbox;
    NSMutableSet *_capabilities;
    NSArray *_lastRequiredHeadersArray;
    NSString *_lastRequiredHeaders;
    unsigned int _commandNumber;
    NSMutableData *_data;
    unsigned int _readBufferSize;
    double _expirationTime;
    MFInvocationQueue *_streamEventQueue;
    NSArray *_additionalHeadersForFetch;
    unsigned char _noModSequence : 1;
    struct { MFWeakReferenceHolder *holder; void *delegate; unsigned char shouldHandleUntaggedResponse : 1; unsigned char didReceiveResponse : 1; unsigned char didFinishSelect : 1; unsigned char didDisconnect : 1; unsigned char didBeginBodyLoad : 1; unsigned char didReceiveMoreBodyData : 1; unsigned char didFinishBodyDataLoad : 1; unsigned char bodyDataReadSize : 1; unsigned char setServerMessageCount : 1; unsigned char setHighestModSequence : 1; unsigned char willRemoveDelegation : 1; unsigned char shouldStartIdle : 1; } _delegateState;
}

@property (nonatomic) unsigned long long idleCommandSequenceNumber;
@property (retain, nonatomic) id<EFCancelable> idleSubscriptionCancelable;
@property (weak, nonatomic) id<MFIMAPConnectionDelegate> delegate;
@property (nonatomic) int tag;
@property (readonly, nonatomic) double connectTime;
@property (readonly, nonatomic) BOOL gotBadResponse;
@property (copy) NSArray *additionalHeadersForFetch;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, nonatomic, getter=isIdle) BOOL idle;

+ (void)initialize;
+ (void)setReadSizeParameters;
+ (id)_UIDPlusInfoFromIMAPResponses:(id)a0;

- (id)capabilities;
- (id)init;
- (BOOL)deleteMailbox:(id)a0;
- (int)connectionState;
- (void)disconnect;
- (id)description;
- (id)copyDiagnosticInformation;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)lock;
- (BOOL)loginDisabled;
- (void)dealloc;
- (BOOL)supportsCapability:(int)a0;
- (BOOL)logout;
- (void)close;
- (void)unselect;
- (BOOL)expunge;
- (BOOL)_doBasicConnectionUsingAccount:(id)a0;
- (id)_headersToFetchIncludingThoseRequiredForRouting:(BOOL)a0 withRecipients:(BOOL)a1;
- (id)_messageIDsFromFetchResultData:(id)a0;
- (BOOL)examineMailbox:(id)a0;
- (id)parenthesizedStringWithObjects:(id)a0;
- (id)selectedMailbox;
- (BOOL)storeFlags:(id)a0 state:(BOOL)a1 forMessageSet:(id)a2;
- (void)_addCapabilities:(id)a0;
- (void)_clearCapabilities;
- (id)_copyNextServerResponseForCommand:(struct { int x0; id x1; id x2; unsigned long long x3; id x4; } *)a0;
- (id)_copyNextTaggedOrContinuationResponseForCommand:(struct { int x0; id x1; id x2; unsigned long long x3; id x4; } *)a0;
- (int)_doIMAPLoginForAccount:(id)a0 quotedUsername:(id)a1 password:(id)a2;
- (id)_doListCommand:(int)a0 withReference:(id)a1 mailboxName:(id)a2 options:(int)a3 getSpecialUse:(BOOL)a4 statusDataItems:(id)a5 statusEntriesByMailbox:(id *)a6;
- (id)_doNamespaceCommand;
- (void)_enableCompressionIfSupported;
- (id)_errorForResponse:(id)a0 commandParams:(struct { int x0; id x1; id x2; unsigned long long x3; id x4; } *)a1;
- (id)_fetchArgumentForMessageUidsAndFlags;
- (void)_fetchCapabilities;
- (id)_getFirstLevelMessageIDsForReference:(id)a0;
- (id)_getReferencesForMessageSet:(id)a0;
- (BOOL)_isFetchResponseValid:(id)a0;
- (id)_listingForMailbox:(id)a0 options:(int)a1 getSpecialUse:(BOOL)a2 statusDataItems:(id)a3 statusEntriesByMailbox:(id *)a4 withCommand:(int)a5;
- (id)_readDataOfLength:(long long)a0;
- (id)_responseFromSendingCommand:(struct { int x0; id x1; id x2; unsigned long long x3; id x4; } *)a0 andPossiblyCreateMailbox:(id)a1;
- (id)_searchUidsForMessageIDs:(id)a0 excludeDeleted:(BOOL)a1;
- (void)_sendApplePushForAccountIfSupported:(id)a0;
- (void)_sendClientInfoIfSupported;
- (BOOL)_sendMailboxCommand:(int)a0 withArguments:(id)a1;
- (id)_serverErrorForAccount:(id)a0 response:(id)a1 command:(struct { int x0; id x1; id x2; unsigned long long x3; id x4; } *)a2;
- (BOOL)_tryConnectionUsingAccount:(id)a0;
- (id)_uidsForMessageIDs:(id)a0 excludeDeleted:(BOOL)a1;
- (void)_updateCapabilitiesForAccount:(id)a0 withAuthenticationResponse:(id)a1;
- (void)_updateSearchCapabilityWithAccount:(id)a0;
- (BOOL)appendData:(id)a0 toMailboxNamed:(id)a1 flags:(id)a2 dateReceived:(id)a3 newMessageInfo:(id *)a4;
- (BOOL)authenticateUsingAccount:(id)a0;
- (BOOL)authenticateUsingAccount:(id)a0 authenticator:(id)a1;
- (BOOL)closeAndLogout;
- (BOOL)connectUsingAccount:(id)a0;
- (id)copyArgumentForSearchTerm:(id)a0;
- (unsigned long long)countForSearchOfIDSet:(id)a0 forTerms:(id)a1 success:(BOOL *)a2;
- (unsigned long long)countForSearchOfUidSet:(id)a0 forTerms:(id)a1 success:(BOOL *)a2;
- (BOOL)createMailbox:(id)a0;
- (BOOL)deleteMessagesOlderThanNumberOfDays:(int)a0;
- (void)disconnectAndNotifyDelegate:(BOOL)a0;
- (id)eSearchIDSet:(id)a0 areMessageSequenceNumbers:(BOOL)a1 arguments:(id)a2 success:(BOOL *)a3 returning:(int)a4;
- (id)eSearchIDSet:(id)a0 areMessageSequenceNumbers:(BOOL)a1 forTerms:(id)a2 success:(BOOL *)a3 returning:(int)a4;
- (id)fetchMessageIdsForUids:(id)a0;
- (void)fetchStatusForMailboxes:(id)a0 args:(id)a1;
- (int)fillLiteralBuffer:(char *)a0 count:(unsigned long long)a1 dataLength:(unsigned long long)a2 nonSynchronizingLiteral:(BOOL *)a3;
- (void)finishIdle;
- (unsigned int)getMailboxIDForUID:(unsigned int)a0;
- (void)handleBytesAvailable;
- (id)listingForMailbox:(id)a0 options:(int)a1 getSpecialUse:(BOOL)a2 statusDataItems:(id)a3 statusEntriesByMailbox:(id *)a4;
- (unsigned int)literalChunkSize;
- (void)locked_finishIdle;
- (void)locked_scheduleIdle;
- (void)locked_scheduleIdleResetAfterDelay:(double)a0;
- (void)locked_startIdle;
- (BOOL)loginWithAccount:(id)a0 password:(id)a1;
- (id)mailboxListFilter;
- (id)messageSetForNumbers:(id)a0;
- (id)messageSetForRange:(struct { unsigned int x0; unsigned int x1; })a0;
- (id)messageSetForRange:(struct { unsigned int x0; unsigned int x1; })a0 butNotNumbers:(id)a1;
- (void)noop;
- (void)parseESearchResponseWithContext:(id)a0;
- (id)parseIndexSetFromSequenceSet:(id)a0;
- (void)parseSearchReturn:(id)a0;
- (BOOL)performCustomCommand:(id)a0 withArguments:(id)a1;
- (id)quotaPercentagesForMailbox:(id)a0;
- (unsigned int)readBufferSize;
- (BOOL)renameMailbox:(id)a0 toMailbox:(id)a1;
- (void)scheduleIdleReset;
- (id)searchIDSet:(id)a0 forTerms:(id)a1 success:(BOOL *)a2;
- (id)searchUIDs:(id)a0 withFlagRequests:(id)a1;
- (id)searchUidSet:(id)a0 forTerms:(id)a1 success:(BOOL *)a2;
- (BOOL)selectMailbox:(id)a0 withAccount:(id)a1;
- (BOOL)sendResponsesForCommand:(struct { int x0; id x1; id x2; unsigned long long x3; id x4; } *)a0 toQueue:(id)a1;
- (BOOL)sendResponsesForCondStoreFlagFetchForUIDs:(id)a0 withSequenceIdentifier:(id *)a1 toQueue:(id)a2;
- (BOOL)sendResponsesForUIDFetchForUIDs:(id)a0 fields:(id)a1 toQueue:(id)a2;
- (BOOL)sendResponsesForUIDs:(id)a0 fields:(id)a1 flagSearchResults:(id)a2 toQueue:(id)a3;
- (BOOL)sendSkeletonResponsesForUIDs:(id)a0 includeTo:(BOOL)a1 toQueue:(id)a2;
- (BOOL)sendUidAndFlagResponsesForUIDs:(id)a0 sequenceIdentifierProvider:(id)a1 flagSearchResults:(id)a2 toQueue:(id)a3;
- (BOOL)sendUidResponsesForSearchArguments:(id)a0 toQueue:(id)a1;
- (id)separatorChar;
- (id)serverPathPrefix;
- (void)setMailboxListFilter:(id)a0;
- (void)setReadBufferSize:(unsigned int)a0;
- (void)setReadBufferSizeFromElapsedTime:(double)a0 bytesRead:(unsigned long long)a1;
- (BOOL)startTLSForAccount:(id)a0;
- (BOOL)storeFlags:(id)a0 state:(BOOL)a1 forRange:(struct { unsigned int x0; unsigned int x1; })a2;
- (BOOL)subscribeMailbox:(id)a0;
- (id)subscribedListingForMailbox:(id)a0 options:(int)a1;
- (id)uidsReferencedBy:(id)a0;
- (BOOL)unsubscribeMailbox:(id)a0;
- (void)fetchTotalSize:(unsigned long long *)a0 andMessageCount:(unsigned int *)a1;
- (BOOL)_doUidFetchWithRange:(struct { unsigned int x0; unsigned int x1; })a0 arguments:(id)a1 validateMessage:(BOOL)a2 responses:(id)a3;
- (id)_fetchArgumentForMessageSkeletonsWithHeaders:(id)a0;
- (long long)_moveMessageSet:(id)a0 toMailboxName:(id)a1 command:(int)a2 newMessageInfo:(id *)a3;
- (id)_responseFromSendingCommands:(struct { int x0; id x1; id x2; unsigned long long x3; id x4; } *)a0 count:(unsigned long long)a1;
- (unsigned long long)_sendCommands:(struct { int x0; id x1; id x2; unsigned long long x3; id x4; } *)a0 count:(unsigned long long)a1 response:(id *)a2;
- (BOOL)copyUids:(id)a0 toMailboxNamed:(id)a1 newMessageInfo:(id *)a2;
- (void)didFinishCommands:(struct { int x0; id x1; id x2; unsigned long long x3; id x4; } *)a0 count:(unsigned long long)a1;
- (BOOL)expungeUids:(id)a0;
- (id)fetchArgumentForMessageSkeletonsWithTo:(BOOL)a0;
- (id)fetchHeadersForUid:(unsigned int)a0;
- (id)fetchUniqueRemoteIDsForUids:(id)a0;
- (BOOL)getQuotaForRootName:(id)a0;
- (void)handleStreamEvent:(unsigned long long)a0;
- (id)messageSetForNumbers:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)messageSetForNumbers:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 maxTokens:(unsigned long long)a2 indexOfLastNumber:(unsigned long long *)a3;
- (long long)moveSequenceSet:(id)a0 toMailboxName:(id)a1 newMessageInfo:(id *)a2;
- (long long)moveUIDSet:(id)a0 toMailboxNamed:(id)a1 newMessageInfo:(id *)a2;
- (void)notifyDelegateOfBodyLoadAppendage:(id)a0 section:(id)a1;
- (void)notifyDelegateOfBodyLoadCompletion:(id)a0 section:(id)a1;
- (void)notifyDelegateOfBodyLoadStart:(id)a0 section:(id)a1;
- (id)searchUidSet:(id)a0 forNewMessageIDs:(id)a1;
- (BOOL)storeFlags:(id)a0 state:(BOOL)a1 forUids:(id)a2;

@end
