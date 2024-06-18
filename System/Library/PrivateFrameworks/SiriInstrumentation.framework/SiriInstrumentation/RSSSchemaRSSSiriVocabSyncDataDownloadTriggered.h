@class NSData;

@interface RSSSchemaRSSSiriVocabSyncDataDownloadTriggered : SISchemaInstrumentationMessage {
    struct { unsigned char trigger : 1; unsigned char syncData : 1; } _has;
}

@property (nonatomic) int trigger;
@property (nonatomic) BOOL hasTrigger;
@property (nonatomic) int syncData;
@property (nonatomic) BOOL hasSyncData;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteSyncData;
- (void)deleteTrigger;

@end
