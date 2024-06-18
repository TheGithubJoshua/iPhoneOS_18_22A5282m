@class NSArray, NSMutableArray;

@interface HDHRSExtractionFailureInfo : NSObject <NSSecureCoding> {
    NSMutableArray *_failureRecords;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *failureRecords;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)addFailureRecord:(id)a0;

@end
