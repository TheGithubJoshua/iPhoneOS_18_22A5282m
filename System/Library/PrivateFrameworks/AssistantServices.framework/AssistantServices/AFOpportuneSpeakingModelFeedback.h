@class NSDictionary, NSDate;

@interface AFOpportuneSpeakingModelFeedback : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *lastNegativeFeedback;
@property (retain, nonatomic) NSDictionary *negativeFeedbackByContact;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
