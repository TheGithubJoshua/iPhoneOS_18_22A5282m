@class NSString, NSArray, SPQueryTask;

@interface SPQueryResponse : NSObject

@property (retain, nonatomic) NSString *sessionEntityString;
@property (retain, nonatomic) NSArray *resultSections;
@property (retain, nonatomic) SPQueryTask *task;
@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long kind;

- (id)initWithTask:(id)a0;
- (id)init;
- (id)copy;
- (void).cxx_destruct;
- (id)description;

@end
