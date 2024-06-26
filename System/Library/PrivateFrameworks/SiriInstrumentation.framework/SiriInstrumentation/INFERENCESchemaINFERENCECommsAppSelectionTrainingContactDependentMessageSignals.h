@class NSData;

@interface INFERENCESchemaINFERENCECommsAppSelectionTrainingContactDependentMessageSignals : SISchemaInstrumentationMessage {
    struct { unsigned char appContactAffinityScoreForMessages : 1; unsigned char appContactAffinityScoreForMessagesUsingSiri : 1; unsigned char appContactAffinityScoreForMessagesReceived : 1; } _has;
}

@property (nonatomic) float appContactAffinityScoreForMessages;
@property (nonatomic) BOOL hasAppContactAffinityScoreForMessages;
@property (nonatomic) float appContactAffinityScoreForMessagesUsingSiri;
@property (nonatomic) BOOL hasAppContactAffinityScoreForMessagesUsingSiri;
@property (nonatomic) float appContactAffinityScoreForMessagesReceived;
@property (nonatomic) BOOL hasAppContactAffinityScoreForMessagesReceived;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteAppContactAffinityScoreForMessages;
- (void)deleteAppContactAffinityScoreForMessagesReceived;
- (void)deleteAppContactAffinityScoreForMessagesUsingSiri;

@end
