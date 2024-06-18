@class NSData;

@interface DIMSchemaDIMWatchDeviceAttributes : SISchemaInstrumentationMessage {
    struct { unsigned char isSatellitePaired : 1; unsigned char watchArmOrientation : 1; } _has;
}

@property (nonatomic) BOOL isSatellitePaired;
@property (nonatomic) BOOL hasIsSatellitePaired;
@property (nonatomic) int watchArmOrientation;
@property (nonatomic) BOOL hasWatchArmOrientation;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteIsSatellitePaired;
- (void)deleteWatchArmOrientation;

@end
