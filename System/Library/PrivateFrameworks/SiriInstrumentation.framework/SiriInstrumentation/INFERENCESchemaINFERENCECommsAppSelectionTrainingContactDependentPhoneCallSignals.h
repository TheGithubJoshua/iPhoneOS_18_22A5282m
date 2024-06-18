@class NSData;

@interface INFERENCESchemaINFERENCECommsAppSelectionTrainingContactDependentPhoneCallSignals : SISchemaInstrumentationMessage {
    struct { unsigned char appContactAffinityScoreForPhoneCall : 1; unsigned char appContactAffinityScoreForPhoneCallUsingSiri : 1; unsigned char appContactAffinityScoreForPhoneCallReceived : 1; } _has;
}

@property (nonatomic) float appContactAffinityScoreForPhoneCall;
@property (nonatomic) BOOL hasAppContactAffinityScoreForPhoneCall;
@property (nonatomic) float appContactAffinityScoreForPhoneCallUsingSiri;
@property (nonatomic) BOOL hasAppContactAffinityScoreForPhoneCallUsingSiri;
@property (nonatomic) float appContactAffinityScoreForPhoneCallReceived;
@property (nonatomic) BOOL hasAppContactAffinityScoreForPhoneCallReceived;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteAppContactAffinityScoreForPhoneCall;
- (void)deleteAppContactAffinityScoreForPhoneCallReceived;
- (void)deleteAppContactAffinityScoreForPhoneCallUsingSiri;

@end
