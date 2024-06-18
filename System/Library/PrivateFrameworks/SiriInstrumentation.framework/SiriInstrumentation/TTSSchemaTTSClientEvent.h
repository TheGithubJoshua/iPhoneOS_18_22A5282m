@class TTSSchemaTTSClientSpeechContext, SISchemaInstrumentationMessage, TTSSchemaTTSRequestReceived, TTSSchemaTTSRequestReceivedTier1, TTSSchemaTTSVoiceFallbackOccurred, NSData, TTSSchemaTTSClientEventMetadata;

@interface TTSSchemaTTSClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) TTSSchemaTTSClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) TTSSchemaTTSClientSpeechContext *speechContext;
@property (nonatomic) BOOL hasSpeechContext;
@property (retain, nonatomic) TTSSchemaTTSRequestReceived *requestReceived;
@property (nonatomic) BOOL hasRequestReceived;
@property (retain, nonatomic) TTSSchemaTTSRequestReceivedTier1 *requestReceivedTier1;
@property (nonatomic) BOOL hasRequestReceivedTier1;
@property (retain, nonatomic) TTSSchemaTTSVoiceFallbackOccurred *voiceFallbackOccurred;
@property (nonatomic) BOOL hasVoiceFallbackOccurred;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (int)joinability;

- (int)componentName;
- (id)initWithDictionary:(id)a0;
- (int)getAnyEventType;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)qualifiedMessageName;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteEventMetadata;
- (void)deleteRequestReceived;
- (void)deleteRequestReceivedTier1;
- (void)deleteSpeechContext;
- (void)deleteVoiceFallbackOccurred;
- (id)getComponentId;

@end
