@class NSMutableArray;

@interface PDSProtoBatchRegisterReq : PBCodable <NSCopying> {
    struct { unsigned char requestTtl : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *userPushTokenRegRequests;
@property (nonatomic) BOOL hasRequestTtl;
@property (nonatomic) long long requestTtl;

+ (Class)userPushTokenRegRequestsType;

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
- (void)addUserPushTokenRegRequests:(id)a0;
- (void)clearUserPushTokenRegRequests;
- (id)userPushTokenRegRequestsAtIndex:(unsigned long long)a0;
- (unsigned long long)userPushTokenRegRequestsCount;

@end
