@class NSData, _MRAudioFormatSettingsProtobuf, NSMutableArray;

@interface _MRAudioBufferProtobuf : PBCodable <NSCopying> {
    struct { unsigned char maximumPacketSize : 1; unsigned char packetCapacity : 1; unsigned char packetCount : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasFormatSettings;
@property (retain, nonatomic) _MRAudioFormatSettingsProtobuf *formatSettings;
@property (nonatomic) BOOL hasPacketCapacity;
@property (nonatomic) long long packetCapacity;
@property (nonatomic) BOOL hasMaximumPacketSize;
@property (nonatomic) long long maximumPacketSize;
@property (nonatomic) BOOL hasPacketCount;
@property (nonatomic) long long packetCount;
@property (readonly, nonatomic) BOOL hasContents;
@property (retain, nonatomic) NSData *contents;
@property (retain, nonatomic) NSMutableArray *packetDescriptions;

+ (Class)packetDescriptionsType;

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
- (void)addPacketDescriptions:(id)a0;
- (void)clearPacketDescriptions;
- (id)packetDescriptionsAtIndex:(unsigned long long)a0;
- (unsigned long long)packetDescriptionsCount;

@end
