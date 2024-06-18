@class NSString;

@interface AWDHomeKitActionSetTriggered : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char duration : 1; unsigned char errorCode : 1; unsigned char numAccessories : 1; unsigned char triggerSource : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned int duration;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) int errorCode;
@property (readonly, nonatomic) BOOL hasTransaction;
@property (retain, nonatomic) NSString *transaction;
@property (nonatomic) BOOL hasTriggerSource;
@property (nonatomic) int triggerSource;
@property (nonatomic) BOOL hasNumAccessories;
@property (nonatomic) unsigned int numAccessories;
@property (readonly, nonatomic) BOOL hasClientMetricIdentifier;
@property (retain, nonatomic) NSString *clientMetricIdentifier;

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
- (int)StringAsTriggerSource:(id)a0;
- (id)triggerSourceAsString:(int)a0;

@end