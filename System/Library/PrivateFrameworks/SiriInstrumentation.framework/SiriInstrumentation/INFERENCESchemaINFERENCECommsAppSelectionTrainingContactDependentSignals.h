@class INFERENCESchemaINFERENCECommsAppSelectionTrainingContactDependentMessageSignals, INFERENCESchemaINFERENCECommsAppSelectionTrainingContactDependentPhoneCallSignals, NSData;

@interface INFERENCESchemaINFERENCECommsAppSelectionTrainingContactDependentSignals : SISchemaInstrumentationMessage

@property (retain, nonatomic) INFERENCESchemaINFERENCECommsAppSelectionTrainingContactDependentMessageSignals *contactDependentMessageSignals;
@property (nonatomic) BOOL hasContactDependentMessageSignals;
@property (retain, nonatomic) INFERENCESchemaINFERENCECommsAppSelectionTrainingContactDependentPhoneCallSignals *contactDependentPhoneCallSignals;
@property (nonatomic) BOOL hasContactDependentPhoneCallSignals;
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
- (void)deleteContactDependentMessageSignals;
- (void)deleteContactDependentPhoneCallSignals;

@end
