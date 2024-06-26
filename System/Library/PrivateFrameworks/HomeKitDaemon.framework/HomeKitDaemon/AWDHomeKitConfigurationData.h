@class NSMutableArray;

@interface AWDHomeKitConfigurationData : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char databaseSize : 1; unsigned char metadataVersion : 1; unsigned char hasActiveWatchDevice : 1; unsigned char hasWatchDevice : 1; unsigned char isDemoConfiguration : 1; unsigned char isResidentCapable : 1; unsigned char isResidentEnabled : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasDatabaseSize;
@property (nonatomic) unsigned int databaseSize;
@property (nonatomic) BOOL hasMetadataVersion;
@property (nonatomic) unsigned int metadataVersion;
@property (nonatomic) BOOL hasIsResidentCapable;
@property (nonatomic) BOOL isResidentCapable;
@property (nonatomic) BOOL hasIsResidentEnabled;
@property (nonatomic) BOOL isResidentEnabled;
@property (retain, nonatomic) NSMutableArray *homeConfigurations;
@property (nonatomic) BOOL hasIsDemoConfiguration;
@property (nonatomic) BOOL isDemoConfiguration;
@property (nonatomic) BOOL hasHasWatchDevice;
@property (nonatomic) BOOL hasWatchDevice;
@property (nonatomic) BOOL hasHasActiveWatchDevice;
@property (nonatomic) BOOL hasActiveWatchDevice;

+ (Class)homeConfigurationsType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addHomeConfigurations:(id)a0;
- (void)clearHomeConfigurations;
- (id)homeConfigurationsAtIndex:(unsigned long long)a0;
- (unsigned long long)homeConfigurationsCount;

@end
