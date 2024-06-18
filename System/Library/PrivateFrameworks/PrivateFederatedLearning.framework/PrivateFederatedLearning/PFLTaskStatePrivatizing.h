@class NSData, NSDictionary, NSNumber;

@interface PFLTaskStatePrivatizing : NSObject <PFLTaskState>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *diff;
@property (readonly, nonatomic) NSDictionary *metrics;
@property (readonly, nonatomic) NSNumber *numValidationSamples;

- (id)initWithCoder:(id)a0;
- (unsigned long long)tag;
- (void)suspend;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithGradientDiff:(id)a0 metrics:(id)a1 numValidationSamples:(id)a2;
- (void)resume:(id)a0 completion:(id /* block */)a1;

@end
