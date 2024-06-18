@class NSArray;

@interface AFSpeechInterpretation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *tokens;

- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)text;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (long long)confidenceScore;
- (long long)averageConfidenceScore;
- (long long)confidenceScoreAvg;
- (long long)confidenceScoreMax;
- (long long)confidenceScoreMin;

@end
