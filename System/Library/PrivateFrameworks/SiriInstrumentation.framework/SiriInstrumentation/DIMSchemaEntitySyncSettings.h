@class NSData;

@interface DIMSchemaEntitySyncSettings : SISchemaInstrumentationMessage {
    struct { unsigned char isMediaEntitySyncEnabled : 1; } _has;
}

@property (nonatomic) BOOL isMediaEntitySyncEnabled;
@property (nonatomic) BOOL hasIsMediaEntitySyncEnabled;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteIsMediaEntitySyncEnabled;

@end
