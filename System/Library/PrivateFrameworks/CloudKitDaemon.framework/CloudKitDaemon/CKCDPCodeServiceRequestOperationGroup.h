@class NSString;

@interface CKCDPCodeServiceRequestOperationGroup : PBCodable <NSCopying> {
    struct { unsigned char operationGroupQuantity : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasOperationId;
@property (retain, nonatomic) NSString *operationId;
@property (readonly, nonatomic) BOOL hasOperationGroupId;
@property (retain, nonatomic) NSString *operationGroupId;
@property (readonly, nonatomic) BOOL hasOperationGroupName;
@property (retain, nonatomic) NSString *operationGroupName;
@property (nonatomic) BOOL hasOperationGroupQuantity;
@property (nonatomic) long long operationGroupQuantity;

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
