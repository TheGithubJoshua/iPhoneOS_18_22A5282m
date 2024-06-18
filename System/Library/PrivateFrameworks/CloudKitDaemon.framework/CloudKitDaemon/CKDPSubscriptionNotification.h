@class CKDPSubscriptionNotificationAlert, NSMutableArray, NSString;

@interface CKDPSubscriptionNotification : PBCodable <NSCopying> {
    struct { unsigned char shouldBadge : 1; unsigned char shouldSendContentAvailable : 1; unsigned char shouldSendMutableContent : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasAlert;
@property (retain, nonatomic) CKDPSubscriptionNotificationAlert *alert;
@property (nonatomic) BOOL hasShouldBadge;
@property (nonatomic) BOOL shouldBadge;
@property (retain, nonatomic) NSMutableArray *additionalFields;
@property (nonatomic) BOOL hasShouldSendContentAvailable;
@property (nonatomic) BOOL shouldSendContentAvailable;
@property (nonatomic) BOOL hasShouldSendMutableContent;
@property (nonatomic) BOOL shouldSendMutableContent;
@property (readonly, nonatomic) BOOL hasCollapseIdKey;
@property (retain, nonatomic) NSString *collapseIdKey;

+ (Class)additionalFieldsType;

- (id)additionalFieldsAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (unsigned long long)additionalFieldsCount;
- (void)clearAdditionalFields;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addAdditionalFields:(id)a0;

@end