@class NSMutableArray;

@interface NPKProtoPaymentSetupFeaturesForConfigurationResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *paymentSetupFeatureDatas;

+ (Class)paymentSetupFeatureDataType;

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
- (id)paymentSetupFeatureDataAtIndex:(unsigned long long)a0;
- (void)addPaymentSetupFeatureData:(id)a0;
- (void)clearPaymentSetupFeatureDatas;
- (unsigned long long)paymentSetupFeatureDatasCount;

@end
