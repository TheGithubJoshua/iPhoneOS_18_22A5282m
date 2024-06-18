@class NSString, NSMutableArray, NSData;

@interface WFREPBRunRequestResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *runRequestIdentifier;
@property (retain, nonatomic) NSMutableArray *variablesDatas;
@property (retain, nonatomic) NSMutableArray *outputDatas;
@property (readonly, nonatomic) BOOL hasErrorData;
@property (retain, nonatomic) NSData *errorData;

+ (Class)outputDataType;
+ (Class)variablesDataType;

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
- (void)addOutputData:(id)a0;
- (void)addVariablesData:(id)a0;
- (void)clearOutputDatas;
- (void)clearVariablesDatas;
- (id)outputDataAtIndex:(unsigned long long)a0;
- (unsigned long long)outputDatasCount;
- (id)variablesDataAtIndex:(unsigned long long)a0;
- (unsigned long long)variablesDatasCount;

@end
