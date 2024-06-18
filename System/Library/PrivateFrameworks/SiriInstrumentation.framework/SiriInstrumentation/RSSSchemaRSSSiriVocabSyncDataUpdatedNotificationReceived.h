@class NSData;

@interface RSSSchemaRSSSiriVocabSyncDataUpdatedNotificationReceived : SISchemaInstrumentationMessage {
    struct { unsigned char syncDataUpdateNotificationLatencyInMs : 1; } _has;
}

@property (nonatomic) unsigned long long syncDataUpdateNotificationLatencyInMs;
@property (nonatomic) BOOL hasSyncDataUpdateNotificationLatencyInMs;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteSyncDataUpdateNotificationLatencyInMs;

@end
