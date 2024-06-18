@class NSDate;

@interface ECIMAPAccount : ECAccount

@property (nonatomic) BOOL compactWhenClosingMailboxes;
@property (nonatomic) long long daysBetweenSyncs;
@property (copy, nonatomic) NSDate *dateOfLastSync;
@property (nonatomic) BOOL queriedUserToSetPathPrefix;
@property (nonatomic) BOOL shouldUseGmailLabelStores;
@property (readonly, nonatomic) BOOL shouldUseGmailLabelStoresIsSet;
@property (nonatomic) BOOL needsGmailLablesCleanup;
@property (nonatomic) BOOL hasServerDefinedAllMailMailbox;
@property (nonatomic) BOOL hasServerDefinedArchiveMailbox;
@property (nonatomic) BOOL hasServerDefinedDraftsMailbox;
@property (nonatomic) BOOL hasServerDefinedJunkMailbox;
@property (nonatomic) BOOL hasServerDefinedSentMailbox;
@property (nonatomic) BOOL hasServerDefinedTrashMailbox;
@property (nonatomic) BOOL ignoreServerDefinedArchiveMailbox;
@property (nonatomic) BOOL ignoreServerDefinedDraftsMailbox;
@property (nonatomic) BOOL ignoreServerDefinedJunkMailbox;
@property (nonatomic) BOOL ignoreServerDefinedSentMailbox;
@property (nonatomic) BOOL ignoreServerDefinedTrashMailbox;

+ (id)standardSSLPorts;
+ (id)standardPorts;

- (long long)defaultPortNumber;
- (long long)defaultSecurePortNumber;
- (id)usesSSLObject;
- (id)portNumberObject;
- (void)clearQueriedUserToSetPathPrefix;
- (id)_hostnameFromParentAccount:(id)a0;
- (void).cxx_destruct;
- (void)clearDaysBetweenSyncs;

@end
