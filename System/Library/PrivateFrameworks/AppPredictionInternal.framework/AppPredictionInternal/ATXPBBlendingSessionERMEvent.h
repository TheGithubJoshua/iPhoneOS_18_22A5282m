@class NSString, NSMutableArray;

@interface ATXPBBlendingSessionERMEvent : PBCodable <NSCopying> {
    struct { unsigned char engagementType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasExecutableId;
@property (retain, nonatomic) NSString *executableId;
@property (nonatomic) BOOL hasEngagementType;
@property (nonatomic) int engagementType;
@property (readonly, nonatomic) BOOL hasConsumerSubType;
@property (retain, nonatomic) NSString *consumerSubType;
@property (retain, nonatomic) NSMutableArray *blendingUpdateUUIDs;

+ (Class)blendingUpdateUUIDType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsEngagementType:(id)a0;
- (id)engagementTypeAsString:(int)a0;
- (void)addBlendingUpdateUUID:(id)a0;
- (id)blendingUpdateUUIDAtIndex:(unsigned long long)a0;
- (unsigned long long)blendingUpdateUUIDsCount;
- (void)clearBlendingUpdateUUIDs;

@end
