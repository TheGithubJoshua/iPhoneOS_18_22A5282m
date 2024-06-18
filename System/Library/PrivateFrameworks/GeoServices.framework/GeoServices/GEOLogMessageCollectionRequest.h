@class NSMutableArray;

@interface GEOLogMessageCollectionRequest : PBRequest <NSCopying> {
    NSMutableArray *_logMessages;
}

@property (retain, nonatomic) NSMutableArray *logMessages;

+ (BOOL)isValid:(id)a0;
+ (Class)logMessageType;

- (void)clearLogMessages;
- (id)initWithDictionary:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)logMessageAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (void)addLogMessage:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)logMessagesCount;
- (id)jsonRepresentation;

@end
