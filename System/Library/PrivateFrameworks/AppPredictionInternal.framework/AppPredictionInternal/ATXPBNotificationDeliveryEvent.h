@class NSMutableArray;

@interface ATXPBNotificationDeliveryEvent : PBCodable <NSCopying> {
    struct { unsigned char deliveryUI : 1; } _has;
}

@property (nonatomic) BOOL hasDeliveryUI;
@property (nonatomic) int deliveryUI;
@property (retain, nonatomic) NSMutableArray *suggestionUUIDs;

+ (Class)suggestionUUIDType;

- (void)mergeFrom:(id)a0;
- (int)StringAsDeliveryUI:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (id)deliveryUIAsString:(int)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void)addSuggestionUUID:(id)a0;
- (void)clearSuggestionUUIDs;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)suggestionUUIDsCount;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)suggestionUUIDAtIndex:(unsigned long long)a0;

@end
