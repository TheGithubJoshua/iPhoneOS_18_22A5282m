@class NSMutableArray;

@interface GEOLogMsgEventTelemetric : PBCodable <NSCopying> {
    NSMutableArray *_telemetricEntitys;
}

@property (retain, nonatomic) NSMutableArray *telemetricEntitys;

+ (BOOL)isValid:(id)a0;
+ (Class)telemetricEntityType;

- (id)initWithDictionary:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (void)addTelemetricEntity:(id)a0;
- (void)clearTelemetricEntitys;
- (id)telemetricEntityAtIndex:(unsigned long long)a0;
- (unsigned long long)telemetricEntitysCount;

@end
