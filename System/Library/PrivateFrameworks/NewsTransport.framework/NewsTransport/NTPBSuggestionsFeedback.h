@class NSString, NSMutableArray;

@interface NTPBSuggestionsFeedback : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *grades;
@property (readonly, nonatomic) BOOL hasFeedback;
@property (retain, nonatomic) NSString *feedback;

+ (Class)gradesType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addGrades:(id)a0;
- (void)clearGrades;
- (id)gradesAtIndex:(unsigned long long)a0;
- (unsigned long long)gradesCount;

@end
