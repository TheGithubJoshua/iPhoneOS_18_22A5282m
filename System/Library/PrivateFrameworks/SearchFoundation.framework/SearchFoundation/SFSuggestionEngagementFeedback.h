@class SFSearchSuggestion;

@interface SFSuggestionEngagementFeedback : SFFeedback

@property (retain, nonatomic) SFSearchSuggestion *suggestion;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSuggestion:(id)a0;

@end
