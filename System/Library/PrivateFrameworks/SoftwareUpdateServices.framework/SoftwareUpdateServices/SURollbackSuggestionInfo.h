@class NSString, NSArray;

@interface SURollbackSuggestionInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *clientIdentifier;
@property (nonatomic) unsigned long long suggestionReason;
@property (retain, nonatomic) NSArray *responsibleProcessesInfo;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
