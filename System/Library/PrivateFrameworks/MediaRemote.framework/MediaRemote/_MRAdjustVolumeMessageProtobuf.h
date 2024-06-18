@class NSString;

@interface _MRAdjustVolumeMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned char adjustment : 1; } _has;
}

@property (nonatomic) BOOL hasAdjustment;
@property (nonatomic) int adjustment;
@property (readonly, nonatomic) BOOL hasOutputDeviceUID;
@property (retain, nonatomic) NSString *outputDeviceUID;

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
- (int)StringAsAdjustment:(id)a0;
- (id)adjustmentAsString:(int)a0;

@end
