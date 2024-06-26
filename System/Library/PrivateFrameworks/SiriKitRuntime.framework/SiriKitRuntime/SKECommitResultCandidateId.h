@class NSString;

@interface SKECommitResultCandidateId : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ resultCandidateId;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
