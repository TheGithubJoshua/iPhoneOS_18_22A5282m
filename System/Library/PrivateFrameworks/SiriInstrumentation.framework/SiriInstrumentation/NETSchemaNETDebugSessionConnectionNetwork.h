@class NSData;

@interface NETSchemaNETDebugSessionConnectionNetwork : SISchemaInstrumentationMessage {
    struct { unsigned char wiFiPhyMode : 1; unsigned char signalStrengthBars : 1; unsigned char openTimeInMs : 1; unsigned char connectedSubflowCount : 1; } _has;
}

@property (nonatomic) int wiFiPhyMode;
@property (nonatomic) BOOL hasWiFiPhyMode;
@property (nonatomic) double signalStrengthBars;
@property (nonatomic) BOOL hasSignalStrengthBars;
@property (nonatomic) double openTimeInMs;
@property (nonatomic) BOOL hasOpenTimeInMs;
@property (nonatomic) unsigned int connectedSubflowCount;
@property (nonatomic) BOOL hasConnectedSubflowCount;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteConnectedSubflowCount;
- (void)deleteOpenTimeInMs;
- (void)deleteSignalStrengthBars;
- (void)deleteWiFiPhyMode;

@end
