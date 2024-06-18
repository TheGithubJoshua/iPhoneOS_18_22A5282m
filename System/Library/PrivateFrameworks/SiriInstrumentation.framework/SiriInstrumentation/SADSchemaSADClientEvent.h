@class SISchemaInstrumentationMessage, SADSchemaSADUODAssetsPrepared, SADSchemaSADImmediateDownloadTriggered, NSData, SADSchemaSADAvailableAssetDailyStatus;

@interface SADSchemaSADClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) SADSchemaSADUODAssetsPrepared *uodAssetsPrepared;
@property (nonatomic) BOOL hasUodAssetsPrepared;
@property (retain, nonatomic) SADSchemaSADAvailableAssetDailyStatus *availableAssetDailyStatus;
@property (nonatomic) BOOL hasAvailableAssetDailyStatus;
@property (retain, nonatomic) SADSchemaSADImmediateDownloadTriggered *immediateDownloadTriggered;
@property (nonatomic) BOOL hasImmediateDownloadTriggered;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

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
- (void)deleteAvailableAssetDailyStatus;
- (void)deleteImmediateDownloadTriggered;
- (void)deleteUodAssetsPrepared;

@end
