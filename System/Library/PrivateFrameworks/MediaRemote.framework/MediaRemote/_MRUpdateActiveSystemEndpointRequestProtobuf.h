@class NSString;

@interface _MRUpdateActiveSystemEndpointRequestProtobuf : PBCodable <NSCopying> {
    struct { unsigned char changeType : 1; unsigned char pairedDeviceSync : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasOutputDeviceUID;
@property (retain, nonatomic) NSString *outputDeviceUID;
@property (nonatomic) BOOL hasChangeType;
@property (nonatomic) int changeType;
@property (readonly, nonatomic) BOOL hasReason;
@property (retain, nonatomic) NSString *reason;
@property (nonatomic) BOOL hasPairedDeviceSync;
@property (nonatomic) BOOL pairedDeviceSync;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (int)StringAsChangeType:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)changeTypeAsString:(int)a0;

@end
