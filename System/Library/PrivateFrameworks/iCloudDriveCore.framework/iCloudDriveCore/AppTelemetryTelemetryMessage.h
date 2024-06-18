@class NSMutableArray;

@interface AppTelemetryTelemetryMessage : PBCodable <NSCopying> {
    struct { unsigned char token : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *events;
@property (nonatomic) BOOL hasToken;
@property (nonatomic) unsigned long long token;

+ (Class)eventsType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (void)addEvents:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearEvents;
- (id)eventsAtIndex:(unsigned long long)a0;
- (unsigned long long)eventsCount;

@end
