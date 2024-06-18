@class _MRGameControllerAccelerationProtobuf;

@interface _MRGameControllerMotionProtobuf : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasGravity;
@property (retain, nonatomic) _MRGameControllerAccelerationProtobuf *gravity;
@property (readonly, nonatomic) BOOL hasUserAcceleration;
@property (retain, nonatomic) _MRGameControllerAccelerationProtobuf *userAcceleration;
@property (readonly, nonatomic) BOOL hasAttitude;
@property (retain, nonatomic) _MRGameControllerAccelerationProtobuf *attitude;
@property (readonly, nonatomic) BOOL hasRotation;
@property (retain, nonatomic) _MRGameControllerAccelerationProtobuf *rotation;

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

@end