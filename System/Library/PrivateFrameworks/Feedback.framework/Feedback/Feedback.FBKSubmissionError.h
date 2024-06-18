@class NSDictionary, NSString;

@interface Feedback.FBKSubmissionError : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ serverErrorDetails;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSDictionary *serverErrorDetails;
@property (nonatomic, retain) void /* unknown type, empty encoding */ underlyingError;
@property (nonatomic, readonly) NSString *description;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
