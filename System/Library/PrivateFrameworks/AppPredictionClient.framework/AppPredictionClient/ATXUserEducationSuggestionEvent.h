@protocol ATXUserEducationSuggestion;

@interface ATXUserEducationSuggestionEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id<ATXUserEducationSuggestion> userEducationSuggestion;
@property (readonly, nonatomic) unsigned long long userEducationSuggestionEventType;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithUserEducationSuggestion:(id)a0 userEducationSuggestionEventType:(unsigned long long)a1;

@end
