@class NSString, LIGHTHOUSE_BITACORA_PROTOLighthouseLedgerTrialIdentifiers;

@interface LIGHTHOUSE_BITACORA_PROTOLighthouseLedgerTrialdEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char eventType : 1; unsigned char eventSucceeded : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasTrialIdentifiers;
@property (retain, nonatomic) LIGHTHOUSE_BITACORA_PROTOLighthouseLedgerTrialIdentifiers *trialIdentifiers;
@property (readonly, nonatomic) BOOL hasContextID;
@property (retain, nonatomic) NSString *contextID;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL hasEventType;
@property (nonatomic) int eventType;
@property (nonatomic) BOOL hasEventSucceeded;
@property (nonatomic) BOOL eventSucceeded;

- (void)mergeFrom:(id)a0;
- (id)eventTypeAsString:(int)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsEventType:(id)a0;

@end
