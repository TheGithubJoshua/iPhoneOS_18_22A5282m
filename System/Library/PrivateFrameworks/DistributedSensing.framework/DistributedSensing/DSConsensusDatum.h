@class NSString, NSDate;

@interface DSConsensusDatum : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) unsigned char confidence;
@property (retain, nonatomic) NSDate *time;

- (void).cxx_destruct;
- (void)printInfo;
- (id)initWithIdentifier:(id)a0 andConfidence:(unsigned char)a1 atTime:(id)a2;

@end
