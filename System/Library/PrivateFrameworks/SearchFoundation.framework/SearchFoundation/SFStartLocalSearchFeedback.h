@class NSString, SFPerformEntityQueryCommand, SFIndexState;

@interface SFStartLocalSearchFeedback : SFStartSearchFeedback

@property (nonatomic) unsigned long long indexType;
@property (copy, nonatomic) NSString *originatingApp;
@property (copy, nonatomic) SFPerformEntityQueryCommand *entityQueryCommand;
@property (retain, nonatomic) SFIndexState *indexState;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)initWithEntityQueryCommand:(id)a0 triggerEvent:(unsigned long long)a1 searchType:(unsigned long long)a2 indexType:(unsigned long long)a3 queryId:(unsigned long long)a4 originatingApp:(id)a5;
- (id)initWithInput:(id)a0 triggerEvent:(unsigned long long)a1 searchType:(unsigned long long)a2 indexType:(unsigned long long)a3 queryId:(unsigned long long)a4 originatingApp:(id)a5;
- (id)initWithInput:(id)a0 triggerEvent:(unsigned long long)a1 indexType:(unsigned long long)a2 queryId:(unsigned long long)a3;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithInput:(id)a0 triggerEvent:(unsigned long long)a1 searchType:(unsigned long long)a2 indexType:(unsigned long long)a3 queryId:(unsigned long long)a4;
- (id)initWithInput:(id)a0 triggerEvent:(unsigned long long)a1 indexType:(unsigned long long)a2;

@end
