@class NSString, ODCurareReportFillerModelHyperparameters, ODCurareReportFillerDataSet;

@interface ODCurareReportFillerModelInformation : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *modelName;
@property (readonly, nonatomic) BOOL hasModelCreationDate;
@property (retain, nonatomic) NSString *modelCreationDate;
@property (nonatomic) BOOL isDefaultModel;
@property (readonly, nonatomic) BOOL hasDataUsedToPersonalizeModel;
@property (retain, nonatomic) ODCurareReportFillerDataSet *dataUsedToPersonalizeModel;
@property (readonly, nonatomic) BOOL hasModelHyperparameters;
@property (retain, nonatomic) ODCurareReportFillerModelHyperparameters *modelHyperparameters;

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
