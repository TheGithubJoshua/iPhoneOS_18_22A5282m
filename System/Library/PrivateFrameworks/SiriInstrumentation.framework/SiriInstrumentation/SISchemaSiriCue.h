@class NSData;

@interface SISchemaSiriCue : SISchemaInstrumentationMessage {
    struct { unsigned char siriCueType : 1; } _has;
}

@property (nonatomic) int siriCueType;
@property (nonatomic) BOOL hasSiriCueType;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteSiriCueType;

@end
