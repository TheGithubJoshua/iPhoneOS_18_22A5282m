@class NSData, NSString, NSArray, NSDate, NSAttributedString, NSUUID, NSDictionary, TUConversationActivity, NSIndexSet;

@interface IMMessageItem : IMItem <NSSecureCoding, NSCopying, IMRemoteObjectCoding> {
    NSArray *_fileTransferGUIDs;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *messageParts;
@property (nonatomic) BOOL backwardsCompatibleVersion;
@property (nonatomic) BOOL isCorrupt;
@property (nonatomic) BOOL isSpam;
@property (readonly, nonatomic) BOOL isCMM;
@property (retain, nonatomic) NSString *subject;
@property (retain, nonatomic) NSAttributedString *body;
@property (retain, nonatomic) NSData *bodyData;
@property (retain, nonatomic) NSData *payloadData;
@property (retain, nonatomic) NSString *expressiveSendStyleID;
@property (retain, nonatomic) NSDate *timeExpressiveSendPlayed;
@property (retain, nonatomic) NSDate *timeRead;
@property (retain, nonatomic) NSDate *timeDelivered;
@property (retain, nonatomic) NSDate *timePlayed;
@property (retain, nonatomic) NSDate *dateEdited;
@property (nonatomic) unsigned long long partCount;
@property (nonatomic) unsigned long long flags;
@property (nonatomic) long long expireState;
@property (nonatomic) unsigned int errorCode;
@property (nonatomic) long long replaceID;
@property (nonatomic) BOOL hasDataDetectorResults;
@property (nonatomic) BOOL blockingRichLinks;
@property (readonly, nonatomic) BOOL isDelivered;
@property (readonly, nonatomic) BOOL isSent;
@property (readonly, nonatomic) BOOL isRead;
@property (readonly, nonatomic) BOOL isPlayed;
@property (readonly, nonatomic) BOOL isFinished;
@property (readonly, nonatomic) BOOL isUnfinished;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) BOOL isAlert;
@property (readonly, nonatomic) BOOL wasDataDetected;
@property (readonly, nonatomic) BOOL wasDowngraded;
@property (readonly, nonatomic) BOOL wasDeliveredQuietly;
@property (readonly, nonatomic) BOOL didNotifyRecipient;
@property (readonly, nonatomic) BOOL isAutoReply;
@property (readonly, nonatomic) BOOL isSystemMessage;
@property (readonly, nonatomic) BOOL isPrepared;
@property (readonly, nonatomic) BOOL isTypingMessage;
@property (readonly, nonatomic) BOOL isLocatingMessage;
@property (readonly, nonatomic) BOOL isEmote;
@property (readonly, nonatomic) BOOL isAudioMessage;
@property (readonly, nonatomic) BOOL isExpirable;
@property (readonly, nonatomic) BOOL isFromExternalSource;
@property (nonatomic) BOOL hasUnseenMention;
@property (readonly, nonatomic) BOOL isFileAttachment;
@property (readonly, nonatomic) BOOL isTapToRetry;
@property (nonatomic) BOOL isStewie;
@property (nonatomic) long long stewieConversationID;
@property (copy, nonatomic) NSUUID *stewieConversationUUID;
@property (nonatomic) long long stewieSequenceNumber;
@property (retain, nonatomic) NSAttributedString *translatedText;
@property (retain, nonatomic) NSString *detectedLanguage;
@property (nonatomic) BOOL shouldSendPartIndexesInMessageBody;
@property (retain, nonatomic) NSIndexSet *editedPartIndexes;
@property (readonly, nonatomic) BOOL hasEditedParts;
@property (retain, nonatomic) NSIndexSet *retractedPartIndexes;
@property (readonly, nonatomic) BOOL isFullyRetracted;
@property (retain, nonatomic) NSIndexSet *failedEditPartIndexes;
@property (retain, nonatomic) NSIndexSet *failedRetractPartIndexes;
@property (retain, nonatomic) NSDictionary *originalTextRangesByPartIndex;
@property (readonly, nonatomic) NSArray *editUnsupportedByHandleIDs;
@property (nonatomic) unsigned long long editEligibility;
@property (nonatomic) BOOL isBeingRetried;
@property (retain, nonatomic) NSString *retryToParticipant;
@property (retain, nonatomic) NSString *notificationIDSTokenURI;
@property (readonly, copy, nonatomic) NSAttributedString *breadcrumbText;
@property (retain, nonatomic) NSString *plainBody;
@property (retain, nonatomic) NSData *typingIndicatorIcon;
@property (retain, nonatomic) NSData *contactsAvatarRecipeData;
@property (nonatomic, getter=isUpdatingDataSourcePayload) BOOL updatingDataSourcePayload;
@property (retain, nonatomic) NSDictionary *messageSummaryInfo;
@property (retain, nonatomic) NSDictionary *bizIntent;
@property (retain, nonatomic) NSString *locale;
@property (nonatomic) BOOL isSOS;
@property (nonatomic) BOOL useStandalone;
@property (nonatomic) BOOL NicknameRequested;
@property (nonatomic) BOOL shouldSendMeCard;
@property (copy, nonatomic) NSString *suggestedAuthorName;
@property (copy, nonatomic) NSString *suggestedAuthorAvatarPath;
@property (copy, nonatomic) NSString *threadIdentifier;
@property (retain, nonatomic) IMMessageItem *threadOriginator;
@property (copy, nonatomic) NSDictionary *replyCountsByPart;
@property (copy, nonatomic) NSArray *syndicationRanges;
@property (copy, nonatomic) NSArray *syncedSyndicationRanges;
@property (nonatomic) BOOL wasDetectedAsSWYSpam;
@property (copy, nonatomic) NSString *swyAppName;
@property (copy, nonatomic) NSString *swyBundleID;
@property (readonly, nonatomic) BOOL containsRichLink;
@property (readonly, copy, nonatomic) NSArray *richLinkURLs;
@property (copy, nonatomic) TUConversationActivity *groupActivity;
@property (nonatomic) long long transcriptSharingMessageType;
@property (nonatomic, getter=isInitialTranscriptSharingItem) BOOL initialTranscriptSharingItem;

+ (id)_messageItemWithIndexesDeleted:(id)a0 subRangesToDeleteMapping:(id)a1 deleteSubject:(BOOL)a2 deleteTransferCallback:(id /* block */)a3 createItemCallback:(id /* block */)a4 fromMessageItem:(id)a5;
+ (BOOL)messageContainsSurfDD:(id)a0;
+ (id)newMessageItemFrom:(id)a0 withText:(id)a1 deleteSubject:(BOOL)a2 withFileTransferGUIDs:(id)a3;
+ (unsigned long long)partKeyForAttachmentGUID:(id)a0 inBody:(id)a1;

- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isReply;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)sender;
- (BOOL)isFromMe;
- (BOOL)canRetryFailedRetraction;
- (id)fileTransferGUIDs;
- (id)historyForMessagePart:(long long)a0;
- (id)initWithSenderInfo:(id)a0 time:(id)a1 timeRead:(id)a2 timeDelivered:(id)a3 timePlayed:(id)a4 subject:(id)a5 body:(id)a6 bodyData:(id)a7 attributes:(id)a8 fileTransferGUIDs:(id)a9 flags:(unsigned long long)a10 guid:(id)a11 messageID:(long long)a12 account:(id)a13 accountID:(id)a14 service:(id)a15 handle:(id)a16 roomName:(id)a17 unformattedID:(id)a18 countryCode:(id)a19 expireState:(long long)a20 balloonBundleID:(id)a21 payloadData:(id)a22 expressiveSendStyleID:(id)a23 timeExpressiveSendPlayed:(id)a24 bizIntent:(id)a25 locale:(id)a26 errorType:(unsigned int)a27 threadIdentifier:(id)a28 syndicationRanges:(id)a29 syncedSyndicationRanges:(id)a30 partCount:(unsigned long long)a31 dateEdited:(id)a32;
- (void)setFileTransferGUIDs:(id)a0;
- (BOOL)wasDetonated;
- (void)_clearBodyData;
- (void)_generateBodyDataIfNeeded;
- (void)_generateBodyTextIfNeeded;
- (id)_localizedBackwardsCompatibleExpressiveSendText;
- (double)_messageEditHistoryLimit;
- (double)_messageEditTimeout;
- (double)_messageRetractionTimeout;
- (id)_partRangeByIndexFromPlistSerializable:(id)a0;
- (id)_partRangeByIndexToPlistSerializable:(id)a0;
- (void)_recalculatePartCount;
- (void)_regenerateBodyData;
- (void)_regenerateBodyText;
- (double)_timeoutIntervalForEditType:(unsigned long long)a0;
- (void)_updateFlags:(unsigned long long)a0;
- (void)addEditedPartIndex:(long long)a0;
- (void)addFailedEditPartIndex:(long long)a0;
- (void)addFailedRetractPartIndex:(long long)a0;
- (void)addRetractedPartIndex:(long long)a0;
- (void)adjustIsEmptyFlag;
- (id)attachmentGUIDAtIndex:(unsigned long long)a0;
- (id)copyDictionaryRepresentation;
- (id)copyForBackwardsCompatibility;
- (id)copyWithFlags:(unsigned long long)a0;
- (unsigned long long)eligibilityForEditType:(unsigned long long)a0 messagePartIndex:(long long)a1;
- (void)enumerateAttachmentGUIDsWithBlock:(id /* block */)a0;
- (void)eraseMessageContent;
- (unsigned long long)getCMMAssetOffset;
- (unsigned long long)getCMMState;
- (id)initWithDictionary:(id)a0 hint:(id)a1;
- (id)initWithSender:(id)a0 time:(id)a1 body:(id)a2 attributes:(id)a3 fileTransferGUIDs:(id)a4 flags:(unsigned long long)a5 error:(id)a6 guid:(id)a7 threadIdentifier:(id)a8;
- (id)initWithSender:(id)a0 time:(id)a1 body:(id)a2 attributes:(id)a3 fileTransferGUIDs:(id)a4 flags:(unsigned long long)a5 error:(id)a6 guid:(id)a7 type:(long long)a8 threadIdentifier:(id)a9;
- (id)initWithSender:(id)a0 time:(id)a1 guid:(id)a2 type:(long long)a3;
- (id)initWithSenderInfo:(id)a0 time:(id)a1 guid:(id)a2 messageID:(long long)a3 account:(id)a4 accountID:(id)a5 service:(id)a6 handle:(id)a7 roomName:(id)a8 unformattedID:(id)a9 countryCode:(id)a10;
- (id)initWithSenderInfo:(id)a0 time:(id)a1 timeRead:(id)a2 timeDelivered:(id)a3 timePlayed:(id)a4 subject:(id)a5 body:(id)a6 bodyData:(id)a7 attributes:(id)a8 fileTransferGUIDs:(id)a9 flags:(unsigned long long)a10 guid:(id)a11 messageID:(long long)a12 account:(id)a13 accountID:(id)a14 service:(id)a15 handle:(id)a16 roomName:(id)a17 unformattedID:(id)a18 countryCode:(id)a19 expireState:(long long)a20 balloonBundleID:(id)a21 payloadData:(id)a22 expressiveSendStyleID:(id)a23 timeExpressiveSendPlayed:(id)a24 bizIntent:(id)a25 locale:(id)a26 errorType:(unsigned int)a27 type:(long long)a28 threadIdentifier:(id)a29 syndicationRanges:(id)a30 syncedSyndicationRanges:(id)a31 partCount:(unsigned long long)a32 dateEdited:(id)a33;
- (BOOL)isFirstMessageCandidate;
- (BOOL)isLastMessageCandidate;
- (unsigned long long)partKeyForAttachmentGUID:(id)a0;
- (unsigned long long)powerLogMessageType;
- (unsigned long long)replyCountForPartIndex:(long long)a0;
- (void)setCMMAssetOffset:(unsigned long long)a0;
- (void)setCMMState:(unsigned long long)a0;
- (void)setCMMStateToRegisteredAndAssetOffsetTo:(unsigned long long)a0;
- (void)setHistory:(id)a0 forMessagePart:(long long)a1;
- (void)setWasDataDetected:(BOOL)a0;

@end