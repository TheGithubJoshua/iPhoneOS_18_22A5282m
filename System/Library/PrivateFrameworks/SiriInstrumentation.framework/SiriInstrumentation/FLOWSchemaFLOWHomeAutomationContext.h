@class NSArray, NSData, FLOWSchemaFLOWHomeAutomationCommand, FLOWSchemaFLOWHomeContext;

@interface FLOWSchemaFLOWHomeAutomationContext : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *homeKitServiceResponses;
@property (retain, nonatomic) FLOWSchemaFLOWHomeContext *homeContext;
@property (nonatomic) BOOL hasHomeContext;
@property (retain, nonatomic) FLOWSchemaFLOWHomeAutomationCommand *homeAutomationCommand;
@property (nonatomic) BOOL hasHomeAutomationCommand;
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
- (void)addHomeKitServiceResponse:(id)a0;
- (void)clearHomeKitServiceResponse;
- (void)deleteHomeAutomationCommand;
- (void)deleteHomeContext;
- (void)deleteHomeKitServiceResponse;
- (id)homeKitServiceResponseAtIndex:(unsigned long long)a0;
- (unsigned long long)homeKitServiceResponseCount;

@end
