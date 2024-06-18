@class NSData;

@interface NETSchemaNETBluetoothDevice : SISchemaInstrumentationMessage {
    struct { unsigned char index : 1; unsigned char rssi : 1; } _has;
}

@property (nonatomic) unsigned int index;
@property (nonatomic) BOOL hasIndex;
@property (nonatomic) double rssi;
@property (nonatomic) BOOL hasRssi;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteIndex;
- (void)deleteRssi;

@end
