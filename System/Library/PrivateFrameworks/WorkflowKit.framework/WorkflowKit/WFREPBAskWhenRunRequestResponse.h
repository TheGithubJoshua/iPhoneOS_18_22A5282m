@class NSString, NSMutableArray, WFREPBError;

@interface WFREPBAskWhenRunRequestResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *originatingRequestIdentifier;
@property (retain, nonatomic) NSMutableArray *inputtedStates;
@property (readonly, nonatomic) BOOL hasError;
@property (retain, nonatomic) WFREPBError *error;

+ (Class)inputtedStatesType;

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
- (void)addInputtedStates:(id)a0;
- (void)clearInputtedStates;
- (id)inputtedStatesAtIndex:(unsigned long long)a0;
- (unsigned long long)inputtedStatesCount;

@end
