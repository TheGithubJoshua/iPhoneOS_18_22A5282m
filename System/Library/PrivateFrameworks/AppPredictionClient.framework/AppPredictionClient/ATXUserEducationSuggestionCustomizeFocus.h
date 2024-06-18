@interface ATXUserEducationSuggestionCustomizeFocus : ATXUserEducationSuggestion

@property (readonly, nonatomic) long long modeSemanticType;

+ (long long)suggestionType;
+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithModeSemanticType:(long long)a0;

@end
