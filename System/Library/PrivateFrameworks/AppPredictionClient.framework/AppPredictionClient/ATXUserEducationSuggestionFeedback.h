@protocol ATXUserEducationSuggestion;

@interface ATXUserEducationSuggestionFeedback : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id<ATXUserEducationSuggestion> userEducationSuggestion;
@property (readonly, nonatomic) unsigned long long feedbackType;

- (id)suggestion;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithUserEducationSuggestion:(id)a0 feedbackType:(unsigned long long)a1;

@end
