@class NSMutableArray;

@interface NPKProtoStandalonePaymentProvisioningFlowManualEntryStepContext : PBCodable <NSCopying> {
    struct { unsigned char cameraFirstProvisioningEnabled : 1; } _has;
}

@property (nonatomic) BOOL hasCameraFirstProvisioningEnabled;
@property (nonatomic) BOOL cameraFirstProvisioningEnabled;
@property (retain, nonatomic) NSMutableArray *setupFields;

+ (Class)setupFieldsType;

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
- (void)addSetupFields:(id)a0;
- (void)clearSetupFields;
- (id)setupFieldsAtIndex:(unsigned long long)a0;
- (unsigned long long)setupFieldsCount;

@end
