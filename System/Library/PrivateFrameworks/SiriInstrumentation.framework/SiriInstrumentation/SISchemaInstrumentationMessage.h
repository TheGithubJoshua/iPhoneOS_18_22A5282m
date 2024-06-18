@interface SISchemaInstrumentationMessage : PBCodable

- (void)willProduceDictionaryRepresentation:(id)a0;
- (id)qualifiedMessageName;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)unwrapMessageWithCompletion:(id /* block */)a0;
- (id)suppressMessageUnderConditions;
- (id)formattedJsonBody;
- (id)_pruneSuppressedMessagesFromArray:(id)a0 underConditions:(id)a1;
- (BOOL)shouldSuppressMessageUnderConditions:(id)a0;

@end
