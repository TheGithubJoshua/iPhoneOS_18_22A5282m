@interface NTPBSubscriptionDetectionScreenView : PBCodable <NSCopying> {
    struct { unsigned char countOfSubscriptionsDetected : 1; } _has;
}

@property (nonatomic) BOOL hasCountOfSubscriptionsDetected;
@property (nonatomic) int countOfSubscriptionsDetected;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
