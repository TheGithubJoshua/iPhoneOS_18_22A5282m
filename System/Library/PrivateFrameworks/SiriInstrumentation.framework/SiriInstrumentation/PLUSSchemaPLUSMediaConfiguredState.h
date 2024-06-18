@class NSData;

@interface PLUSSchemaPLUSMediaConfiguredState : SISchemaInstrumentationMessage {
    struct { unsigned char shadowLogging : 1; } _has;
}

@property (nonatomic) BOOL shadowLogging;
@property (nonatomic) BOOL hasShadowLogging;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteShadowLogging;

@end
