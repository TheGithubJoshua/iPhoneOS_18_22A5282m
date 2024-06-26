@class IMHandle, NSDate, NSDictionary, NSString, IMMessageItem, IMTapback, NSAttributedString, NSIndexSet, NSArray, NSData, NSError, TUConversationActivity;

@interface IMMessage : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL isRichLinkMessage;
@property (readonly, copy, nonatomic) NSString *associatedMessageGUID;
@property (readonly, nonatomic) BOOL isAssociatedMessage;
@property (readonly, nonatomic) long long associatedMessageType;
@property (readonly, copy, nonatomic) NSDictionary *messageSummaryInfo;
@property (readonly, copy, nonatomic) IMTapback *tapback;
@property (retain, nonatomic, setter=_updateSender:) IMHandle *sender;
@property (retain, nonatomic, setter=_updateError:) NSError *error;
@property (nonatomic, setter=_updateFlags:) unsigned long long flags;
@property (retain, nonatomic, setter=_updateTime:) NSDate *time;
@property (retain, nonatomic, setter=_updateTimeRead:) NSDate *timeRead;
@property (retain, nonatomic, setter=_updateTimeDelivered:) NSDate *timeDelivered;
@property (retain, nonatomic, setter=_updateTimePlayed:) NSDate *timePlayed;
@property (nonatomic, setter=_updateMessageID:) long long messageID;
@property (retain, nonatomic, setter=_updateGUID:) NSString *guid;
@property (copy, nonatomic, setter=_associatedMessageGUID:) NSString *associatedMessageGUID;
@property (nonatomic, setter=_associatedMessageType:) long long associatedMessageType;
@property (nonatomic, setter=_associatedMessageRange:) struct _NSRange { unsigned long long location; unsigned long long length; } associatedMessageRange;
@property (copy, nonatomic, setter=_messageSummaryInfo:) NSDictionary *messageSummaryInfo;
@property (retain, nonatomic, setter=_updateBizIntent:) NSDictionary *bizIntent;
@property (retain, nonatomic, setter=_updateLocale:) NSString *locale;
@property (retain, nonatomic, setter=_updateText:) NSAttributedString *text;
@property (retain, nonatomic) NSString *plainBody;
@property (copy, nonatomic, setter=_syndicationRanges:) NSArray *syndicationRanges;
@property (copy, nonatomic, setter=_syncedSyndicationRanges:) NSArray *syncedSyndicationRanges;
@property (retain, nonatomic, setter=_updatedDateEdited:) NSDate *dateEdited;
@property (nonatomic) BOOL isInvitationMessage;
@property (readonly, nonatomic) IMMessageItem *_imMessageItem;
@property (retain, nonatomic) TUConversationActivity *groupActivity;
@property (copy, nonatomic, setter=_updateFileTransferGUIDs:) NSArray *fileTransferGUIDs;
@property (nonatomic) unsigned long long sortID;
@property (readonly, nonatomic) IMHandle *subject;
@property (readonly, nonatomic) NSAttributedString *messageSubject;
@property (readonly, nonatomic) NSString *senderName;
@property (readonly, nonatomic) NSString *summaryString;
@property (retain, nonatomic) NSString *balloonBundleID;
@property (retain, nonatomic) NSData *payloadData;
@property (retain, nonatomic) NSString *associatedBalloonBundleID;
@property (retain, nonatomic) NSString *sourceApplicationID;
@property (retain, nonatomic) NSString *expressiveSendStyleID;
@property (retain, nonatomic) NSDate *timeExpressiveSendPlayed;
@property (readonly, nonatomic) BOOL hasInlineAttachments;
@property (readonly, nonatomic) NSArray *inlineAttachmentAttributesArray;
@property (readonly, nonatomic) BOOL isSent;
@property (readonly, nonatomic) BOOL isFinished;
@property (readonly, nonatomic) BOOL isTypingMessage;
@property (readonly, nonatomic) BOOL isLocatingMessage;
@property (readonly, nonatomic) BOOL isEmote;
@property (readonly, nonatomic) BOOL isFromMe;
@property (readonly, nonatomic, getter=isSenderUnknown) BOOL senderUnknown;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) BOOL isDelayed;
@property (readonly, nonatomic) BOOL isAutoReply;
@property (readonly, nonatomic) BOOL isDelivered;
@property (readonly, nonatomic) BOOL isRead;
@property (readonly, nonatomic) BOOL isAudioMessage;
@property (readonly, nonatomic) BOOL isPlayed;
@property (readonly, nonatomic) BOOL isAddressedToMe;
@property (readonly, nonatomic) BOOL isAlert;
@property (readonly, nonatomic) BOOL isSystemMessage;
@property (readonly, nonatomic) BOOL hasDataDetectorResults;
@property (nonatomic) BOOL hasMention;
@property (readonly, nonatomic) BOOL wasDowngraded;
@property (readonly, nonatomic) BOOL isTapToRetry;
@property (readonly, nonatomic) BOOL wasDataDetected;
@property (readonly, nonatomic) BOOL wasDeliveredQuietly;
@property (readonly, nonatomic) BOOL didNotifyRecipient;
@property (retain, nonatomic) NSData *customTypingIndicatorIcon;
@property (retain, nonatomic) NSString *notificationIDSTokenURI;
@property (nonatomic) BOOL isSOS;
@property (nonatomic) BOOL useStandalone;
@property (copy, nonatomic) NSString *threadIdentifier;
@property (retain, nonatomic) IMMessage *threadOriginator;
@property (retain, nonatomic) NSDictionary *replyCountsByPart;
@property (retain, nonatomic) NSIndexSet *editedPartIndexes;
@property (retain, nonatomic) NSIndexSet *retractedPartIndexes;
@property (readonly, nonatomic) BOOL hasEditedParts;
@property (readonly, nonatomic) BOOL wasDetonated;

+ (id)breadcrumbMessageWithText:(id)a0 associatedMessageGUID:(id)a1 balloonBundleID:(id)a2 fileTransferGUIDs:(id)a3 payloadData:(id)a4 threadIdentifier:(id)a5;
+ (Class)richLinksDataSourceClass;
+ (id)_vCardDataWithCLLocation:(id)a0;
+ (id)defaultInvitationMessageFromSender:(id)a0 flags:(unsigned long long)a1;
+ (id)determineRichLinksInMessage:(id)a0;
+ (id)determineRichLinksInMessage:(id)a0 additionalSupportedSchemes:(id)a1;
+ (id)editedMessageWithOriginalMessage:(id)a0 editedPartIndex:(long long)a1 newPartText:(id)a2;
+ (id)editedMessageWithOriginalMessage:(id)a0 retractedPartIndex:(long long)a1 shouldRetractSubject:(BOOL)a2;
+ (id)fromMeIMHandle:(id)a0 withText:(id)a1 fileTransferGUIDs:(id)a2 flags:(unsigned long long)a3;
+ (BOOL)hasKnownSchemesForRichLinkURL:(id)a0;
+ (BOOL)hasKnownSchemesForRichLinkURL:(id)a0 additionalSupportedSchemes:(id)a1;
+ (id)instantMessageWithAssociatedMessageContent:(id)a0 flags:(unsigned long long)a1 associatedMessageGUID:(id)a2 associatedMessageType:(long long)a3 associatedMessageRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 messageSummaryInfo:(id)a5 threadIdentifier:(id)a6;
+ (id)instantMessageWithText:(id)a0 flags:(unsigned long long)a1 threadIdentifier:(id)a2;
+ (id)instantMessageWithText:(id)a0 messageSubject:(id)a1 fileTransferGUIDs:(id)a2 flags:(unsigned long long)a3 balloonBundleID:(id)a4 payloadData:(id)a5 expressiveSendStyleID:(id)a6;
+ (id)instantMessageWithText:(id)a0 messageSubject:(id)a1 fileTransferGUIDs:(id)a2 flags:(unsigned long long)a3 threadIdentifier:(id)a4;
+ (id)instantMessageWithText:(id)a0 messageSubject:(id)a1 flags:(unsigned long long)a2 expressiveSendStyleID:(id)a3;
+ (id)instantMessageWithText:(id)a0 messageSubject:(id)a1 flags:(unsigned long long)a2 expressiveSendStyleID:(id)a3 threadIdentifier:(id)a4;
+ (id)instantMessageWithText:(id)a0 messageSubject:(id)a1 flags:(unsigned long long)a2 threadIdentifier:(id)a3;
+ (id)locatingMessageWithGuid:(id)a0 error:(id)a1;
+ (id)messageFromIMMessageItem:(id)a0 sender:(id)a1 subject:(id)a2;
+ (id)messageFromIMMessageItemDictionary:(id)a0 body:(id)a1 sender:(id)a2 subject:(id)a3;
+ (id)messageWithLocation:(id)a0 flags:(unsigned long long)a1 error:(id)a2 guid:(id)a3;
+ (BOOL)supportedRichLinkURL:(id)a0 additionalSupportedSchemes:(id)a1;

- (long long)compare:(id)a0;
- (BOOL)isReply;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_copyWithFlags:(unsigned long long)a0;
- (long long)compare:(id)a0 comparisonType:(long long)a1;
- (id)initWithSender:(id)a0 time:(id)a1 text:(id)a2 fileTransferGUIDs:(id)a3 flags:(unsigned long long)a4 error:(id)a5 guid:(id)a6 subject:(id)a7;
- (id)initWithSender:(id)a0 time:(id)a1 text:(id)a2 fileTransferGUIDs:(id)a3 flags:(unsigned long long)a4 error:(id)a5 guid:(id)a6 subject:(id)a7 threadIdentifier:(id)a8;
- (id)initWithSender:(id)a0 time:(id)a1 text:(id)a2 messageSubject:(id)a3 fileTransferGUIDs:(id)a4 flags:(unsigned long long)a5 error:(id)a6 guid:(id)a7 subject:(id)a8 associatedMessageGUID:(id)a9 associatedMessageType:(long long)a10 associatedMessageRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a11 messageSummaryInfo:(id)a12 threadIdentifier:(id)a13;
- (id)initWithSender:(id)a0 time:(id)a1 text:(id)a2 messageSubject:(id)a3 fileTransferGUIDs:(id)a4 flags:(unsigned long long)a5 error:(id)a6 guid:(id)a7 subject:(id)a8 balloonBundleID:(id)a9 payloadData:(id)a10 expressiveSendStyleID:(id)a11 threadIdentifier:(id)a12;
- (id)messagesBySeparatingRichLinks;
- (id)richLinkDataSourceWithChatContext:(id)a0;
- (void)setIsTapToRetry:(BOOL)a0;
- (id)tapbackSummaryForConversationList;
- (void)addEditedPartIndex:(long long)a0;
- (void)addRetractedPartIndex:(long long)a0;
- (id)_initWithSender:(id)a0 time:(id)a1 timeRead:(id)a2 timeDelivered:(id)a3 timePlayed:(id)a4 plainText:(id)a5 text:(id)a6 messageSubject:(id)a7 fileTransferGUIDs:(id)a8 flags:(unsigned long long)a9 error:(id)a10 guid:(id)a11 messageID:(long long)a12 subject:(id)a13 balloonBundleID:(id)a14 payloadData:(id)a15 expressiveSendStyleID:(id)a16 timeExpressiveSendPlayed:(id)a17 associatedMessageGUID:(id)a18 associatedMessageType:(long long)a19 associatedMessageRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a20 messageSummaryInfo:(id)a21 threadIdentifier:(id)a22 dateEdited:(id)a23;
- (void)_ovverrideGUIDForTest:(id)a0;
- (id)descriptionForPurpose:(long long)a0;
- (id)descriptionForPurpose:(long long)a0 inChat:(id)a1;
- (id)descriptionForPurpose:(long long)a0 inChat:(id)a1 senderDisplayName:(id)a2;
- (id)initWithSender:(id)a0 fileTransfer:(id)a1;
- (id)initWithSender:(id)a0 time:(id)a1 text:(id)a2 messageSubject:(id)a3 fileTransferGUIDs:(id)a4 flags:(unsigned long long)a5 error:(id)a6 guid:(id)a7 subject:(id)a8;
- (id)initWithSender:(id)a0 time:(id)a1 text:(id)a2 messageSubject:(id)a3 fileTransferGUIDs:(id)a4 flags:(unsigned long long)a5 error:(id)a6 guid:(id)a7 subject:(id)a8 associatedMessageGUID:(id)a9 associatedMessageType:(long long)a10 associatedMessageRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a11 associatedMessageInfo:(id)a12;
- (id)initWithSender:(id)a0 time:(id)a1 text:(id)a2 messageSubject:(id)a3 fileTransferGUIDs:(id)a4 flags:(unsigned long long)a5 error:(id)a6 guid:(id)a7 subject:(id)a8 associatedMessageGUID:(id)a9 associatedMessageType:(long long)a10 associatedMessageRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a11 messageSummaryInfo:(id)a12;
- (id)initWithSender:(id)a0 time:(id)a1 text:(id)a2 messageSubject:(id)a3 fileTransferGUIDs:(id)a4 flags:(unsigned long long)a5 error:(id)a6 guid:(id)a7 subject:(id)a8 balloonBundleID:(id)a9 payloadData:(id)a10 expressiveSendStyleID:(id)a11;
- (id)initWithSender:(id)a0 time:(id)a1 text:(id)a2 messageSubject:(id)a3 fileTransferGUIDs:(id)a4 flags:(unsigned long long)a5 error:(id)a6 guid:(id)a7 subject:(id)a8 threadIdentifier:(id)a9;
- (BOOL)isCancelTypingMessage;
- (BOOL)isIncomingTypingMessage;
- (BOOL)isIncomingTypingOrCancelTypingMessage;
- (BOOL)isTypingOrCancelTypingMessage;
- (id)messagesSeparatedByByteLength:(long long)a0;

@end
