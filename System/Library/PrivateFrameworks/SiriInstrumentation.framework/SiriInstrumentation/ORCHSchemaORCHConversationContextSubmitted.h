@class NSData;

@interface ORCHSchemaORCHConversationContextSubmitted : SISchemaInstrumentationMessage {
    struct { unsigned char contextUpdateReceived : 1; unsigned char contextUpdateError : 1; } _has;
}

@property (nonatomic) BOOL contextUpdateReceived;
@property (nonatomic) BOOL hasContextUpdateReceived;
@property (nonatomic) BOOL contextUpdateError;
@property (nonatomic) BOOL hasContextUpdateError;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteContextUpdateError;
- (void)deleteContextUpdateReceived;

@end
