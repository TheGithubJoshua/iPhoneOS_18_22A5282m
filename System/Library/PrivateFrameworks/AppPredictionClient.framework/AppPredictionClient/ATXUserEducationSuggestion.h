@class NSUUID;

@interface ATXUserEducationSuggestion : NSObject <ATXUserEducationSuggestion, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *uuid;

+ (long long)suggestionType;

- (id)initWithCoder:(id)a0;
- (id)initWithUUID:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithRandomUUID;

@end
