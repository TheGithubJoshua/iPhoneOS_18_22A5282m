@class NSData, SISchemaUUID;

@interface OPTINSchemaOPTINStatePropagationEvent : SISchemaTopLevelUnionType {
    struct { unsigned char optInState : 1; unsigned char propagationState : 1; } _has;
}

@property (nonatomic) int optInState;
@property (nonatomic) BOOL hasOptInState;
@property (nonatomic) int propagationState;
@property (nonatomic) BOOL hasPropagationState;
@property (retain, nonatomic) SISchemaUUID *hashedHomeKitAccessoryId;
@property (nonatomic) BOOL hasHashedHomeKitAccessoryId;
@property (readonly, nonatomic) NSData *jsonData;

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
- (void)deleteHashedHomeKitAccessoryId;
- (void)deleteOptInState;
- (void)deletePropagationState;

@end
