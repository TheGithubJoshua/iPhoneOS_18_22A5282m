@class NSDictionary, NSNumber, NSData;

@interface PFLTaskStateUploading : NSObject <PFLTaskState>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long diffCount;
@property (readonly, nonatomic) NSDictionary *metrics;
@property (readonly, nonatomic) NSNumber *numValidationSamples;
@property (readonly, nonatomic) NSData *privatizedDiff;

- (id)initWithCoder:(id)a0;
- (unsigned long long)tag;
- (void)suspend;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithPrivatizedDiff:(id)a0 diffCount:(long long)a1 metrics:(id)a2 numValidationSamples:(id)a3;
- (void)resume:(id)a0 completion:(id /* block */)a1;

@end
