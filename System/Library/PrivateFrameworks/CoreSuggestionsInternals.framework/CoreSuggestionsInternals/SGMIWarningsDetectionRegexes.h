@class NSDictionary, SGMIWarningsDetectionRegex;

@interface SGMIWarningsDetectionRegexes : NSObject

@property (readonly, nonatomic) SGMIWarningsDetectionRegex *subject;
@property (readonly, nonatomic) SGMIWarningsDetectionRegex *body;
@property (readonly, nonatomic) NSDictionary *dataDetectorMappedAdditions;
@property (readonly, nonatomic) NSDictionary *dataDetectorAdditions;

+ (id)_loadDataDetectorAdditionDict:(id)a0;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end