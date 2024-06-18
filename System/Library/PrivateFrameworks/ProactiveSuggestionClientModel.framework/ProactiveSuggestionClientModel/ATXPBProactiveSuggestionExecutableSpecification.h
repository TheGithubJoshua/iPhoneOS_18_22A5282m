@class NSData, NSString;

@interface ATXPBProactiveSuggestionExecutableSpecification : PBCodable <NSCopying> {
    struct { unsigned char executableObjectHash : 1; unsigned char executableType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasExecutable;
@property (retain, nonatomic) NSData *executable;
@property (nonatomic) BOOL hasExecutableObjectHash;
@property (nonatomic) unsigned long long executableObjectHash;
@property (readonly, nonatomic) BOOL hasExecutableClassString;
@property (retain, nonatomic) NSString *executableClassString;
@property (readonly, nonatomic) BOOL hasExecutableDescription;
@property (retain, nonatomic) NSString *executableDescription;
@property (readonly, nonatomic) BOOL hasExecutableIdentifier;
@property (retain, nonatomic) NSString *executableIdentifier;
@property (nonatomic) BOOL hasExecutableType;
@property (nonatomic) int executableType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)executableTypeAsString:(int)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsExecutableType:(id)a0;

@end
