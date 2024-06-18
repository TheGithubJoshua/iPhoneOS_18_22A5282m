@class NSString;

@interface FCCCoalescingRuleProtobuf : PBCodable <NSCopying> {
    struct { unsigned char interval : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasEventIdentifier;
@property (retain, nonatomic) NSString *eventIdentifier;
@property (nonatomic) BOOL hasInterval;
@property (nonatomic) double interval;

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

@end
