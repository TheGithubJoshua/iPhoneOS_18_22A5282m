@class NSData;

@interface SISchemaUEIDictationDiscoveryToolTipDismissed : SISchemaInstrumentationMessage {
    struct { unsigned char dismissalReason : 1; } _has;
}

@property (nonatomic) int dismissalReason;
@property (nonatomic) BOOL hasDismissalReason;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteDismissalReason;

@end
