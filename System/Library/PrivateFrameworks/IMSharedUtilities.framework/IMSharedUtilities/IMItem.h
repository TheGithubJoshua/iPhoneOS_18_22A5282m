@class NSString, NSDictionary, NSData, NSDate, NSArray;

@interface IMItem : NSObject <NSSecureCoding, NSCopying, IMRemoteObjectCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *guid;
@property (nonatomic, setter=_setMessageID:) long long messageID;
@property (retain, nonatomic) NSString *account;
@property (retain, nonatomic) NSString *roomName;
@property (retain, nonatomic) NSString *service;
@property (retain, nonatomic) NSString *accountID;
@property (retain, nonatomic) NSString *destinationCallerID;
@property (retain, nonatomic) NSDate *time;
@property (retain, nonatomic) NSDate *clientSendTime;
@property (nonatomic) unsigned long long sortID;
@property (copy, nonatomic) NSString *replyToGUID;
@property (retain, nonatomic) NSString *handle;
@property (retain, nonatomic) NSString *unformattedID;
@property (retain, nonatomic) NSString *countryCode;
@property (retain, nonatomic) NSString *personCentric;
@property (retain, nonatomic) NSString *personCentricID;
@property (retain, nonatomic) NSString *sender;
@property (retain, nonatomic) NSDictionary *senderInfo;
@property (retain, nonatomic) id context;
@property (readonly, nonatomic) BOOL isFromMe;
@property (retain, nonatomic) NSString *balloonBundleID;
@property (readonly, nonatomic) BOOL isFirstMessageCandidate;
@property (readonly, nonatomic) BOOL isLastMessageCandidate;
@property (nonatomic) long long cloudKitSyncState;
@property (copy, nonatomic) NSString *cloudKitRecordID;
@property (copy, nonatomic) NSData *cloudKitServerChangeTokenBlob;
@property (copy, nonatomic) NSString *cloudKitRecordChangeTag;
@property (copy, nonatomic) NSString *parentChatID;
@property (retain, nonatomic) NSArray *fileTransferGUIDs;
@property (readonly, nonatomic) BOOL wasDetonated;

+ (id)stringGUID;
+ (Class)classForIMItemType:(long long)a0;
+ (Class)classForMessageItemDictionary:(id)a0;

- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isReply;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isBreadcrumb;
- (id)tapback;
- (id)associatedMessageGUID;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })associatedMessageRange;
- (long long)associatedMessageType;
- (id)consumedSessionPayloads;
- (BOOL)isSticker;
- (id)pluginSessionGUID;
- (BOOL)unsentIsFromMeItem;
- (void)encodeWithIMRemoteObjectSerializedDictionary:(id)a0;
- (id)initWithIMRemoteObjectSerializedDictionary:(id)a0;
- (id)copyDictionaryRepresentation;
- (id)initWithSender:(id)a0 time:(id)a1 guid:(id)a2 type:(long long)a3;
- (id)initWithSenderInfo:(id)a0 time:(id)a1 guid:(id)a2 messageID:(long long)a3 account:(id)a4 accountID:(id)a5 service:(id)a6 handle:(id)a7 roomName:(id)a8 unformattedID:(id)a9 countryCode:(id)a10 type:(long long)a11;
- (BOOL)isAssociatedMessageItem;
- (BOOL)isMessageAcknowledgment;
- (BOOL)isMessageEdit;
- (BOOL)isOlderThanItem:(id)a0;

@end
