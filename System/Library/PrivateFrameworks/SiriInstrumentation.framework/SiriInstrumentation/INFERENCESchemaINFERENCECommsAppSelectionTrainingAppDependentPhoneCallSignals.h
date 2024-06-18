@class NSData;

@interface INFERENCESchemaINFERENCECommsAppSelectionTrainingAppDependentPhoneCallSignals : SISchemaInstrumentationMessage {
    struct { unsigned char appAffinityScoreForPhoneCall : 1; unsigned char appAffinityScoreForPhoneCallUsingSiri : 1; unsigned char appAffinityScoreForPhoneCallReceived : 1; } _has;
}

@property (nonatomic) float appAffinityScoreForPhoneCall;
@property (nonatomic) BOOL hasAppAffinityScoreForPhoneCall;
@property (nonatomic) float appAffinityScoreForPhoneCallUsingSiri;
@property (nonatomic) BOOL hasAppAffinityScoreForPhoneCallUsingSiri;
@property (nonatomic) float appAffinityScoreForPhoneCallReceived;
@property (nonatomic) BOOL hasAppAffinityScoreForPhoneCallReceived;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteAppAffinityScoreForPhoneCall;
- (void)deleteAppAffinityScoreForPhoneCallReceived;
- (void)deleteAppAffinityScoreForPhoneCallUsingSiri;

@end
