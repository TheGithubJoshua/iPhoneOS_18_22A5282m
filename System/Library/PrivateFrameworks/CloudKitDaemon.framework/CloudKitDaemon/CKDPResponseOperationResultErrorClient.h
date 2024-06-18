@class CKDPMoveOplockFailure, CKDPOplockFailure, CKDPUniqueFieldFailure;

@interface CKDPResponseOperationResultErrorClient : PBCodable <NSCopying> {
    CKDPMoveOplockFailure *_moveOplockFailure;
    CKDPOplockFailure *_oplockFailure;
    CKDPUniqueFieldFailure *_uniqueFieldFailure;
    struct { unsigned char type : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasOplockFailure;
@property (retain, nonatomic) CKDPOplockFailure *oplockFailure;
@property (readonly, nonatomic) BOOL hasUniqueFieldFailure;
@property (retain, nonatomic) CKDPUniqueFieldFailure *uniqueFieldFailure;
@property (readonly, nonatomic) BOOL hasMoveOplockFailure;
@property (retain, nonatomic) CKDPMoveOplockFailure *moveOplockFailure;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;

- (int)StringAsType:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)_typeCKLogValue;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)typeAsString:(int)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
