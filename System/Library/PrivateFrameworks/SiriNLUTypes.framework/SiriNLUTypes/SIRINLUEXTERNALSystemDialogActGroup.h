@class SIRINLUEXTERNALSystemDialogAct, NSMutableArray;

@interface SIRINLUEXTERNALSystemDialogActGroup : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasSystemDialogAct;
@property (retain, nonatomic) SIRINLUEXTERNALSystemDialogAct *systemDialogAct;
@property (retain, nonatomic) NSMutableArray *childActs;

+ (Class)childActsType;

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
- (void)addChildActs:(id)a0;
- (id)childActsAtIndex:(unsigned long long)a0;
- (unsigned long long)childActsCount;
- (void)clearChildActs;

@end
