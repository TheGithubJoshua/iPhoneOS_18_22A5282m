@class NSMutableArray;

@interface _MRSupportedCommandsProtobuf : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *supportedCommands;

+ (Class)supportedCommandType;

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
- (void)addSupportedCommand:(id)a0;
- (void)clearSupportedCommands;
- (id)supportedCommandAtIndex:(unsigned long long)a0;
- (unsigned long long)supportedCommandsCount;

@end
