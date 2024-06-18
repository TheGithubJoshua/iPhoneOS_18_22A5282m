@class NSString;

@interface PBBProtoPerformanceResult : PBCodable <NSCopying> {
    struct { unsigned char timeDelta : 1; unsigned char timeEnded : 1; unsigned char timeStarted : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasActivityType;
@property (retain, nonatomic) NSString *activityType;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL hasTimeDelta;
@property (nonatomic) double timeDelta;
@property (nonatomic) BOOL hasTimeStarted;
@property (nonatomic) double timeStarted;
@property (nonatomic) BOOL hasTimeEnded;
@property (nonatomic) double timeEnded;

+ (void)initialize;

- (id)detailedDescription;
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
