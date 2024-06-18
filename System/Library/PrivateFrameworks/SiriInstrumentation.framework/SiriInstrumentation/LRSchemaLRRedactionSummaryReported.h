@class NSArray, NSData;

@interface LRSchemaLRRedactionSummaryReported : SISchemaInstrumentationMessage {
    struct { unsigned char hasRedactedEvents : 1; } _has;
}

@property (nonatomic) BOOL hasRedactedEvents;
@property (nonatomic) BOOL hasHasRedactedEvents;
@property (copy, nonatomic) NSArray *redactionWindows;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)addRedactionWindows:(id)a0;
- (void)clearRedactionWindows;
- (void)deleteHasRedactedEvents;
- (void)deleteRedactionWindows;
- (id)redactionWindowsAtIndex:(unsigned long long)a0;
- (unsigned long long)redactionWindowsCount;

@end
